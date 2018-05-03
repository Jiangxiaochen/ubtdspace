int apricot[2][3][5];

#include <jxcutils.h>

int main()
{
	int (*p)[3][5] = apricot; //p is pointer to array of 3 array of 5 int
	int (*r)[5] = apricot[0]; //r is pointer to array of 5 int
	int *t = apricot[1][2];	  //t is pointer to int
}
