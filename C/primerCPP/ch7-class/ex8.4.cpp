#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;


void read_str(ifstream &ifs, vector<string> &v)
{
	string str;
	while(getline(ifs,str)){
		v.push_back(str);
	}
	cout << "*************" << endl;
	for(auto str : v){
		cout << str << endl;
	}
}

void read_word(ifstream &ifs, vector<string> &v)
{
	string str;
	while(ifs >> str){
		v.push_back(str);
		cout << str << endl;
	}
}

int main(int argc, char **argv)
{
	vector<string> str_vec1;
	ifstream ifs(argv[1]);
#ifdef word
	read_word(ifs, str_vec1);
#else	
	read_str(ifs, str_vec1);
#endif
}
