	.file	"test.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB23:
	.cfi_startproc
	subq	$56, %rsp
	.cfi_def_cfa_offset 64
	movq	%fs:40, %rax
	movq	%rax, 40(%rsp)
	xorl	%eax, %eax
	jmp	.L2
.L3:
	movslq	%eax, %rdx
	movl	%eax, (%rsp,%rdx,4)
	addl	$1, %eax
.L2:
	cmpl	$9, %eax
	jle	.L3
	movl	4(%rsp), %eax
	addl	(%rsp), %eax
	movq	40(%rsp), %rcx
	xorq	%fs:40, %rcx
	je	.L4
	call	__stack_chk_fail
.L4:
	addq	$56, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE23:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.6) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
