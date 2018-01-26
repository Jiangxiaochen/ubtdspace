/**
 * @Author:      xiaochen.jiang
 * @Email:       1370035324@qq.com
 * @DateTime:    2018-01-26 13:56:22
 * @Description: this is a right code! 
 */
#include "csapp.h"

#define N 40

void *thread(void *vargp);

int main(int argc, char const *argv[])
{
	pthread_t tid[N];
	int *id;

	for (int i = 0; i < N; ++i)
	{
		id = (int *)Malloc(sizeof(int));
		*id = i;
		Pthread_create(&tid[i], NULL, thread, id);
	}

	for (int i = 0; i < N; ++i)
	{
		Pthread_join(tid[i], NULL);
	}
	return 0;
}

void *thread(void *vargp){
	int myid = *((int *)vargp);
	Free(vargp);
	printf("hello from thread %d\n", myid);
	return NULL;
}