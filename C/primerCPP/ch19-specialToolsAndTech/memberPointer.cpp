#include "mycpp.h"

struct Screen{
	typedef string::size_type pos_t;
	char get_cursor() const {
		return contents[cursor];
	}
	char get() const;
	char get(pos_t ht, pos_t wd) const;
	string contents;
	pos_t cursor;
	pos_t height,width;

	static const string Screen::*data(){
		return &Screen::pr_contents;
	}
private:
	string pr_contents;
};



int main()
{
	const string Screen::*pdata;
	pdata = &Screen::contents;
	Screen s1,s2;
	s1.contents = "abcs1";
	s2.contents = "efgs2";
	Screen *ps2 = &s2;
	cout <<  s1.*pdata << endl;
	cout <<  ps2->*pdata << endl;
	auto ps3 = s2.data();
	cout << ps3 << endl;
	cout << s1.data() << endl;
}
