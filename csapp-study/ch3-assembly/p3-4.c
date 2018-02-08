typedef char src_t;
typedef short dest_t;

void foo(src_t *sp, dest_t *dp)
{
	*dp = (dest_t) *sp;

	//long long
	// movq    (%rdi), %rax
	// movq    %rax, (%rsi)
	// 
	// char int
	// movsbl  (%rdi), %eax
	// movl    %eax, (%rsi)
	// 
	// char unsigned
	// movsbl (%rdi), %eax
	// movl   %eax, (%rsi)
	// 
	// unsigned char, long
	// movzbq (%rdi), %rax
	// movq %rax, (%rsi)
	// 
	// int, char
	// movb 3(%rdi),%al -> movl (%rdi),%eax
	// movb %al,(%rsi)
	// 
	// unsigned, unsigned char
	// movl (%rdi),%eax
	// movb %al,(%rsi)
	// 
	// char, short
	// movsbw (%rdi),%ax
	// movw %ax,(%rsi)
}