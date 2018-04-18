#include "jxcutils.h"


void show_bytes(void *start, unsigned len)
{
	printf("0x");
	unsigned char *start1 = (unsigned char *)start;
	for(int i = 0; i < len; i++){
		printf("%.2x", start1[i]);
	}
	printf("\n");
}

void show_number(void *start, unsigned len)
{
	unsigned char *start1 = (unsigned char *)start;
	printf("0x");
	while(len--)
	{
		printf("%.2x",start1[len]);
		if(len == 0) break;
	}
	printf("\n");

}

void show_line()
{
	printf("-------------------------------\n");
}

int show_endian()
{
	unsigned short a = 0x1234;
	unsigned char b = *(unsigned char *)&a;
	if(b == 0x12) return big_endian;
	if(b == 0x34) return small_endian;
	return -1;
}

