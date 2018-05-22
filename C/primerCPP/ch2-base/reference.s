	.file	"reference.cpp"
	.globl	ival
	.data
	.align 4
	.type	ival, @object
	.size	ival, 4
ival:
	.long	1024
	.globl	refVal
	.section	.rodata
	.align 8
	.type	refVal, @object
	.size	refVal, 8
refVal:
	.quad	ival
	.globl	p2Val
	.data
	.align 8
	.type	p2Val, @object
	.size	p2Val, 8
p2Val:
	.quad	ival
	.globl	p2Val2
	.align 8
	.type	p2Val2, @object
	.size	p2Val2, 8
p2Val2:
	.quad	ival
	.section	.rodata
.LC0:
	.string	"%lu %p %lu %p"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$ival, %eax
	movq	%rax, %r8
	movl	$4, %ecx
	movl	$ival, %edx
	movl	$4, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
