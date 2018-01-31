/*
arith:
	leaq 7(%rdi), %rax		== tmp = x+7
	testq %rdi, %rdi		==
	cmovns %rdi,%rax		== if(x >= 0) tmp = x
	sarq $3, %rax			== tmp >> 3
	ret						== return tmp
 */

long arith(long x)
{
	return x / 8;
}