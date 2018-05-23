int main(int argc, char const *argv[])
{
	long sum = 0;
	long i;
	for(i = 0; i < 10; i++)
	{
		if(i & 1) continue;
		sum += i;
	}
	// printf("%ld\n", sum);
	return 0;
}

/*
main:
.LFB0:
        .cfi_startproc
        movl    $0, %eax	//ret = 0
        jmp     .L2			//goto L2
.L3:
        addq    $1, %rax	//ret = ret + 1
.L2:
        cmpq    $9, %rax	//ret - 9
        jle     .L3			//if <= 0 goto L3
        movl    $0, %eax	//ret = 0
        ret
 */