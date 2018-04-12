#include <stdio.h>
#include <stdlib.h>
void f(void);

int x = 12345;
int y = 23456;

int main(){
	printf("x = 0X%x y = 0X%x \n", x, y);
	f();
	printf("x = 0X%x y = 0X%x \n", x, y);
	printf("xaddr: %p yaddr: %p\n", &x, &y);
	printf("sizeint: %d sizedouble: %d \n", sizeof(int), sizeof(double));
	return 0;
}
