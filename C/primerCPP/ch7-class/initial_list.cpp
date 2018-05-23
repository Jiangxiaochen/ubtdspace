#include <iostream>
using namespace std;

class ConstRef
{
public:
	ConstRef(int ii);
private:
	int i;
	const int ci;
	int &ri;
};

ConstRef::ConstRef(int ii) : i(ii),ci(ii),ri(ii) {}

struct X
{
	X(int i, int j) : base(i), rem(base % j) {}
	int base,rem;
};
