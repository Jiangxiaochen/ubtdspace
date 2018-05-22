#include "mycpp.h"
using placeholders::_1;

bool check_size(const string &s, size_t sz)
{
	return s.size() >= sz;
}

int main()
{
	//_1代表接受check_size的第一个参数
	auto newCallable = bind(check_size,_1,6);
	vector<string> words = {
		"123456","1234567","123"
	};
	auto wc = find_if(words.begin(),words.end(),bind(check_size,_1,6));

	cout << wc - words.begin() << endl;
}
