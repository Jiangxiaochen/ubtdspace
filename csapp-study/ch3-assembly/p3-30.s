	.file	"p3-30.c"
	.text
	.globl	switch2
	.type	switch2, @function
switch2:
.LFB0:
	.cfi_startproc
	addq	$1, %rdi
	cmpq	$8, %rdi
	ja	.L2
	jmp	*.L4(,%rdi,8)
	.section	.rodata
	.align 8
	.align 4
.L4:
	.quad	.L3
	.quad	.L9
	.quad	.L6
	.quad	.L7
	.quad	.L2
	.quad	.L7
	.quad	.L8
	.quad	.L2
	.quad	.L9
	.text
.L3:
	movl	$1, %eax
	jmp	.L5
.L7:
	movl	$3, %eax
	jmp	.L5
.L6:
	movl	$4, %eax
	jmp	.L5
.L8:
	movl	$5, %eax
	jmp	.L5
.L2:
	movl	$6, %eax
	jmp	.L5
.L9:
	movl	$2, %eax
.L5:
	movq	%rax, (%rsi)
	ret
	.cfi_endproc
.LFE0:
	.size	switch2, .-switch2
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.6) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
