#include "mycpp.h"

class Screen{
public:
	Screen& home(){
		return *this;
	}
	Screen& forward(){
		return *this;
	}
	Screen& back(){
		return *this;
	}
	Screen& up(){
		return *this;
	}
	Screen& down(){
		return *this;
	}

	using Action = Screen& (Screen::*)();
	enum Directions {
		HOME,FORWARD,BACK,UP,DOWN
	};
	Screen& move(Directions);
private:
	static Action Menu[];
};

Screen& Screen::move(Directions cm)
{
	return (this->*Menu[cm])();
}
Screen::Action Screen::Menu[] = {
	&Screen::home,&Screen::forward,&Screen::back,&Screen::up,&Screen::down
};

int main()
{
	int a = Screen::HOME;
	Screen sc;
	sc.move(Screen::HOME);
}


