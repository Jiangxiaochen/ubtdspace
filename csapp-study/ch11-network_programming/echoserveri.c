#include "csapp.h"

typedef struct sockaddr_storage sockaddr_storage;
void echo(int connfd);

int main(int argc, char const *argv[])
{
	int listenfd, connfd;
	socklen_t clientlen;
	sockaddr_storage clientaddr;
	char client_hostname[MAXLINE], client_port[MAXLINE];

	if(argc != 2){
		fprintf(stderr, "usage: %s <port>\n", argv[0]);
		exit(0);
	}

	listenfd = Open_listenfd(argv[1]);
	while(1){
		clientlen = sizeof(sockaddr_storage);
		connfd = Accept(listenfd, (SA *)&clientaddr, &clientlen);
		Getnameinfo((SA *)&clientaddr, clientlen, client_hostname, MAXLINE, client_port, MAXLINE, 0);
		printf("connected to (%s %s)\n", client_hostname, client_port);
		echo(connfd);
		Close(connfd);
	}

	return 0;
}