#include <iostream>
#include <string>
using namespace std;

typedef int (*ptr_arr_10_int)[10];

int (*func(int i))[10]{}

char &get_val(string &str, string::size_type ix)
{
	return str[ix];
}

int main()
{
	string s("a value");
	cout << s << endl;
	get_val(s, 0) = 'A';
	cout << s << endl;

	ptr_arr_10_int handler = func(10);
}
