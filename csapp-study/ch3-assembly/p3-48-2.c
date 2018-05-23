long vframe(long n, long idx, long *q)
{
	long i;
	long *p[n];
	p[0] = &i;
	for (i = 1; i < n; i++)
	{
		p[i] = q;
	}
	return *p[idx];
}


int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}
//	.l3:
//		
//	vframe:
//		pushq	%rbp				保存旧的%rbp
//		movq	%rsp,%rbp			设置栈指针
//		subq	$16,%rsp			给i分配空间(%rsp=s1)
//		
//		leaq	22(,%rdi,8),%rax	%rax = n*8+22
//		andq	$-16,%rax			将 %rax 的值的低4位变为0
//		subq	%rax,%rsp			给数组p分配空间(%rsp=s2)
//		leaq	7(%rsp),%rax 		%rax = %rsp + 7
//		shrq	$3,%rax				算术右移3
//		leaq	0(,%rax,8),%r8		%r8 = &p[0](c)
//		movq	%r8,%rcx			%rcx = &p[0]