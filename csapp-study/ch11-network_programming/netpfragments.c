#include "csapp.h"

int main(int argc, char const *argv[])
{
	uint32_t a = 0x12345678;
	char c;
	c = *((char *)&a);
	printf("%x\n", c);
	if(c == 0x78) printf("%s\n", "small endian");
	if(c == 0x12) printf("%s\n", "big endian");

	a = htonl(a);
	printf("%s\n", "after htonl:");
	c = *((char *)&a);
	printf("%x\n", c);
	if(c == 0x78) printf("%s\n", "small endian");
	if(c == 0x12) printf("%s\n", "big endian");
	return 0;
}