#include "jxcutils.h"

int main()
{
	time_t t0 = 0;
	t0 = ~t0;
	printf("%lx\n", t0);
	char *a;
	switch(show_endian()){
		case -1:
			exit(1);
		case big_endian:
			a = (char *)&t0;
			*a = 0x7f;
			break;
		case small_endian:
			a = (char *)&t0 + sizeof(time_t) - 1;
			*a = 0x7f;
			break;
	}
	printf("%lx\n", t0);
	char *s = ctime(&t0);
	printf("max time: %s\n", s);
}
