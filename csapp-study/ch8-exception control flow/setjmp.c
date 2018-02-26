#include <csapp.h>

jmp_buf buf;

int error1 = 0;
int error2 = 1;

void foo(void);
void bar(void);

int main(int argc, char const *argv[])
{
	switch(setjmp(buf)){
		case 0:
			foo();
			break;
		case 1:
			printf("detected an error1 conditon in foo\n");
			break;
		case 2:
			printf("detected an error2 conditon in foo\n");
			break;
		default:
			printf("Unknown error condition in foo\n");

	}
	return 0;
}

void foo(void){
	if(error1)
		longjmp(buf,1);
	bar();
}

void bar(void){
	if(error2)
		longjmp(buf,2);
}