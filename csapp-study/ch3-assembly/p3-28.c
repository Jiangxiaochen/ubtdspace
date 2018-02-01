// fun_b:
// 	movl	$64,%edx		i=64
// 	movl	$0,%eax			val=0
// .L10:
// 	movq	%rdi,%rcx		tmp=x
// 	andl	$1,%ecx			tmp&=1
// 	addq	%rax,%rax		val+=val
// 	orq		%rcx,%rax		val|=tmp
// 	shrq	%rdi			x>>=1
// 	subq	$1,%rdx			i--
// 	jne		.L10			if(i!=0) goto .L10
// 	rep;ret

long fun_b(unsigned long x)
{
	long val = 0;
	long i;
	for(i = 64; i != 0; i--)
	{
		long tmp = x & 1;
		val = val + val;
		val = val | tmp;
		
		x >>= 1;
	}
	return val;
}

/*

 */