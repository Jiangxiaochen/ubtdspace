#include "jxcutils.h"

int main()
{
	int a = 0x12345678;
	show_bits(&a, sizeof(a));
}
