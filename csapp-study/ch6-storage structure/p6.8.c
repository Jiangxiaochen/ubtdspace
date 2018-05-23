#define N 1000
typedef struct 
{
	int vel[3];
	int acc[3];
} point;

point p[N];

void clear1(point *p, int n)
{
	int i,j;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < 3; j++)
		{
			p[i].vel[j] = 0;
		}
		for(j = 0; j < 3; j++)
		{
			p[i].acc[j] = 0;
		}
	}
}

void clear2(point *p, int n)
{
	int i,j;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < 3; j++)
		{
			p[i].vel[j] = 0;
			p[i].acc[j] = 0;
		}
	}
}

void clear3(point *p, int n)
{
	int i,j;
	for(j = 0; j < 3; j++)
	{
		for(i = 0; i < n; i++)
		{
			p[i].vel[j] = 0;
			p[i].acc[j] = 0;
		}
	}
}

/*
clear1具有最好的空间局部性
clear2在内部循环会0 12 4 16跳转，空间局部性较差
clear3不仅在结构中跳转，还在结构之间跳转，空间局部性最差
 */

int main(int argc, char const *argv[])
{
	for(int i = 0; i < 1000; i++)
	{
		clear1(p,N);
		clear2(p,N);
		clear3(p,N);
	}
	printf("%d\n", p[1].vel[1]);
	return 0;
}