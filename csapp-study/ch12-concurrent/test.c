#include "csapp.h"

// extern int a;
int a;

extern void f(void);

int main(int argc, char const *argv[])
{
	printf("%d\n", a);
	f();
	return 0;
}

int a = 10;

void f(){

}