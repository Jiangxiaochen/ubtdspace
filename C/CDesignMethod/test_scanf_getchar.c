#include <jxcutils.h>

int main()
{
	printf("Enter an integer: ");
	int i;
	scanf("%d", &i);
	printf("Enter a command: ");
	char command = getchar();
	printf("command: %c\n", command);
}
