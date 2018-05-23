#include <jxcutils.h>

char a[4][6]; //a is array of 4 array of 6 char

void f(int **a, int (*b)[10])
{

}


int main()
{
	int a[10][10];
	int b[5][6];
	f(a,a);
}
