#include "mycpp.h"

extern "C"{
	int JXC1(int a);
	int JXC2(int a);
}

int JXC2(int a);
int JXC1(int a);
int main()
{
	JXC1(0),JXC2(0);
}
