#include <stdio.h>

int main()
{
	FILE *fp;
	fp = popen("mail admin backup", "w");
	fprintf(fp, "error with backup!!\n");
	pclose(fp);
}
