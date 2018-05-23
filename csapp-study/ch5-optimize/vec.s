	.file	"vec.c"
	.text
	.globl	new_vec
	.type	new_vec, @function
new_vec:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	pushq	%rbx
	.cfi_def_cfa_offset 24
	.cfi_offset 3, -24
	subq	$8, %rsp
	.cfi_def_cfa_offset 32
	movq	%rdi, %rbp
	movl	$16, %edi
	call	malloc
	testq	%rax, %rax
	je	.L4
	movq	%rax, %rbx
	movq	%rbp, (%rax)
	testq	%rbp, %rbp
	jle	.L5
	movl	$8, %esi
	movq	%rbp, %rdi
	call	calloc
	testq	%rax, %rax
	jne	.L3
	movq	%rbx, %rdi
	call	free
	movl	$0, %eax
	jmp	.L2
.L5:
	movl	$0, %eax
.L3:
	movq	%rax, 8(%rbx)
	movq	%rbx, %rax
	jmp	.L2
.L4:
	movl	$0, %eax
.L2:
	addq	$8, %rsp
	.cfi_def_cfa_offset 24
	popq	%rbx
	.cfi_def_cfa_offset 16
	popq	%rbp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE0:
	.size	new_vec, .-new_vec
	.globl	get_vec_element
	.type	get_vec_element, @function
get_vec_element:
.LFB1:
	.cfi_startproc
	testq	%rsi, %rsi
	js	.L9
	movl	$0, %eax
	cmpq	(%rdi), %rsi
	jge	.L8
	movq	8(%rdi), %rax
	movq	(%rax,%rsi,8), %rax
	movq	%rax, (%rdx)
	movl	$1, %eax
	ret
.L9:
	movl	$0, %eax
.L8:
	rep ret
	.cfi_endproc
.LFE1:
	.size	get_vec_element, .-get_vec_element
	.globl	vec_length
	.type	vec_length, @function
vec_length:
.LFB2:
	.cfi_startproc
	movq	(%rdi), %rax
	ret
	.cfi_endproc
.LFE2:
	.size	vec_length, .-vec_length
	.globl	combine1
	.type	combine1, @function
combine1:
.LFB3:
	.cfi_startproc
	pushq	%r12
	.cfi_def_cfa_offset 16
	.cfi_offset 12, -16
	pushq	%rbp
	.cfi_def_cfa_offset 24
	.cfi_offset 6, -24
	pushq	%rbx
	.cfi_def_cfa_offset 32
	.cfi_offset 3, -32
	subq	$16, %rsp
	.cfi_def_cfa_offset 48
	movq	%fs:40, %rax
	movq	%rax, 8(%rsp)
	xorl	%eax, %eax
	movq	$0, (%rsi)
	cmpq	$0, (%rdi)
	jle	.L12
	movq	%rdi, %rbp
	movq	%rsi, %r12
	movl	$0, %ebx
.L14:
	movq	%rsp, %rdx
	movq	%rbx, %rsi
	movq	%rbp, %rdi
	call	get_vec_element
	movq	(%rsp), %rax
	addq	%rax, (%r12)
	addq	$1, %rbx
	cmpq	0(%rbp), %rbx
	jl	.L14
.L12:
	movq	8(%rsp), %rax
	xorq	%fs:40, %rax
	je	.L15
	call	__stack_chk_fail
.L15:
	addq	$16, %rsp
	.cfi_def_cfa_offset 32
	popq	%rbx
	.cfi_def_cfa_offset 24
	popq	%rbp
	.cfi_def_cfa_offset 16
	popq	%r12
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE3:
	.size	combine1, .-combine1
	.globl	combine2
	.type	combine2, @function
combine2:
.LFB4:
	.cfi_startproc
	pushq	%r13
	.cfi_def_cfa_offset 16
	.cfi_offset 13, -16
	pushq	%r12
	.cfi_def_cfa_offset 24
	.cfi_offset 12, -24
	pushq	%rbp
	.cfi_def_cfa_offset 32
	.cfi_offset 6, -32
	pushq	%rbx
	.cfi_def_cfa_offset 40
	.cfi_offset 3, -40
	subq	$24, %rsp
	.cfi_def_cfa_offset 64
	movq	%fs:40, %rax
	movq	%rax, 8(%rsp)
	xorl	%eax, %eax
	movq	(%rdi), %r12
	movq	$0, (%rsi)
	testq	%r12, %r12
	jle	.L18
	movq	%rdi, %r13
	movq	%rsi, %rbp
	movl	$0, %ebx
.L20:
	movq	%rsp, %rdx
	movq	%rbx, %rsi
	movq	%r13, %rdi
	call	get_vec_element
	movq	(%rsp), %rax
	addq	%rax, 0(%rbp)
	addq	$1, %rbx
	cmpq	%r12, %rbx
	jne	.L20
.L18:
	movq	8(%rsp), %rax
	xorq	%fs:40, %rax
	je	.L21
	call	__stack_chk_fail
.L21:
	addq	$24, %rsp
	.cfi_def_cfa_offset 40
	popq	%rbx
	.cfi_def_cfa_offset 32
	popq	%rbp
	.cfi_def_cfa_offset 24
	popq	%r12
	.cfi_def_cfa_offset 16
	popq	%r13
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE4:
	.size	combine2, .-combine2
	.globl	get_vec_start
	.type	get_vec_start, @function
get_vec_start:
.LFB5:
	.cfi_startproc
	movq	8(%rdi), %rax
	ret
	.cfi_endproc
.LFE5:
	.size	get_vec_start, .-get_vec_start
	.globl	combine3
	.type	combine3, @function
combine3:
.LFB6:
	.cfi_startproc
	movq	(%rdi), %rdx
	movq	8(%rdi), %rcx
	movq	$0, (%rsi)
	testq	%rdx, %rdx
	jle	.L25
	movq	%rcx, %rax
	leaq	(%rcx,%rdx,8), %rcx
.L27:
	movq	(%rax), %rdx
	addq	%rdx, (%rsi)
	addq	$8, %rax
	cmpq	%rcx, %rax
	jne	.L27
.L25:
	rep ret
	.cfi_endproc
.LFE6:
	.size	combine3, .-combine3
	.globl	combine4
	.type	combine4, @function
combine4:
.LFB7:
	.cfi_startproc
	movq	(%rdi), %rdx
	movq	8(%rdi), %rcx
	testq	%rdx, %rdx
	jle	.L32
	movq	%rcx, %rax
	leaq	(%rcx,%rdx,8), %rcx
	movl	$0, %edx
.L31:
	addq	(%rax), %rdx
	addq	$8, %rax
	cmpq	%rcx, %rax
	jne	.L31
	jmp	.L30
.L32:
	movl	$0, %edx
.L30:
	movq	%rdx, (%rsi)
	ret
	.cfi_endproc
.LFE7:
	.size	combine4, .-combine4
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
