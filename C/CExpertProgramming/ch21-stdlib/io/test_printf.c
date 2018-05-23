#include "stdio.h"

int main()
{
	printf("----*----*----*----\n");
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			printf("%4.4hhd*", i*j);
		}
		printf("\n");
	}
}
