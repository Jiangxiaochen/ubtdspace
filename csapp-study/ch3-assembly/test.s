	.file	"test.c"
	.text
	.globl	stack
	.type	stack, @function
stack:
.LFB0:
	.cfi_startproc
	rep ret
	.cfi_endproc
.LFE0:
	.size	stack, .-stack
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.6) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
