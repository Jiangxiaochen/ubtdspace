#include "mycpp.h"

class Foo{
public:
	Foo &operator=(const Foo &rhs) &{ //this只能指向可修改的左值
		a = rhs.a;
		return *this;
	}
private:
	int a;
};

Foo func()
{
	Foo a;
	return a;
}

class Test{
public:
	Test sorted() &&;
	Test sorted() const &;
private:
	vector<int> data;
};

Test Test::sorted() &&
{
	sort(data.begin(),data.end());
	return *this;
}
Test Test::sorted() const &{
	Foo ret(*this);
	sort(ret.data.begin(),ret.data.end());
	return ret;
}


int main()
{
	string s1 = "a", s2 = "b";
	auto n = (s1+s2).find("a");

	s1+s2 = "wow";

	Foo a;
//	func() = a;

}
