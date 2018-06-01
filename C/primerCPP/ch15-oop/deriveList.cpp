#include "mycpp.h"

class Base{
public:
	int pub;
protected:
	int pro;
private:
	int pri;
};

class Pub_der : public Base{
public:
	int f(){
		return pro;
	}
};

class Pro_der : protected Base{
public:
	int f(){
		return pro;
	}
};

class Pri_der : private Base{
public:
	int f(){
		return pro;
	}
};

int main()
{
	Pub_der pub;
	cout << pub.pub << endl;
	Pro_der pro;
//	cout << pro.pub << endl;
}







