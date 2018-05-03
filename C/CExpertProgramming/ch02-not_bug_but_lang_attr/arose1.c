#include <jxcutils.h>

#define NUL '\0'

int main()
{
	char s[6] = {
		'a', 'b', 'c', NUL, 'd', 'e'
	};
	printf("%s\n", s);
}
