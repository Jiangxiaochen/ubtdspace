#include <string>
#include <iostream>
#include <vector>
//using namespace std;
using std::string;


class Screen
{
public:
	typedef string::size_type pos;
	Screen() = default;
	Screen(pos ht, pos wd, char c): height(ht),
	width(wd),contents(ht*wd,c){}

	char get() const{return contents[cursor];}
	inline char get(pos ht, pos wd) const;
	Screen &move(pos r, pos c);
	Screen &set(char);
	Screen &set(pos, pos,char);

	void some_member() const;

	Screen &display(std::ostream &os)
	{do_display(os); return *this;}

	const Screen &display(std::ostream &os) const
	{do_display(os); return *this;}

	friend class Window_mgr;
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;
	mutable size_t access_ctr;
	void do_display(std::ostream &os) const {os << contents;}
};

void Screen::some_member() const
{
	++access_ctr;
}

inline Screen& Screen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	return *this;
}

char Screen::get(pos ht, pos wd) const
{
	pos row = ht * width;
	return contents[row+wd];
}

inline Screen& Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}

inline Screen &Screen::set(pos r, pos c, char ch)
{
	contents[r*width+c] = ch;
	return *this;
}

class Window_mgr
{
public:
	using ScreenIndex = std::vector<Screen>::size_type;
	void clear(ScreenIndex);
	ScreenIndex addScreen(const Screen &);
private:
	std::vector<Screen> screens{Screen(24,80,' ')};
};

Window_mgr::ScreenIndex Window_mgr::addScreen(const Screen &s)
{
	screens.push_back(s);
	return screens.size() - 1;
}

void Window_mgr::clear(ScreenIndex i)
{
	Screen &s = screens[i];
	s.contents = string(s.height * s.width, ' ');
}

int main()
{
	Screen myscreen;
	char ch = myscreen.get();
	ch = myscreen.get(0,0);
	myscreen.move(4,0).set('#');
	const Screen myscreen2 = Screen();
	myscreen2.display(std::cout);
}
