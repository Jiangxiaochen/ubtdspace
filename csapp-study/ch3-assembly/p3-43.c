// #include "stdio.h"

// int main(int argc, char const *argv[])
// {
// 	double d1 = 1.2;
// 	unsigned long i1 = (unsigned long) d1;
// 	unsigned long *p1 = (unsigned long *)&d1;
// 	printf("%lu %lu %lu\n", i1, d1, *p1);
// 	return 0;
// }


// .lc0:
// 	.string	"%lu\n"
// 	.text
// 	.global	main
// 	.type	main,@function
// .lfb23:
// 	subq    $8, %rsp		// ptr_stack -= 8
// 	movl    $1, %edx		// p3 = 1
// 	movl    $.LC0, %esi		// p2 = .lc0
// 	movl    $1, %edi		// p1 = 1
// 	movl    $0, %eax		// ret = 0
// 	call    __printf_chk	// printf
// 	movl    $0, %eax		// ret = 0
// 	addq    $8, %rsp		// ptr_stack += 8
// 	.cfi_def_cfa_offset 8
// 	ret

#include "stdio.h"
#define expr *up->t2.p
typedef char type;

typedef union
{
	struct 
	{
		long 	u;
		short	v;
		char	w;
	} t1;

	struct 
	{
		int a[2];
		char *p;
	} t2;
} u_type;

void get(u_type *up, type *dest)
{
	// *dest = up->t2.a[up->t1.u];
	*dest = expr;
}

// int main(int argc, char const *argv[])
// {
// 	u_type u1;
// 	u1.t1.u = 1;		// 1,0,0,0,0,0,0,0
// 	u1.t2.a[1] = 123;	// 1,0,0,0,0,0,0,0
// 	u1.t2.a[0] = 1;		// 1,0,0,0,0,0,0,0
// 	type result;
// 	get(&u1,&result);
// 	printf("%d %d\n", u1.t2.a[1], result);
// 	return 0;
// }