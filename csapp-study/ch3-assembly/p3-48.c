#include "string.h"
#include "stdio.h"

int len(char *s)
{
	return strlen(s);
}

void iptoa(char *s, long *p)
{
	long val = *p;
	sprintf(s, "%ld", val);
}

int intlen(long x)
{
	long v;
	char buf[12];
	v = x;
	iptoa(buf, &v);
	return len(buf);
}

//	intlen:
//		subq	$40,%rsp		分配40个字节
//		movq	%rdi,24(%rsp)	*(rsp+24) = x
//		leaq	24(%rsp),%rsi	rsi = rsp + 24
//		movq	%rsp,%rdi		rdi = rsp
//		call	iptoa
//		
//		
//	intlen:
//		subq	$56,%rsp		分配56个字节
//		movq	%fs:40,%rax		%rax = canary
//		movq	%rax,40(%rsp)	(%rsp+40) = canary
//		xorl	%eax,%eax		
//		movq	%rdi,8(%rsp)	(%rsp+8) = x -> v
//		leaq	8(%rsp),%rsi	%rsi = %rsp+8
//		leaq	16(%rsp),%rdi	%rdi = %rsp+16 -> buf
//		


int main(int argc, char const *argv[])
{
	int a = intlen(123);
	printf("%d\n", a);
	return 0;
}

