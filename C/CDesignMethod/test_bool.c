#include <jxcutils.h>

int main(int argc, char **argv)
{
	int a = atoi(argv[1]);
	if(a) printf("%d is true\n", a);
	else printf("%d is false\n", a);
}
