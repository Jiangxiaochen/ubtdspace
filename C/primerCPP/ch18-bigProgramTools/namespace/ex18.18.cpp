#include "utility"
#include "string"

struct T{
	std::string mem1;
};

void swap(T v1, T v2)
{
	using std::swap;
	swap(v1.mem1,v2.mem1);
}

int main()
{
	T t1,t2;
	t1.mem1 = 1;
	t2.mem1 = 2;

	swap(t1,t2);
	
}
