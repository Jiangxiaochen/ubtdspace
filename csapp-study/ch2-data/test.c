#include "stdint.h"
#include "stdio.h"

int main(int argc, char const *argv[])
{
	uint16_t a = 0xabcd;
	uint8_t b = *((uint8_t *)&a);
	if(b == 0xab)
	{
		printf("big endian: b = 0x%x\n", b);
	}
	else
	{
		printf("small endian: b = 0x%x\n", b);
	}
	return 0;
}