/*
long sum_element(long i, long j)
i in %rdi, j in %rsi

sum_element:
	leaq	0(,%rdi,8),%rdx		// tmp1 = i * 8
	subq	%rdi,%rdx			// tmp1 -= i
	addq	%rsi,%rdx			// tmp1 += j
	leaq	(%rsi,%rsi,4),%rax	// ret = 5j
	addq	%rax,%rdi			// i += ret
	movq	Q(,%rdi,8),%rax		// ret = M[Q + (i+5j) * 8]
	addq	P(,%rdx,8),%rax		// ret += M[P + (7i + j) * 8]
	ret							// return ret
 */
#define M 5
#define N 7

long P[M][N];
long Q[N][M];

long sum_element(long i, long j)
{
	return P[i][j] + Q[j][i];
}