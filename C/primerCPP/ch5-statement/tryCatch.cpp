#include <iostream>
using namespace std;

int main()
{
	try{
		int *p = nullptr;
		if(!p) throw(runtime_error("p is null"));
		cout << *p << endl;
	}catch(runtime_error e){
		cout << e.what() << endl;
	}
}
