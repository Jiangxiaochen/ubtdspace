#include <stdio.h>

int main(int argc, char const *argv[], char const *envp[])
{
	printf("Command Line arguments:\n");

	for (int i = 0; i < argc; ++i)
	{
		printf("%s\n", argv[i]);
	}
	printf("Environment variables\n");

	int index = 0;
	while(1){
		if(envp[index] == NULL) break;
		printf("%s\n", envp[index]);
		index++;
	}

	return 0;
}