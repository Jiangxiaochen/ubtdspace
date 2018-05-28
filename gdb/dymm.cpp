#include <stdio.h>
#include <malloc.h>
int main(void)
{
char *p[10];
int i = 0;
for (i = 0; i < sizeof(p)/sizeof(p[0]); i++)
{
p[i] = (char*)malloc(100000);
}
return 0;
}
