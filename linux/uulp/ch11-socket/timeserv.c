#include <netinet/in.h>
#include <netdb.h>
#include <time.h>
#include <unistd.h>
#include <stdio.h>
#include <strings.h>

#define PORTNUM 13000
#define HOSTLEN	256
#define oops(msg) {perror(msg);exit(1);}

int main(int ac, char **av)
{
	struct sockaddr_in saddr;	//addr
	struct hostent *hp;			//part of our address
	char hostname[HOSTLEN];
	int sock_id, sock_fd;
	FILE *sock_fp;				//use socket as stream
	char *ctime();				//convert secs to string
	time_t thetime;				//the time we report

	//ask kernel for a socket
	sock_id = socket(PF_INET, SOCK_STREAM, 0);
	if(sock_id == -1) oops("socket");

	//bind address to socket
	bzero((void *)&saddr, sizeof(saddr));
	gethostname(hostname, HOSTLEN);
	hp = gethostbyname(hostname);
}
