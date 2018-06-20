#include "mycpp.h"

struct test{
	int a;
	static int s;
	int b;
	int c;
	virtual ~test(){

	}
};

int test::s = 10;

int main()
{
	test t;
	printf("%p %p %p %p\n",&test::a,&test::b,&test::c,&test::s);
//	int test::*p1 = static_cast<int test::*>(0x8);
	*(&t+&test::a) = 999;
	return 0;
}
