#include "jxcutils.h"
int ival = 1024;

int &refVal = ival;

int *p2Val = &ival;

const int *p2Val2 = &ival;

int main()
{
	printf("%lu %p %lu %p", sizeof(ival), &ival, sizeof(refVal), &refVal);
}
