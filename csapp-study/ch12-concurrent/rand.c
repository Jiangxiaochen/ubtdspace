unsigned int next_seed = 1;

unsigned int rand1(void)
{
	next_seed = next_seed * 1103515245 + 12543;
	return (unsigned int)(next_seed >> 16) % 32768;
}

void srand(unsigned int new_seed)
{
	next_seed = new_seed;
}

#include <csapp.h>

void *thread(void *arg)
{
	Pthread_detach(pthread_self());
	for(int i = 0; i < 10000; i++) printf("%d\n",rand1());
}
int main(int argc, char **argv)
{
	srand(100);
	int n = atoi(argv[1]);
	pthread_t tid[n];
	for(int i = 0; i < n; i++) Pthread_create(&tid[i],NULL,thread,NULL);
//	for(int i = 0; i < n; i++) Pthread_join(tid[i],NULL);
}
