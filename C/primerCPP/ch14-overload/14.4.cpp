#include "mycpp.h"

class A{
public:
	A &operator=(initializer_list<string> il){
		for(const auto &s : il) vs.push_back(s);
		return *this;
	}
private:
	vector<string> vs;
};

int main()
{
	A a;
	a = {
		"a","b","c"
	};

}
