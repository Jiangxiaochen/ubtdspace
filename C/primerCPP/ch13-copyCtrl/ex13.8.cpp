#include "mycpp.h"

class HasPtr
{
public:
	HasPtr(const std::string &s = std::string()):
		ps(new std::string(s)),i(0){}
	HasPtr(const HasPtr &oth) : ps(new string(*(oth.ps))),i(oth.i){}
	HasPtr & operator=(const HasPtr &rhs){
		if(this == &rhs) return *this;
		*ps = *(rhs.ps);
		i = rhs.i;
		return *this;
	}
	~HasPtr(){
		delete ps;
	}
	void show(){
		cout << *ps << " " << i << endl;
	}
	void set(const string &s,int i = 0){
		*ps = s,this->i = i;
	}
	friend	bool operator<(const HasPtr &lhs,const HasPtr &rhs){
		return *lhs.ps < *(rhs.ps);
	}
	friend void swap(HasPtr &lhs, HasPtr &rhs);
	void swap(HasPtr &rhs){
		using std::swap;
		swap(ps,rhs.ps);
		swap(i,rhs.i);
		cout << "swap(HasPtr &rhs)" << endl;
	}
private:
	std::string *ps;
	int i;
};

void swap(HasPtr &lhs, HasPtr &rhs)
{
	cout << "swap called "<< *lhs.ps << " " << *rhs.ps << endl;
	swap(lhs.ps,rhs.ps);
	swap(lhs.i,rhs.i);
}

int main()
{
	HasPtr a("haha");
	HasPtr b(a);
	a.show();
	b.show();
	b.set("zhazha",11);
	a.show();
	b.show();
	a = b;
	a.show();
	cout << "********************" << endl;

	vector<HasPtr> vh = {
		string("a"),
		string("f"),
		string("e"),
		string("g"),
		string("c"),
	};
	sort(vh.begin(),vh.end());
	
	for(auto & h : vh){
		h.show();
	}



}
