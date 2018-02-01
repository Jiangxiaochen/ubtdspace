#include "sys/types.h"
#include "stdio.h"
#include "inttypes.h"
typedef unsigned __int128 uint128_t;

void store_uprod(uint128_t *dest, uint64_t x, uint64_t y)
{
	*dest = x * (uint128_t)y;
}

void remdiv(long x, long y, long *qp, long *rp)
{
	long q = x / y;
	long r = x % y;
	*qp = q;
	*rp = r;
}


int main(int argc, char const *argv[])
{
	// printf("sizeof uint64 %lu\n", sizeof(uint64_t));
	// printf("sizeof unit128 %lu\n", sizeof(uint128_t));
	long a,b;
	remdiv(1,2,&a,&b);
	return 0;
}

