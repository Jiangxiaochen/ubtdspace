#include "csapp.h"

int main(int argc, char const *argv[])
{
	// const char *src = argv[1];
	// char s[100];
	// int a = inet_pton(AF_INET, src, s);
	// printf("%x\n", a);
	// printf("%s\n", s);
	// char s2[100];
	// const char *p = inet_ntop(AF_INET, s, s2, 100);
	// printf("%s %s\n", s2, p);
	// printf("%p %p\n", &s2, &p);
	// return 0;
	struct in_addr inaddr;
	uint32_t addr;
	char buf[100];

	sscanf(argv[1], "%x", &addr);
	inaddr.s_addr = htonl(addr);
	printf("%s\n", inet_ntop(AF_INET, &inaddr, buf, 100));
}