#include "mycpp.h"

class numbered{
private:
	static int cnt;
public:
	numbered() : mysn(cnt++){}
	int mysn;
	numbered(const numbered &oth) : mysn(cnt++) {}
};

int numbered::cnt = 0;

void f(numbered s)
{
	cout << s.mysn << endl;
}

void f2(const numbered &s)
{
	cout << s.mysn << endl;
}

int main()
{
	numbered a, b = a, c = b;
//	f(a),f(b),f(c);
	f2(a),f2(b),f2(c);
}
