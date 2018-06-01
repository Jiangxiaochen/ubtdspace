#include "mycpp.h"

class JXCA{
public:
	int a,b,c;
};

int main()
{
	JXCA o;
	o.a = o.b = o.c = 123;
	shared_ptr<JXCA> p = make_shared<JXCA>();
	
	shared_ptr<string> p1 = make_shared<string>("jxc");
	
	string s = "xxt";
	
	shared_ptr<vector<string>> p2 = make_shared<vector<string>>();
	p2->push_back("haha");
	
	vector<string> vs = {
		"haha","haha2"
	};


	return 0;
}
