#include "csapp.h"
#define MAXTHREADS 32

void *sum_mutex(void *vargp);

long gsum = 0;
long *psum;
long nelems_per_thread;
sem_t mutex;

int main(int argc, char const *argv[])
{
	long i, nelems, log_nelems, nthreads, myid[MAXTHREADS];
	pthread_t tid[MAXTHREADS];

	if(argc != 3){
		fprintf(stderr, "usage: %s <nthreads> <log_nelems>\n", argv[0]);
		exit(0);
	}

	psum = (long *)Malloc(sizeof(long) * MAXTHREADS);
	nthreads = atoi(argv[1]);
	log_nelems = atoi(argv[2]);
	nelems = (1L << log_nelems);
	nelems_per_thread = nelems / nthreads;
	sem_init(&mutex, 0, 1);

	for (int i = 0; i < nthreads; ++i)
	{
		myid[i] = i;
		Pthread_create(&tid[i],NULL, sum_mutex, &myid[i]);
	}

	for (int i = 0; i < nthreads; ++i)
	{
		Pthread_join(tid[i], NULL);
	}

	if(gsum != (nelems * (nelems - 1) / 2)){
		fprintf(stderr, "error: result= %ld\n", gsum);
	}
	return 0;
}

void *sum_mutex(void *vargp){
	long myid = *((long *)vargp);
	long start = myid * nelems_per_thread;
	long end = start + nelems_per_thread;
	for (long i = start; i < end; ++i)
	{
		P(&mutex);
		gsum += i;
		V(&mutex);
	}
	return NULL;
}

void *sum_array(void *vargp){
	long myid = *((long *)vargp);
	long start = myid * nelems_per_thread;
	long end = start + nelems_per_thread;
	long i;
	for(i = start; i < end; i++) psum[myid] += i;
	return NULL;
}

void *sum_local(void *vargp){
	long myid = *((long *)vargp);
	long start = myid * nelems_per_thread;
	long end = start + nelems_per_thread;
	long i, sum = 0;
	for(i = start; i < end; i++) sum += i;
	psum[myid] = sum;
	return NULL;
}