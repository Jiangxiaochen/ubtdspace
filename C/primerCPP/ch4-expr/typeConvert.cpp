#include "jxcutils.h"

int main()
{
	int a = 10;
	const int *p = &a;

	char *pc = reinterpret_cast<char *>(const_cast<int *>(p));

	int * pp = &a;
	char *pp2 = static_cast<char*>(pp);
}
