#include "mycpp.h"

struct B;
struct A{
	A() = default;
	A(const B&);
};

struct B{
	operator A() const;
};

A::A(const B& b){
	cout << "Aconstb" << endl;
}
B::operator A() const{
	cout << "operatora" << endl;
}

A f(const A&){
	cout << "fconsta" << endl;
}

int main()
{
	A f(const A&);
	A a1;
	B b1;
	A a2 = f(b1);
}
