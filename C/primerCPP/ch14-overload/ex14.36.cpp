#include "mycpp.h"

class Ps{
public:
	Ps(istream &i = cin) : is(i){}
	string operator()() const {
		string s;
		is >> s;
		if(is) return s;
		return "";
	}
private:
	istream &is;
};

string & func()
{
	string s("abc");
	return s;
}


int main()
{
	//string s0 = func();//g++编译，func返回0x0，非法内存引用，SIGSEGV
	string s1 = "abc";
	string &r_s1 = s1;
	string s2 = r_s1;
	cout << s1 << r_s1 << s2 << endl;
	s2[0] = 'A';
	cout << s1 << r_s1 << s2 << endl;
	cout << &s1 << &r_s1 << &s2 << endl;
	
	Ps ps;
	cout << ps() << endl;

}

