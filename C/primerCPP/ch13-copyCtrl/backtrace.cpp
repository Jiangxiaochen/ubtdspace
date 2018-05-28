#include "execinfo.h"
#include "mycpp.h"
/*
	//将结果存放到buffer中
	int backtrace(void **buffer, int size);
	//将调用站转换成字符串数组
	char **backtrace_symbols(void *const * buffer, int size);
	//将调用栈信息写到fd指定的文件中
	void backtrace_symbols_fd(void *const *buffer, int szie, int fd);
	//用来得到调用函数的返回地址，得到这个地址，通过反汇编就可以得到调用函数相关信息
	void *__builtin_return_address(unsigned int level);
	//获取当前释放的内存的大小
	size_t malloc_usable_size(void *ptr);
*/

void fun1(),fun2(),fun3(),print_stacktrace();

void fun1()
{
	printf("stackstrace begin:\n");
	print_stacktrace();
}

void fun2()
{
	fun1();
}

void fun3()
{
	fun2();
}

void print_stacktrace()
{
	int size = 16;
	void *array[16];
	int stack_num = backtrace(array,size);
	char **stackstrace = backtrace_symbols(array,stack_num);
	for(int i = 0; i < stack_num; i++) printf("%s\n", stackstrace[i]);
	free(stackstrace);
}

int main()
{
	fun3();
}






