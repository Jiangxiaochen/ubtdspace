#include "stdio.h"
#include "string.h"

float sum_elements(float a[], unsigned length)
{
	int i;
	float result = 0;
	for(i = 0; i < length; i++)
	{
		printf("%d\n", i);
		result += a[i];
	}
	return result;
}


int strlongter(char *s, char *t)
{
	return strlen(s) - strlen(t) > 0;
}

int strlongter2(char *s, char *t)
{
	return strlen(s) > strlen(t);
}


int main(int argc, char const *argv[])
{
	float start;
	float *a = &start;
	printf("%p\n", a);
	sum_elements(a, 0);

	printf("%d\n", strlongter2("ab","bcc"));
}