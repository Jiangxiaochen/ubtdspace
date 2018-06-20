#include "mycpp.h"

struct TEST{
	virtual void fuc(){

	}
	int a[10];
	int *p;
	/*
	TEST(const TEST &t){
		memcpy(a,t.a,sizeof(a));
		cout << "called copy constructor" << endl;
	}
	*/
	TEST(){
		p = new int[10];
	}
};

TEST foo()
{
	TEST t;
	t.a[2] = 11;
	return t;
};
TEST foo2(TEST &t)
{
	t.a[3] = 4567;
	return t;
}

int main()
{
	/*
	TEST t = foo();
	cout << t.a[2] << endl;
	TEST t1 = t;
	*/
	TEST t; t.a[2] = 1234;
	TEST t2 = foo2(t);
	cout << t2.a[2] << " " << t2.a[3] << endl;
}
