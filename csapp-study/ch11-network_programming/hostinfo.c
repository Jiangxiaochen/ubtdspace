#include "csapp.h"

typedef struct addrinfo addrinfo;
#define BUFSIZE 1024


int main(int argc, char const *argv[])
{
	addrinfo *p, *listp, hints;
	char buf1[1024];
	char buf2[1024];
	int rc, flags;

	memset(&hints, 0, sizeof(addrinfo));
	hints.ai_family = AF_INET;
	hints.ai_socktype = SOCK_STREAM;
	if((rc = getaddrinfo(argv[1],argv[2],&hints,&listp)) != 0){
		fprintf(stderr, "getaddrinfo error: %s\n", gai_strerror(rc));
		exit(1);
	}

	flags = NI_NUMERICSERV|NI_NUMERICHOST;
	for(p = listp; p; p = p->ai_next){
		getnameinfo(p->ai_addr, p->ai_addrlen, buf1, BUFSIZE, buf2, BUFSIZE, flags);
		printf("%s\n", buf1);
		printf("%s\n", buf2);
	}

	freeaddrinfo(listp);
	return 0;
}