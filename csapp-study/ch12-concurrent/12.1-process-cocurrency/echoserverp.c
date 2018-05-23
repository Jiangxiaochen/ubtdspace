#include "csapp.h"

typedef struct sockaddr_storage sockaddr_storage;
void echo(int connfd);
void sigchld_handler(int sig){
	int id;
	while((id = waitpid(-1, 0, WNOHANG)) > 0){
		printf("child %d done\n", id);
	}
	return;
}

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

	Signal(SIGCHLD, sigchld_handler);

	listenfd = Open_listenfd(argv[1]);
	while(1){
		clientlen = sizeof(sockaddr_storage);
		connfd = Accept(listenfd, (SA *)&clientaddr, &clientlen);

		if(Fork() == 0){
			Close(listenfd);
			echo(connfd);
			Close(connfd);
			exit(0);
		}

		Getnameinfo((SA *)&clientaddr, clientlen, client_hostname, MAXLINE, client_port, MAXLINE, 0);
		printf("connected to (%s %s)\n", client_hostname, client_port);
		Close(connfd);
	}

	return 0;
}