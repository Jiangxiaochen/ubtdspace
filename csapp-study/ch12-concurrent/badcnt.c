#include "csapp.h"

void *thread(void *vargp);

volatile long cnt = 0;

int main(int argc, char const *argv[])
{
	long niters;
	pthread_t tid1, tid2;

	if(argc != 2){
		printf("usage: %s <niters>\n", argv[0]);
		exit(0);
	}

	niters = atoi(argv[1]);

	Pthread_create(&tid1, NULL, thread, &niters);
	Pthread_create(&tid2, NULL, thread, &niters);
	Pthread_join(tid1, NULL);
	Pthread_join(tid2, NULL);

	if(cnt != (2 * niters)){
		printf("BOOM cnt=%ld\n", cnt);
	}else{
		printf("OK cnt=%ld\n", cnt);
	}
	return 0;
}

void *thread(void *vargp){
	long i, niters = *((long *)vargp);
	for(i = 0; i < niters; i++){
		cnt++;
	}
	return NULL;
}