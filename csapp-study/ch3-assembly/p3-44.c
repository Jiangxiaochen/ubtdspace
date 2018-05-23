#include "stdio.h"


struct p1
{
	int i;		// 0
	char c;		// 4
	int j;		// 8
	char d;		// 12 4
};

struct p2
{
	int i;		// 0
	char c;		// 4
	char d;		// 5
	long j;		// 8 8
};

struct p3
{
	short w[3];	// 0
	char c[3];	// 6 4
};

struct p4
{
	short w[5];	// 0
	char *c[3];	// 16 24 
};

struct p5
{
	struct p3 a[2];	// 0
	struct p2 t;	// 32 16 = 48 这是错误的, 
};

struct p5_right
{
	struct p3 a[2];	// 0
	struct p2 t;	// 20 20 = 40
};

int main(int argc, char const *argv[])
{
	printf("%lu\n", sizeof(struct p1));
	printf("%lu\n", sizeof(struct p2));
	printf("%lu\n", sizeof(struct p3));
	printf("%lu\n", sizeof(struct p4));
	printf("%lu\n", sizeof(struct p5));

	return 0;
}