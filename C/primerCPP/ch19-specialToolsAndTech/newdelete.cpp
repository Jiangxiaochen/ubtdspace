#include <cstdlib>
#include "iostream"
#include "exception"
using std::size_t;
using std::cout;
using std::endl;
using std::bad_alloc;

void *operator new(size_t sz){
	cout << "interpos new(size_t)" << endl;
	cout << sz << endl;
	if(void *mem = malloc(sz)) return mem;
	else throw bad_alloc();
}

void operator delete(void *mem) noexcept
{
	cout << "free " << mem << endl;
	free(mem);
}

//void *operator new(size_t sz, void * p)
//{
//	return (void*) std::new int();
//	return NULL;
//}

int main()
{
	int *p = new int();
	delete p;
}
