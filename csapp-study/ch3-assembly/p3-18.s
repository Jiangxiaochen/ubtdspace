	.file	"p3-18.c"
	.text
	.globl	test
	.type	test, @function
test:
.LFB0:
	.cfi_startproc
	leaq	(%rdi,%rsi), %rax
	cmpq	$-3, %rdi
	jl	.L2
	cmpq	$2, %rdi
	jg	.L3
	addq	%rdx, %rax
	ret
.L3:
	movq	%rdi, %rax
	imulq	%rdx, %rax
	ret
.L2:
	cmpq	%rdx, %rsi
	jl	.L5
	movq	%rsi, %rax
	imulq	%rdx, %rax
	ret
.L5:
	movq	%rdi, %rax
	imulq	%rsi, %rax
	ret
	.cfi_endproc
.LFE0:
	.size	test, .-test
	.globl	test2
	.type	test2, @function
test2:
.LFB1:
	.cfi_startproc
	leaq	(%rdi,%rsi), %rax
	addq	%rdx, %rax
	cmpq	$-3, %rdi
	jge	.L7
	cmpq	%rdx, %rsi
	jge	.L8
	movq	%rdi, %rax
	imulq	%rsi, %rax
	ret
.L8:
	movq	%rsi, %rax
	imulq	%rdx, %rax
	ret
.L7:
	cmpq	$2, %rdi
	jle	.L9
	movq	%rdi, %rax
	imulq	%rdx, %rax
.L9:
	rep ret
	.cfi_endproc
.LFE1:
	.size	test2, .-test2
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.6) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
