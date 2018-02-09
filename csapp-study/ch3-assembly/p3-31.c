switcher:
	cmpq	$7,%rdi			//a>7
	ja		.L2
	jmp		*.L4(,%rdi,8)
.L4:
	.quad	.L3
	.quad	.L2
	.quad	.L5
	.quad	.L2
	.quad	.L6
	.quad	.L7
	.quad	.L2
	.quad	.L5

.L7:
	xorq	$15,%rsi		//b^=15
	movq	%rsi,%rdx		//c=b
.

void switcher(long a, long b, long c, long *dest)
{
	long val;
	switch(a)
	{
		case 0:
			
	}
}