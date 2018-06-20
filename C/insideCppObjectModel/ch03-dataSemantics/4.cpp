#include "mycpp.h"

struct test{
	int a;
	static int b;
	int c;
};
int test::b = 10;

int main()
{
	auto a = &test::a;
	auto b = &test::b;
	auto c = &test::c;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	return 0;
}
