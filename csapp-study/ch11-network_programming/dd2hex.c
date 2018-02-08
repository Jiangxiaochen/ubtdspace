#include "csapp.h"

int main(int argc, char const *argv[])
{
	struct in_addr inaddr;
	if(!(inet_pton(AF_INET,argv[1],&inaddr))){
		unix_error("inet_pton error");
	}
	printf("abcd%%   0x%x\n", ntohl(inaddr.s_addr));
	return 0;
}