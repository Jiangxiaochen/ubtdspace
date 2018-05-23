#include "mycpp.h"

int main(int argc, char **argv)
{
	auto f = []{
		return 432;
	};

	cout << f() << endl;

	vector<string> words = {
		"abcd","eakdka","kd9ak"
	};

	size_t size = atoi(argv[1]);

	auto f2 = [size](const string &s){
		return s.size() > size;
	};

	auto wc = find_if(words.begin(),words.end(), f2);
	auto count = words.end() - wc;

	cout << count << endl;
}
