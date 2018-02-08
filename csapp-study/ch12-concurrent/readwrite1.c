#include "csapp.h"

int readcnt;
sem_t mutex, w;

void *reader(void *vargp){
	Pthread_detach(pthread_self());
	P(&mutex);
	int id = *((int *)vargp);
	V(&mutex);
	int count = 0;
	while(1){
		P(&mutex);
		readcnt++;
		if(readcnt == 1) P(&w);	//first in
		V(&mutex);
		printf("%d is reading\n", id);		
		P(&mutex);
		readcnt--;
		if(readcnt == 0) V(&w); //last out
		V(&mutex);
		//count++;
		//if(count == 10) break;
	}
	return NULL;
}

void *writer(void *vargp){
	Pthread_detach(pthread_self());
	P(&mutex);
	int id = *((int *)vargp);
	V(&mutex);
	int count = 0;
	while(1){
		P(&w);
		printf("%d is writing!\n", id);
		V(&w);
		count++;
		//if(count == 10) break;
	}
	return NULL;
}

void init(void){
	Sem_init(&mutex, 0, 1);
	Sem_init(&w, 0, 1);
	readcnt = 0;
}

int main(int argc, char const *argv[])
{
	init();
	pthread_t tid;
	int id = 1;
	Pthread_create(&tid, NULL, reader, &id);
	Pthread_join(tid, NULL);
	P(&mutex);
	id++;
	V(&mutex);
	Pthread_create(&tid, NULL, reader, &id);
	Pthread_join(tid, NULL);
	P(&mutex);
	id++;
	V(&mutex);
	Pthread_create(&tid, NULL, writer, &id);
	Pthread_join(tid, NULL);
	return 0;
}