#include <stdio.h>
#include <pthread.h>
#include <unistd.h>


void *t1(void *arg)
{
	int a = (int)arg;
	sleep(a);
	a = *((int *)(NULL));
}

void *t2(void *arg)
{
	int a = (int)arg;
	sleep(a);
	a = *((int *)NULL);
}

int main(int ac, char **av)
{
	if(ac != 3){
		fprintf(stderr, "usage: %s arg1 arg2\n", av[0]);
		return -1;
	}
	pthread_t tid1, tid2;
	tid1 = pthread_create(&tid1, NULL, t1, (void *)atoi(av[1]));
	tid2 = pthread_create(&tid1, NULL, t2, (void *)atoi(av[2]));
	pthread_join(tid1, NULL);
	pthread_join(tid2, NULL);
}
