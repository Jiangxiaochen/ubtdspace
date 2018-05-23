void f(int a[][2])
{

}

void f1(int a[1][2]);
void f2(int a[][2]);
void f3(int (*a)[2]);
void f4(int **a);

int main()
{
	int a[1][2];
	f(a);
}
