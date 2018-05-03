#include "jxcutils.h"

int b;
static int a;
int c = 10;
static int d = 10;
int e = 0;
static int f = 0;

void g()
{

}

int main()
{
	int i;
	printf("The stack top is near %p\n", &i);
	printf("un_inited: ap:%p bp:%p\n", &a, &b);
	printf("inited: cp:%p db:%p\n", &c, &d);
	printf("inited_0: ep:%p, fp:%p\n", &e, &f);
	printf("global function: g:%p\n", g);
	return 0;
}
