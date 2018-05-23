	.file	"hello.c"
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"hello,world\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	movl	$13, %edx
	movl	$.LC0, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	write
	movl	$0, %edi
	call	_exit
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
