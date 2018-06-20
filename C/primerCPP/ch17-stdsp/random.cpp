#include "mycpp.h"
#include "random"

int main()
{
	default_random_engine e;	
	for(size_t i = 0; i < 10; ++i) cout << e() << " ";
}
