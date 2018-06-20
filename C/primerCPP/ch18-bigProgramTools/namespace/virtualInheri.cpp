#include "mycpp.h"

struct b0{
	int data0;
};

struct b01 : virtual public b0{
	int data01;
};

struct b02 : virtual public b0{
	int data02;
};

struct c0 : public b01, public b02{

};


int main()
{
	c0 c;
	cout << c.data01 << endl;
	cout << c.b01::data0 << endl;
}
