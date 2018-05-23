#include <jxcutils.h>

struct STRUCT1 
{
	double d1;
	char c1;
	int i1;
	char c2;
};

struct STRUCT2
{
	char f1 : 3;
	char f2 : 4;
	char f3 : 5;
};

struct STRUCT3
{
	char c1, *c2; //1 + 7 + 8
	union A		//声明不占大小
	{
		short a,b;//2+2
		unsigned int c:2,d:1;//4
	};
	struct STRUCT3 *next;//8
};


struct STRUCT4
{
	char c1, *c2; //1 + 7 + 8
	union 		//变量占大小
	{
		short a,b;//2+2
		unsigned int c:2,d:1;//4
	};
	struct STRUCT4 *next;//8
};

struct st1
{
	char c; // 1 + 3
	int i;	// 4
};

struct st2
{
	char c1;//1+3
	struct st1 s;//8
	char c2;//1+3
};

#pragma pack(push) //保存pack设置
#pragma pack(2)	//对齐为2
struct st3
{
	char c;	//1+1
	int i;	//4
};
struct st4
{
	char c1;//1+1
	struct st3 s;//6
	char c2;//1+1
};
#pragma pack(pop)//恢复pack设置

struct st5
{

};

int main(int argc, char **argv)
{
	//sizeof 可运行时判断
	int n = atoi(argv[1]);
	int a[n];
	printf("n: %d size: %lu\n", n, sizeof(a));
	//函数传递之后退化为指针
	char *s1 = "abcde";
	char s2[] = "abcde";
	array(s1);
	array(s2);
	pointer(s1);
	pointer(s2);
	//结构体对齐,元素的起始必须是其大小的整数倍，整体大小是最大元素的倍数
	printf("sizeof STRUCT1: %lu\n", sizeof(struct STRUCT1));
	//位字段,最小大小为type var的type的大小
	printf("sizeof STRUCT2: %lu\n", sizeof(struct STRUCT2));
	//联合，最大字段的大小
	printf("sizeof STRUCT3: %lu\n", sizeof(struct STRUCT3));
	printf("sizeof A: %lu\n",sizeof(union A));
	printf("sizeof STRUCT4: %lu\n", sizeof(struct STRUCT4));
	//包含结构的结构,结构体首地址应该是最大元素的倍数
	printf("sizeof st1: %lu\n", sizeof(struct st1));
	printf("sizeof st2: %lu\n", sizeof(struct st2));
	struct st1 st1_1;
	memset(&st1_1, 0, sizeof(st1_1));
	st1_1.c = 1;
	st1_1.i = 2;
	struct st2 st2_1;
	memset(&st2_1, 0, sizeof(st2_1));
	st2_1.c1 = 4;
	st2_1.s = st1_1;
	st2_1.c2 = 8;
	show_bits(&st2_1,sizeof(st2_1));
	//pragma，结构体成员的偏移量取二者的最小值
	printf("----pragma----\n");
	struct st3 st3_1;
	memset(&st3_1, 0, sizeof(st3_1));
	st3_1.c = 1;
	st3_1.i = 2;
	struct st4 st4_1;
	memset(&st4_1, 0, sizeof(st4_1));
	st4_1.c1 = 4;
	st4_1.s = st3_1;
	st4_1.c2 = 8;
	show_bits(&st4_1,sizeof(st4_1));
	//空结构体的sizeof为0,C++中为1
	printf("sizeof st5: %lu\n", sizeof(struct st5));
}

void array(char s[])
{
	printf("sizeof s: %lu\n", sizeof(s));
}

void pointer(char *s)
{
	printf("sizeof p: %lu\n", sizeof(s));
}
