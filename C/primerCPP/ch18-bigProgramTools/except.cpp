#include "mycpp.h"

int id;


void f()
{
	int a[10];
	throw logic_error("haha");
}

void g()
{
	cout << "g" << endl;
	int *a = (int*)calloc(10,sizeof(int));
	a[5] = 6;
	throw a;
}

int main(int argc, char **argv)
{
	id = atoi(argv[1]);
	try{
		f();
		cout << "after f" << endl;
	}catch(const exception& e){
		cout << e.what() << endl;
	}

	try{
		g();
		cout << "after g" <<endl;
	}catch(void *p){
		int *pi = (int*) p;
		cout << pi[5] << endl;
		cout << pi[0] << endl;
		free(pi);
	}
}





