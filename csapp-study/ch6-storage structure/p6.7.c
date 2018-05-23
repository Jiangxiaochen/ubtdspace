#define N 100
#define time 1000
int a[N][N][N];
int sum_array_3d(int a[N][N][N])
{
	int i,j,k,sum = 0;
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
			for(k = 0; k < N; k++)
			{
				sum += a[k][i][j];
			}
		}
	}
	return sum;
}


int sum_array_3d_2(int a[N][N][N])
{
	int i,j,k,sum = 0;
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
			for(k = 0; k < N; k++)
			{
				sum += a[i][j][k];
			}
		}
	}
	return sum;
}

int test1()
{
	int h;
	for(int i = 0; i < time; i++) h = sum_array_3d(a);
		return h;
}

int  test2()
{
	int h;
	for(int i = 0; i < time; i++) h = sum_array_3d_2(a);
		return h;

}

int main(int argc, char const *argv[])
{
	int aa = test1();
	int bb = test2();
	printf("%d %d\n", a[2][2][2], aa+bb);
	return 0;
}