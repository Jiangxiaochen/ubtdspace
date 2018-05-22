#include "jxcutils.h"

const int CONSTJXC = 10;

int main()
{
	printf("%d\n", CONSTJXC);
	const int hehe = 11;
	int *p2CJ = (int *)&CONSTJXC;

	*p2CJ = 123;

	printf("%d\n", hehe);
}
