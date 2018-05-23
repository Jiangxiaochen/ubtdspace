#include <iostream>

using namespace std;

int f(int &a)
{
	a = 2;
	return 0;
}


int main()
{
	int aa = 10;
	f(aa);
	cout << aa << endl;
}
