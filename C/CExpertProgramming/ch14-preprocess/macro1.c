#include "jxcutils.h"
#include <limits.h>
#define MAX(x,y)		((x)>(y)?(x):(y))
#define IS_EVEN(n)		((n)%2 == 0)
#define TO_UPPER(c)		('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))
#define GET_CHAR()		getc(stdin)
//#运算符
#define PRINT_INT(i)	printf(#i ":%d\n",(i));
//##运算符
#define MK_ID(n)		i##n

#define GENERIC_MAX(type)	\
	type type##_max(type x, type y)\
	{\
		return x > y ? x : y;\
	}

GENERIC_MAX(float)

//变长参数
#define TEST(condition, ...) ((condition)?\
		printf("Passed test:%s\n",#condition):\
		printf(__VA_ARGS__))

#define FUNCTION_CALLED() printf("%s called\n",__func__)
#define FUNCTION_RETURNS() printf("%s returns\n", __func__)

#if INT_MAX < 100000
#error int type is too small
#endif

#ifdef WIN32
	
#elif defined(MAC_OS)

#elif defined(LINUX)

#else
#error No operating system specified
#endif



void f(void)
{
	FUNCTION_CALLED();
	printf("f do something here\n");
	FUNCTION_RETURNS();
}

int main()
{
	int a = MAX(1+3,6);
	PRINT_INT(a);
	PRINT_INT(3* 1 + 2 * 3);

	int MK_ID(1), MK_ID(2);
	PRINT_INT(i1);
	PRINT_INT(i2);

	float f1 = float_max(1.1, 1.2);
	TEST(1>2,"%d -- %s\n", 23, "aaa");

	f();
}

