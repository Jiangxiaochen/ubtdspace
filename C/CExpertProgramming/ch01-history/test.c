#include "jxcutils.h"

int main()
{
	int a[10];
	int *b;
	int c;
	b = &c;
	printf("a: %p b: %p\n", a, b);
}
