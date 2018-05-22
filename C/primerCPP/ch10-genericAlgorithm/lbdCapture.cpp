#include "mycpp.h"

int main()
{
	size_t v1 = 42;
	auto f2 = [&v1]{
		return v1+1;
	};
	v1 = 0;
	cout << f2() << endl;
}
