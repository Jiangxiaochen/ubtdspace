#include "mycpp.h"

void find1(const string &s)
{
	static string numbers("0123456789");
	static string alphabet("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");

	decltype(s.size()) pos = 0;
	while(true){
		pos = s.find_first_of(numbers,pos);
		if(pos == string::npos) break;
		cout << pos << endl;
		pos++;
	}

	pos = 0;
	while(true){
		pos = s.find_first_of(alphabet,pos);
		if(pos == string::npos) break;
		cout << pos << endl;
		pos++;
	}
}

void find2(const string &s)
{
	static string numbers("0123456789");
	static string alphabet("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
	auto s_len = s.size();
	decltype(s_len) pos = 0;
	while(true){
		pos = s.find_first_not_of(alphabet,pos);
		if(pos == string::npos) break;
		cout << pos << endl;
		pos++;
		//if(pos >= s_len) break;
	}
	pos = 0;
	while(true){
		pos = s.find_first_not_of(numbers,pos);
		if(pos == string::npos) break;
		cout << pos << endl;
		pos++;
		//if(pos >= s_len) break;
	}
}

int main()
{
	string s("ab2c3d7R4E6");
	//find1(s);
	find2(s);
}
