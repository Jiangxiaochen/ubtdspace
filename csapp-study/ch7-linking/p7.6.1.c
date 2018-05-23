#include "stdio.h"
//foo1.c
void f(void);
int y = 0x12345;
int x = 0x45678;
int main()
{
    f();
    printf("x=0x%x y = 0x%x \n", x, y);
    return 0;
}

