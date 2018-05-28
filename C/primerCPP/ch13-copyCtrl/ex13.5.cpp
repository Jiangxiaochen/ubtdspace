#include "mycpp.h"

class HasPtr
{
public:
	HasPtr(const std::string &s = std::string()):
		ps(new std::string(s)),i(0){}
	HasPtr(const HasPtr &oth) : ps(new string(*(oth.ps))),i(oth.i){}
	void show(){
		cout << *ps << " " << i << endl;
	}
	void set(const string &s,int i = 0){
		*ps = s,this->i = i;
	}
private:
	std::string *ps;
	int i;
};

int main()
{
	HasPtr a("haha");
	HasPtr b(a);
	a.show();
	b.show();
	b.set("zhazha",11);
	a.show();
	b.show();
}
