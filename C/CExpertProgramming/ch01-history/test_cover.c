#include <jxcutils.h>

int array[] = {
	23, 34, 12, 17, 204, 99, 16
}
#define TOTAL_ELEMENTS (sizeof(array)/sizeof(array[0]))

int main()
{
	int d = -1, x;
	//d 会转换为unsigned int称为一个很大的数,可以将TOTAL_ELEMENTS强制转化为int
	if(d <= TOTAL_ELEMENTS - 2){
		x = array[d+1];
	}
}
