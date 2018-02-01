	.file	"p3-21.c"
	.text
	.globl	test
	.type	test, @function
test:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rax
	salq	$3, %rax
	movq	%rax, -8(%rbp)
	cmpq	$0, -32(%rbp)
	jle	.L2
	movq	-24(%rbp), %rax
	cmpq	-32(%rbp), %rax
	jge	.L3
	movq	-32(%rbp), %rax
	subq	-24(%rbp), %rax
	movq	%rax, -8(%rbp)
	jmp	.L5
.L3:
	movq	-24(%rbp), %rax
	andq	-32(%rbp), %rax
	movq	%rax, -8(%rbp)
	jmp	.L5
.L2:
	cmpq	$-1, -32(%rbp)
	jge	.L5
	movq	-24(%rbp), %rdx
	movq	-32(%rbp), %rax
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
.L5:
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	test, .-test
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.6) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
