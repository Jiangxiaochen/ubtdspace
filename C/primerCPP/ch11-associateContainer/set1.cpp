#include "mycpp.h"

int main()
{
	map<string,size_t> word_count;
	set<string> exclude = {
		"the","but","and"
	};

	string word;
	while(cin >> word){
		if(exclude.find(word) == exclude.end()){
			++word_count[word];
		}
	}
}
