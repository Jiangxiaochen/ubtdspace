#include "csapp.h"

void echo(int connfd);
void command(void);

typedef struct sockaddr_storage sockaddr_storage;

int main(int argc, char const *argv[])
{
	int listenfd, connfd;
	socklen_t clientlen;
	sockaddr_storage clientaddr;
	fd_set read_set, ready_set;

	if(argc != 2){
		fprintf(stderr, "usage: %s <port>\n", argv[0]);
		exit(0);
	}

	listenfd = Open_listenfd(argv[1]);

	FD_ZERO(&read_set);
	FD_SET(STDIN_FILENO, &read_set);
	FD_SET(listenfd, &read_set);

	while(1){
		ready_set = read_set;
		Select(listenfd+1, &read_set)
	}

	return 0;
}