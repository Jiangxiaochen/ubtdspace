	.file	"p7.5.1.c"
	.comm	a,4,4
	.local	b
	.comm	b,4,4
	.text
	.globl	d
	.type	d, @function
d:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	d, .-d
	.local	e.1835
	.comm	e.1835,4,4
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
