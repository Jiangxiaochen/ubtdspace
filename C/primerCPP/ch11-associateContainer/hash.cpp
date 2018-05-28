#include "mycpp.h"

class Test
{
public:
	int isbn() const;
private:
	int _isbn;
};
int Test::isbn() const
{
	return _isbn;
}


size_t hasher(const Test & t)
{
	return hash<int>()(t.isbn());
}

bool eqOp(const Test &lhs, const Test &rhs)
{
	return lhs.isbn() == rhs.isbn();
}

using test_multiset = unordered_multiset<Test,
	  decltype(hasher)*,decltype(eqOp)*>;

int main()
{
	//桶大小，哈希函数指针，相等性判断
	test_multiset bookstore(42,hasher,eqOp);
	VIEW_MAP(bookstore);
}
