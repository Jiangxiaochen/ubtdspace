#include "mycpp.h"
#include "functional"

int add(int a,int b)
{
	return a+b;
}

auto mod = [](int i, int j) {return i%j;};

struct divide{
	int operator()(int deno,int divisor) {
		return deno/divisor;
	}
};
		


int main()
{
	map<string,function<int(int,int)>> ops;
	ops.insert(make_pair("+",add));
	ops.insert(make_pair("%",mod));
	ops.insert(make_pair("/",divide()));
}
