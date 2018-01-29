#include "csapp.h"



void echo(int connfd);
void *thread(void *vargp);
typedef struct sockaddr_storage sockaddr_storage;


int main(int argc, char const *argv[])
{
	int listenfd, *connfdp;
	socklen_t clientlen;
	sockaddr_storage clientaddr;
	pthread_t tid;

	if(argc != 2){
		fprintf(stderr, "usage: %s <port>\n", argv[0]);
		exit(0);
	}

	listenfd = Open_listenfd(argv[1]);

	clientlen = sizeof(sockaddr_storage);
	while(1){
		connfdp = Malloc(sizeof(int));
		*connfdp = Accept(listenfd, (SA *)&clientaddr, &clientlen);
		Pthread_create(&tid, NULL, thread, connfdp);
	}
	return 0;
}

void *thread(void *vargp){
	int connfd = *((int *)vargp);
	Pthread_detach(pthread_self());
	Free(vargp);
	echo(connfd);
	Close(connfd);
	return NULL;
}