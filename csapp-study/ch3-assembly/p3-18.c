/*
test:
	leaq (%rdi, %rsi), %rax		== x + y
	addq %rdx, %rax				== x + y + z
	cmpq $-3, %rdi				== x - -3
	jge	 .L2
	cmpq %rdx, %rsi				== y - z
	jge	 .L3
	movq %rdi, %rax				== 
 */


long test(long x, long y, long z)
{
	long val = x + y + z;
	if(x >= -3)
	{
		if(x <= 2) return x + y + z;
		val = x * z;
		return val;
	}
	else
	{
		if(y >= z){
			val = y * z;
			return val;
		}
		else
		{
			val = x * y;
			return val;
		}
	}
}

long test2(long x, long y, long z)
{
	long val = x + y + z;

	if(x < -3){
		if(y < z) val = x * y;
		else val = y * z;
	}else if(x > 2) val = x * z;

	return val;
}