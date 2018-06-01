#include "mycpp.h"

class String{
public:
	String(const char * c = NULL){
		if(!c) pc = NULL,size = 0;
		else{
			size_t len = strlen(c);
			pc = alloc.allocate(len);
			strcpy(pc,c);
			size = len;
		}
	}
	void show(){
		for(size_t i = 0; i < size; i++) cout << pc[i];
		cout << endl;
	}
private:
	static allocator<char> alloc;
	char *pc;
	size_t size;
};

allocator<char> String::alloc = allocator<char>();

int main()
{
	String s;
	s.show();
	String s2("abc");
	s2.show();
}
