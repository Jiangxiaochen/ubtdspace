long shift_left4_rightn(long x, long n)
{
	x <<= 4;
	x >>= n;
	return x;
}

/**
 * @Author:      xiaochen.jiang
 * @Email:       1370035324@qq.com
 * @DateTime:    2018-01-30 09:31:51
 * @Description: 
 *
 * shift_left4_rightn:
 * 	movq %rdi, %rax
 *  salq $4, %rax
 *  movl %esi, %ecx
 *	sarb %cl, %rax 
 */
