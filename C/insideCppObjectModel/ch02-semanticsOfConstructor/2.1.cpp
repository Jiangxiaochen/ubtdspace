#include "unistd.h"

class Foo{
public:
	int val;
	Foo *pnext;
};

void foo_bar()
{
	Foo bar;
	if(bar.val || bar.pnext){
		write(1,"haha",5);
	}
}

int main()
{
	foo_bar();
}
