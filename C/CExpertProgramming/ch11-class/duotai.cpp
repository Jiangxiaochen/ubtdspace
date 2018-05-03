#include <jxcutils.h>

class c0
{
public:
	c0(){
		printf("c0 created\n");
	}
	void f(){
		printf("c0 f\n");
	}
	void f(int a){
		printf("c0 f(int a)\n");
	}
	virtual void f(double a){
		printf("c0 f(double a)\n");
	}
};

class c1 : public c0
{
public:
	c1(){
		printf("c1 created\n");
	}
	void f(){
		printf("c1 f\n");
	}
	void f(int a){
		printf("c1 f(int a)");
	}
	void f(double a){
		printf("c1 f(double)\n");
	}
};

int main()
{
	c0 o1;
	c1 o2;
	o1.f();o1.f(1);;
	o2.f();o2.f(1);o2.f(1.1);
}
