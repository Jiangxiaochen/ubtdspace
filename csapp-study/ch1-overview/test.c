/**
 * @Author:      xiaochen.jiang
 * @Email:       1370035324@qq.com
 * @DateTime:    2018-01-26 17:19:05
 * @Description: Description for virtual memory system
 *
 * 只读数据代码 0x403a...从小到大
 * d1,g,k,(s1,s2,s3)相同,foo
 *
 * 读写数据 0x60...
 * 未初始化 0x6062e0->0x6062dc
 * {a,c,d,f}
 * 1、学习服务端代码
 * 2、学习网络编程相关知识
 * 
 *
 * 这周的主要任务是学习服务端代码和学习网络编程相关知识，解决了客户端的一些bug。主要看了服务器的框架，各个模块之间的联系和一些细节实现。另外看了unix网络编程的相关知识，复习了php的一些知识点。
 * 
 */

#include "csapp.h"

int a;
int b = 10;
const int c;
const int d1 = 10;

static int d;
static int e = 10;
static const int f;
static const int g = 10;

void foo(void);

int main(int argc, char const *argv[])
{
	char *s1 = "i am jxc.";
	char *s2 = "i am jxc.";
	const char *s3 = "i am jxc.";


	static int h = 10;
	static int i;
	static const int j;
	static const int k = 10;

	int *l = (int *)malloc(sizeof(int));
	int *m = (int *)malloc(sizeof(int));

	printf("%p\n", &a);
	printf("%p\n", &b);
	printf("%p\n", &c);
	printf("%p\n", &d1);

	printf("%p\n", &d);
	printf("%p\n", &e);
	printf("%p\n", &f);
	printf("%p\n", &g);
	printf("%p\n", &h);
	printf("%p\n", &i);
	printf("%p\n", &j);
	printf("%p\n", &k);
	printf("%p\n", l);
	printf("%p\n", m);
	printf("%p\n", s1);
	printf("%p\n", s2);
	printf("%p\n", s3);
	printf("%p\n", foo);
	return 0;
}

void foo(void){

}