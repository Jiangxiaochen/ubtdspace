#include <iostream>
#include <string>
using namespace std;

istream& read(istream& is)
{
	int a;
	while (true){
		while (is >> a){ cout << a << endl;}
		if (!is.eof()){
			is.clear();
			string str;
			getline(is, str);
			cout << "error input: " << str << endl;
		}else{
			break;
		}
	}
	is.clear();
	return is;
}

int main()
{
	read(cin);

}

