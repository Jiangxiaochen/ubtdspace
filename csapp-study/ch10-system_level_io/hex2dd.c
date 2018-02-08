#include "csapp.h"

int main(int argc, char const *argv[])
{
	const char *src = argv[1];
	int a = inet_pton(AF_INET, src, NULL);
	printf("%x\n", a);
	return 0;
}