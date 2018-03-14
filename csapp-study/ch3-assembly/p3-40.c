/*
void fix_set_diag(fix_matrix A, int val)
A in %rdi, val in %rsi
	
fix_set_diag:
	movl	$0,%eax				//index = 0
.L13
	movl	%esi,(%rdi,%rax)	//A[0][0] = val
	addq	$68,%rax			//index += 68
	cmpq	$1088,%rax			//index - 1088
	jne		.L13				//if != 0 goto .L3
	rep;ret
 */

#define N 16
typedef int fix_matrix[N][N];

void fix_set_diag(fix_matrix A, int val)
{
	long index = 0;
	long end = N * (N + 1);
	int *ptr = A[0];
	do
	{
		ptr[index] = val;
		index += (N + 1);
	}
	while(index != end);
}