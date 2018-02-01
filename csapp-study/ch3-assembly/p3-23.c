/*
dw_loop:
	movq %rdi, %rax		// ret = x
	movq %rdi, %rcx		// y = x
	imulq %rdi,%rcx		// y = x * x
	leaq (%rdi,%rdi),%rdx //n = 2 * x
.l2
	leaq 1(%rcx,%rax), %rax	//ret = y + x + 1
	subq $1, %rdx			//n --
	testq %rdx,%rdx
	jg .l2					//if(n > 0) goto l2
 */
