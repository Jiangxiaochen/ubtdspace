#include "mycpp.h"

range_error rr("opq");

class my_exception : public logic_error{
public:
	explicit my_exception(const char *what_arg) : logic_error(what_arg){
		cout << "my_exception" << endl;
	}
	my_exception(const my_exception &oth) : logic_error(oth){
		cout << "my_exception copy constructor" << endl;
	}
	~my_exception(){
		cout << "~my_exception" << endl;
	}
};


void f()
{
	cout << "f" << endl;
	range_error *r = new range_error("abc");
	my_exception e("lmn");
	throw e;
}


int main()
{
	try{
		f();
		cout << "after f" << endl;
	}catch(exception &e){
		cout << e.what() << endl;
	}
}
