#include "mycpp.h"

int main()
{
	int n = 10;
	auto f = [n] ()->bool {
		if(n == 0) return true;
		while(n != 0) n--;
		return false;
	};
}
