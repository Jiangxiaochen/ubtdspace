#include "mycpp.h"
class JXC{
public:
	virtual void FUNC(void){
		int a,b;
		a += b;
		cout << a << endl;
	}

};

class CHILD : public JXC{
	void FUNC(void){
		cout << "Haha" << endl;
	}
};
class CXJ{

};

int main()
{

	cout << sizeof(JXC) << endl;
	cout << sizeof(CXJ) << endl;

	JXC j;
	(&j)->FUNC();
	CHILD c;
	JXC &jc = c;
	jc.FUNC();
}
