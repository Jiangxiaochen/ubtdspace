#include "inttypes.h"
#include "stdio.h"
int main(int argc, char const *argv[])
{
	printf("%d\n", INT32_MAX);
	int32_t a = ~0;
	uint32_t *b = (uint32_t *)&a;
	*b >>= 1;
	printf("%d\n", a);
	return 0;
}