#include "jxcutils.h"

int main()
{
	//const char *指向具有const限定符的char
	char c = 'a';
	const char cc = 'b';
	const char *cp = &c;
	const char *ccp = &cc;
	*cp = 'd';
	*ccp = 'd';
}
