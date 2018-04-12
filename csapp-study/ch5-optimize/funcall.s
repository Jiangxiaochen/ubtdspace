	.file	"funcall.c"
	.text
	.globl	f
	.type	f, @function
f:
.LFB0:
	.cfi_startproc
	movq	i(%rip), %rax
	addq	$1, %rax
	movq	%rax, i(%rip)
	addl	$1, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	f, .-f
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	movq	i(%rip), %rdi
	movl	$0, %eax
	call	f
	movl	%eax, %ebx
	movq	i(%rip), %rdi
	movl	$0, %eax
	call	f
	addl	%eax, %ebx
	movq	i(%rip), %rdi
	movl	$0, %eax
	call	f
	addl	%eax, %ebx
	movq	i(%rip), %rdi
	movl	$0, %eax
	call	f
	addl	%ebx, %eax
	popq	%rbx
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.globl	i
	.data
	.align 8
	.type	i, @object
	.size	i, 8
i:
	.quad	1
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
