#include <stdio.h>

extern char **environ;

int main()
{
	char *table[3];
	table[0] = "TERM=VT100";
	table[1] = "HOME=/ON/THE/RANGE";
	table[2] = 0;

	environ = table;
	execlp("env", "env", NULL);
}
