// loop_while2:
// 	testq	%rsi,%rsi			
// 	jle		.L8					//if(b<=0) goto .L8
// 	movq	%rsi,%rax			//ret = b
// .L7:
// 	imulq	%rdi,%rax			//ret *= a
// 	subq	%rdi,%rsi			//b -= a
// 	testq	%rsi,%rsi
// 	jg		.L7					//if(b>0) goto .L7
// 	ret;ret
// .L8:
// 	movq	%rsi,%rax			//ret=b
// 	ret			

long loop_while2(long a, long b)
{
	long result = b;
	while(b > 0)
	{
		result = result * a;
		b = b - a;
	}
	return result;
}