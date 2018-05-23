// switcher:
// 	cmpq	$7,%rdi			//a>7
// 	ja		.L2
// 	jmp		*.L4(,%rdi,8)

// .L7:
// 	xorq	$15,%rsi		//b^=15
// 	movq	%rsi,%rdx		//c=b
// .L3:
// 	leaq	112(%rdx),%rdi	//a = c + 112
// 	jmp		.L6
// 	.L5:
// 	leaq	(%rdx,%rsi),%rdi//a = c + b
// 	salq	$2,%rdi			//a << 2
// 	jmp		.L6
// 	.L2:
// 	movq	%rsi,%rdi		//a = b
// 	.L6
// 	movq	%rdi,(%rcx)		//*dest = a
// 	ret

void switcher(long a, long b, long c, long *dest)
{
	long val;
	switch(a)
	{
		case 5:
			c = b ^ 15;
		case 0:
			val = c + 112;
			break;
		case 7:
		case 2:
			val = (b + c) << 2;
			break;
		case 4:
			val = a;
			break;
		default:
			val = b;
	}
	*dest = val;
}

// .L4:
// 	.quad	.L3
// 	.quad	.L2
// 	.quad	.L5
// 	.quad	.L2
// 	.quad	.L6
// 	.quad	.L7
// 	.quad	.L2
// 	.quad	.L5
