#include "mycpp.h"

void func1(const vector<int> &vi)
{
	auto en = vi.end() - 1;
	auto be = vi.begin();
	while(en >= be){
		cout << *en << endl;
		en--;
	}
}

int main()
{
	vector<int> vi = {
		1,2,3,4,5,6
	};
	func1(vi);
	vector<int> vi2;
//	func1(vi2);
	if(vi2.begin() == vi2.end()) cout << "haha" << endl;
}
