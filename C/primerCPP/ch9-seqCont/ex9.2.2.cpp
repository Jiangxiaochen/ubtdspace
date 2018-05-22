#include "mycpp.h"

class Test
{
public:
	Test(int i) : a(i){
		cout << "Test(" << i << ")" << endl;
	}
	~Test(){
		cout << "~Test("<< a << ")" << endl;
	}
private:
	int a;
};

int main()
{
	vector<Test> v;
	int num = 10;
	Test tmp(1);
	while(num--){
		v.push_back(tmp);
	}
	while(1){

	}
}
