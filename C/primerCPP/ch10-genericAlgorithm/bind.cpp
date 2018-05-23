#include "mycpp.h"
using namespace placeholders;

bool check_size(const string &s, size_t sz)
{
	return s.size() >= sz;
}

void f(int a, int b, int c, int d, int e)
{
	printf("%d %d %d %d %d\n",a,b,c,d,e);
}

ostream &print(ostream &os, const string &s, char c)
{
	return os << s << c;
}

int main()
{
	//_1代表接受check_size的第一个参数
//	auto newCallable = bind(check_size,_1,6);
	vector<string> words = {
		"123456","1234567","123"
	};
	auto wc = find_if(words.begin(),words.end(),bind(check_size,_1,6));

	cout << wc - words.begin() << endl;
	auto g = bind(f,1,2,_2,3,_1);
	g(4,5);//1,2,5,3,4
	char c = '\n';
	ostream &os = cout;
	for_each(words.begin(),words.end(),[&os,c](const string &s){
			os << s << c;
			});

	
	cout << "--------------" << endl;

	for_each(words.begin(),words.end(),bind(print,ref(os),_1,c));

}
