#include "mycpp.h"

auto f = [](const int &a, const int &b){
	return a+b;
};

int main()
{
	cout << f(1,2) << endl;

	auto b = f(3,4);
	auto c = 10;
	auto f2 = [b,c](int a){
		return a+b+c;
	};

	cout << f2(10) << endl;
}
