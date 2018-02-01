// loop_while:
// 	movl	$1, %eax			//ret = 1
// 	jmp		.L2
// .L3
// 	leaq	(%rdi,%rsi), %rdx	//tmp=a+b
// 	imulq	%rdx, %rax			//ret *= tmp
// 	addq	$1, %rdi			//a++
// .L2
// 	cmpq	%rsi, %rdi			//
// 	jl		.L3					//if(a < b) goto .L3

long loop_while(long a, long b)
{
	long result = 1;
	while(a <b)
	{
		result = result * (a + b);
		a = a + 1;
	}
	return result;
}