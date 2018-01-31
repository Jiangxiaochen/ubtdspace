#include "stdio.h"
#include "stdint.h"

typedef int64_t word;

void showWord(char * f, word a)
{
	unsigned char * p = (unsigned char *)&a;
	printf("%s 0x", f);
	for (int i = sizeof(word) - 1; i >= 0; --i)
	{
		printf("%.2X", *(p + i));
	}
	printf("\n");
}

void A(word x)
{
	word mask = 0xFF;
	showWord("a's mask:", mask);
	x &= mask;
	showWord("after a:", x);
}

void B(word x)
{
	word mask = ~0;
	mask <<= 8;
	showWord("b's mask:", mask);
	x ^= mask;
	showWord("after b:", x);
}

void C(word x)
{
	word mask = 0xFF;
	showWord("c's mask:", mask);
	x |= mask;
	showWord("after c:", x);
}

word main(word argc, char const *argv[])
{
	size_t mysize = sizeof(word);
	printf("sizeof(word): %lu\n", sizeof(word));
	word a = 0;
	showWord("word", a);
	A(a);
	B(a);
	C(a);
}

