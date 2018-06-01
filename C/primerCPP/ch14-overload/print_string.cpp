#include "mycpp.h"

class PrintString{
public:
	PrintString(ostream &o = cout, char c = ' ') : os(o), sep(c){}
	void operator()(const string &s) const {
		os << s << sep;
	}
private:
	ostream &os;
	char sep;
};

int main()
{
	PrintString printer;
	printer("abc");
	PrintString errors(cerr,'\n');
	errors("abc");
}


