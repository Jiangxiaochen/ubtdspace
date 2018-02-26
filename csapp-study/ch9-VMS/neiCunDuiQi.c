/*
1. 成员的起始位置要从自身或者子成员大小的整数倍开始
2. 结构体成员的起始位置要从内部最大元素大小的整数倍开始
3. sizeof 的结果必须是最大成员的整数倍
*/


#include <stdio.h>
#include <sys/types.h>

typedef struct a
{
	int i;
	double d;
	float f;
}a;

typedef struct b
{
	double d;
	int i;
	float f;
}b;

int main(int argc, char const *argv[])
{
	printf("%s: %u\n", "a", sizeof(a));
	printf("%s: %u\n", "b", sizeof(b));
	printf("%s: %u\n", "size_t",sizeof(size_t));
	return 0;
}

/**
* Auth: xiaochen.jiang
* Date: 2018-01-22 14:21:53
* Desc: 
*/