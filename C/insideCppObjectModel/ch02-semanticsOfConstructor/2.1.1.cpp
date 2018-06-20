class Foo {
public:
	Foo() : a(10){

	}
	int a;
};
class Base{
public:
	Base(){

	}
	int b;
};

class Bar {
public:
	Bar(){
		str = 0;
	}
	Foo foo;
	Base base;
	char *str;
};

void foo_bar()
{
	Bar bar;
	if(bar.str){

	}
}

int main()
{
	foo_bar();
}


