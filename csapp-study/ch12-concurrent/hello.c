#include "csapp.h"

void *thread(void *vargp);

int main(int argc, char const *argv[])
{
	pthread_t tid;
	pthread_create(&tid, NULL, thread, NULL);
	Pthread_join(tid, NULL);
	printf("self tid: %lu chld tid: %lu\n", pthread_self(), tid);
	exit(0);
	return 0;
}

void *thread(void *vargp){
	printf("hello, thread\n");
	return NULL;
}