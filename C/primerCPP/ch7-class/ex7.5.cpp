#include <iostream>

using namespace std;

class E738
{
public:
	E738(istream &is = cin);
//	E738(string s = ""); //ambiguous
	E738(string s);
};

E738::E738(istream &is){cout<<"istream"<<endl;}
E738::E738(string s){cout<<"string"<<endl;}

int main()
{
	E738 a;
	E738 b(cin);
	f();
}
