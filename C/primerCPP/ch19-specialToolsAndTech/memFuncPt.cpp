#include "mycpp.h"
class A;
class A{
public:
	int a;
	void func() const{
		cout << a << " " << b << endl;
	}
	void func(int a) const{
		cout << "haha" << endl;
	}
	static string A::* rb() {
		return &A::b;
	}


private:
	string b;
};

using fi_t2 = void (A::*)(int) const;
void haha(const A& a, fi_t2 f = &A::func)
{
	(a.*f)(a.a);
}

int main()
{
	const int A::*pa = &A::a;
	//const int A::*pb = &A::b;
//	auto pf = &A::func;
	typedef void (A::*fi_t)() const;
	fi_t pf = &A::func;
	fi_t2 pf2 = &A::func;

	auto pb = A::rb();	

	A o;
	o.a = 1314;
	o.*pb = "abc";
	(o.*pf2)(10);
	(&o->*pf2)(20);
	fi_t2 f = &A::func;
	(o.*pf)();
	haha(o);
//	haha(o,pf);
	haha(o,pf2);
}
