#include "jxcutils.h"

typedef struct{
	unsigned int f1:1;
	unsigned int f2:1;
	unsigned int f3:1;
	unsigned int type:4;
	unsigned int index:9;
} my_st;

int main()
{
	my_st a;
	memset(&a, 0, sizeof(a));
	printf("sizeof(my_st): %lu\n", sizeof(a));
	show_bytes(&a,sizeof(a));

	a.f1 = 1;
	a.f2 = 1;
	a.f3 = 1;
	a.type = 0x120f;
	a.index = 1;
	show_bytes(&a, sizeof(a));
	show_bits(&a,sizeof(a));
}


