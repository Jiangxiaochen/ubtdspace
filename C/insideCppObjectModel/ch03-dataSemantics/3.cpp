#include "mycpp.h"

template<typename ct,typename dt1,typename dt2>
char *
access_order(dt1 ct::*m1, dt2 ct::*m2)
{
	return (less<void*>()(m1,m2)) ? "m1 first" : "m2 first";
}

struct test{
	int a;
	int b;
	int c;
	string d;
};

int main()
{
	test t;
	cout << access_order(&test::a,&test::c) << endl;
}
