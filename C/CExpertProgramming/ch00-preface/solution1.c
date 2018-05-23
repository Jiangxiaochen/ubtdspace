#include "jxcutils.h"
#include <limits.h>

typedef union 
{
	unsigned int i[2];
	time_t t0;
} u0;

int main()
{
	u0 uu;
	uu.t0 = ~0;
	uu.i[1] >>= 1;
	show_bytes(&uu.t0, sizeof(time_t));
	show_number(&uu.t0, sizeof(time_t));
	printf("%lx\n", uu.t0);
	printf("time: %s\n", ctime(&uu.t0));
	printf("long_max: %ld %lx\n", LONG_MAX, LONG_MAX);
	show_line();

	time_t t = ~0;
	unsigned t1 = t
}
