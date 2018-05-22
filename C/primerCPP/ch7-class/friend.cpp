void f();

struct X
{
	friend void f() {} //defined in class
	X() {f();}	//error, f is not declared
	void g();
	void h();
};

void X::g() {return f();} //error
void f();	//f declared
void X::h() {return f();} //right
