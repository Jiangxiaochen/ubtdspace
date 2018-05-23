#include "csapp.h"

void* thread(void *arg)
{
	time_t a;
	time(&a);
	char *t = ctime(&a);
	printf("t%d: %s\n", (int)arg, t);
	sleep(3);
	printf("t%d: %s\n", (int)arg, t);
}

void* thread2(void *arg)
{
	sleep(1);
	time_t a;
	time(&a);
	char *t = ctime(&a);
	printf("t%d: %s\n", (int)arg, t);
}

int main()
{
	time_t a;
	time(&a);
	char *t = ctime(&a);
	printf("%s\n", t);
	pthread_t tid[2];
	pthread_create(&tid[0],NULL,thread,(void*)1);
	pthread_create(&tid[1],NULL,thread2,(void*)2);
	pthread_join(tid[0],NULL);
	pthread_join(tid[1],NULL);
}
