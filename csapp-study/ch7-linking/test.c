void foo(void);
void foo(int);
void foo(int,double);
void foo(double,int);

int main(){
	int a;
	double b;
	foo();
	foo(a);
	foo(a,b);
	foo(b,a);
}
