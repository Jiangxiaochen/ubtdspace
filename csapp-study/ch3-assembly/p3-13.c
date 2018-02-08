
//cmpl %esi, %edi
//setl %al
// #define COMP <
// typedef int data_t;

// #define COMP >
// typedef


// int comp(data_t a, data_t b)
// {
// 	return a COMP b;
// }
// 
// 

typedef void * data_t;
#define TEST >=

int enen(data_t a)
{
	a = -1;
	printf("%p\n", a);
	return a TEST 0;
}