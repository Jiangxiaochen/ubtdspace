#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cassert>

#define data "phonebook"

using namespace std;

struct PersonInfo
{
	string name;
	vector<string> phones;
};

int main()
{
	ifstream ifs(data);
	assert(ifs.is_open());
	
	string line,word;
	PersonInfo info;
	vector<PersonInfo> people;
	while(getline(ifs,line)){
		istringstream record(line);
		record >> info.name;
		info.phones.clear();
		while(record >> word) info.phones.push_back(word);
		people.push_back(info);
	}

	for(const PersonInfo &info : people){
		cout << info.name << endl;
		for(auto number : info.phones){
			cout << number << endl;
		}
	}
}
