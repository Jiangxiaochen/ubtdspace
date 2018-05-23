#include <jxcutils.h>
#include <setjmp.h>

int (*paf())[20]; //function returning pointer to array of int

int (*paf())[20]
{
	int (*pear)[20];
	//alloca栈扩展,malloc不置位0
	pear = calloc(20, sizeof(int));//20个int为0
	return pear;
}

typedef int (*p_int_20)[20];


int main()
{
	p_int_20 result;
	result = paf();
}
