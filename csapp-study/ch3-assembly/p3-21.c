/*
test:
leaq 0(,%rdi,8), %rax	== tmp = x * 8
testq %rsi,%rsi			== 
jle .l2					== if(y == 0)


 */

long test(long x, long y)
{
	long val = x * 8;
	if( y > 0 )
	{
		// val = y - x;
		// if(x >= y) val = (x &= y);
		if(x < y) val = y - x;
		else val = x & y;
	}
	else if(y <= -2){
		val = x + y;
	}
	// {
	// 	x = x + y;
	// 	long c = (y <= -2);
	// 	if(c) val = x;
	// }
	return val;
}