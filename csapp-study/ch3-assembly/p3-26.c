// fun_a:
// 	movl	$0,%eax			ret=0
// 	jmp		.L5				goto .L5
// .L6
// 	xorq	%rdi,%rax		ret ^= x
// 	shrq	%rdi			x >> 1
// .L5
// 	testq	%rdi,%rdi
// 	jne		.L6				if(x!=0) goto .L6
// 	andl	$1,%eax			ret &= 0x01
// 	ret

x:   0111
val: 0000

val: 0111
x  : 0011

val: 0100
x  : 0001

val: 0101
x  : 0000



long fun_a(unsigned long x)
{
	long val = 0;
	while(x != 0)
	{
		val ^= x;
		x >>= 1;
	}
	return val & 0x01;
}

/*
A.跳到中间
B.
C.
 */