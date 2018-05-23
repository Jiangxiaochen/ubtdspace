struct ELE
{
	long v;
	struct ELE *p;
};

long fun(struct ELE *ptr);

/*
fun:
	movl	$0,%eax		// ret = 0
	jmp		.L2			// goto .L2
.L3:
	addq	(%rdi),%rax	// ret += ptr->v
	movq	8(%rdi),%rdi// ptr = ptr->p
.L2:
	testq	%rdi,%rdi	// ptr == 0
	jne		.L3			// != goto .L3
	ret;ret
 */

long fun(struct ELE *ptr)
{
	long result = 0;
	while(ptr != 0)
	{
		result += ptr->v;
		ptr = ptr->p;
	}
	return result;
}