#include "csapp.h"

int i = 0;

#define ps(x) printf("NO.%d: %d %s\n", i++, x, "拿了杯子！")
#define pt(x) printf("NO.%d: %d %s\n", i++, x,"拿了水壶！")
#define vs(x) printf("NO.%d: %d %s\n", i++, x, "放下了杯子！")
#define vt(x) printf("NO.%d: %d %s\n", i++, x,"放下了水壶！")
#define done(x)	printf("NO.%d %d %s\n", i++, x, "成功喝下了水！");
#define N 2

void *thread1(void *argp);
void *thread2(void *argp);

sem_t s,t;

int main(int argc, char const *argv[])
{
	sem_init(&s, 0, 1);
	sem_init(&t, 0, 1);
	pthread_t tid[N];
	Pthread_create(&tid[0],NULL,thread1,NULL);
	Pthread_create(&tid[1],NULL,thread2,NULL);
	Pthread_join(tid[0],NULL);
	Pthread_join(tid[1],NULL);
	return 0;
}

void *thread1(void *argp)
{
	while(1){
		P(&s);
		ps(1);
		P(&t);
		pt(1);
		done(1);
		V(&t);
		vt(1);
		V(&s);
		vs(1);
	}
}
void *thread2(void *argp)
{
	while(1){
		P(&s);
		ps(2);
		P(&t);
		pt(2);
		done(2);
		V(&t);
		vt(2);
		V(&s);
		vs(2);
	}
}
