// switch2:
// 	addq	$1,%rdi		//x+1
// 	cmpq	$8,%rdi		//
// 	ja		.L2			//default
// 	jmp		*.L4(,%rdi,8)

// .L4:
// 	.quad	.L9
// 	...

// A.-1,0,1,2,4,5,7

void switch2(long x, long *dest)
{
	long val = 0;
	switch(x)
	{
		case -1: val+=1;break;
		case 0:
		case 7: val+=2;break;
		case 2: 
		case 4: val+=3;break;
		case 1: val+=4;break;
		case 5: val+=5;break;
		default:val+=6;break;
	}	
	*dest = val;
}

// void switch_eg_impl(long x, long n, long *dest)
// {
// 	static void *jt[9] = {
// 		&&loc_9, &&loc_5, &&loc_6,
// 		&&loc_7, &&loc_def, &&loc_7,
// 		&&loc_8, &&loc_def, &&loc_5
// 	};

// 	unsigned long index = x + 1;
// 	long val;
// 	if(index > 8) goto loc_def;
// 	goto *jt[index];

// 	loc_A:
// 		val = x * 13;
// 		goto done;
// 	loc_B:
// 		x = x + 10;
// 	loc_C:
// 		val = x + 11;
// 		goto done;
// 	loc_D:
// 		val = x * x;
// 		goto done;
// 	loc_def:
// 		val = 0;
// 	done:
// 		*dest = val;
// }

/*
A.-1,0,1,2,4,5,7
B.def,(0,7),(2,4)
 */