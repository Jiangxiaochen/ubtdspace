#include "jxcutils.h"

int main()
{
	int a = 0xabcd;
	show_bytes(&a, sizeof(int));
}
