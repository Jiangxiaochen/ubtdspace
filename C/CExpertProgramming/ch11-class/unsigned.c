#include <jxcutils.h>

#define ISUNSIGNED(a) (a >= (_Bool)0 && ~a >= (_Bool)0)

int main()
{
	signed char a = 1;
	unsigned char b = 2;
	signed int c = -1;
	signed int d = 1;
	unsigned int e = 2;

	if(ISUNSIGNED(a)) printf("a\n");
	if(ISUNSIGNED(b)) printf("b\n");
	if(ISUNSIGNED(c)) printf("c\n");
	if(ISUNSIGNED(d)) printf("d\n");
	if(ISUNSIGNED(e)) printf("e\n");
}
