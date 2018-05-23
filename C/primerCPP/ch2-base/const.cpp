#include "jxcutils.h"

const int CONSTJXC = 10;

int f()
{
	return 3 * 4;
}

int main()
{
	const int hehe = f();
	printf("%d\n",hehe);
	int *p = (int *)&hehe;
	printf("%d\n",CONSTJXC);
	*p = 30;
	printf("%d\n",hehe);

	*p = 40;
	printf("%d\n", hehe);
}
