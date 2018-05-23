


char *get_line()
{
	char buf[4];
	char *result;
	gets(buf);
	result = malloc(strlen(buf));
	strcpy(result,buf);
	return result;
}

// 0123456789012345678901234
// 400720<get_line>:
// 	400720:	53					push	%rbx
// 	400721:	48	83	ec	10		sub 	$0x10,%rsp
// 	400725:	48	89	e7			mov 	%rsp,%rdi
// 	400728:	e8	73	ff	ff ff	callq	4006a0	<gets>
// 	
//	(%rsp) = 0x0...f
//	A:
//	00 00 00 00 00 40 00 76
//	01 23 45 67 89 ab cd ef

