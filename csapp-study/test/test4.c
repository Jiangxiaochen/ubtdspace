#include "stdint.h"
#include "stdio.h"
#include "limits.h"
#include "inttypes.h"
#include "csapp.h"

int main(int argc, char const *argv[])
{
	// printf("PRID32: %s PRIU64: %s\n", PRId32, PRId64);
	// int a = -2147483648;
	// printf("%d\n", a);
	// 
	signed char scx = -18;
	//printf("%d\n", sizeof(signed char));
	show_bytes((byte_pointer)&scx,sizeof(signed char));
	signed short ssx = scx;
	unsigned short usx = scx;
	show_bytes((byte_pointer)&ssx,sizeof(signed short));
	show_bytes((byte_pointer)&usx,sizeof(unsigned short));

	return 0;
}
