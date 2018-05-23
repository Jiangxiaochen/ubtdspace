#include "stackADT2.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	Stack s1 = create(100);
	push(s1, 1);
	push(s1, 2);
	printf("%d\n", pop(s1));
}
