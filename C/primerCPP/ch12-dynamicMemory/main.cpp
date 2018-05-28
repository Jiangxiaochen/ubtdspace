#include "TextQuery.h"
#include "QueryResult.h"

void runQueries(ifstream &infile)
{
	TextQuery tq(infile);
	while(true){
		cout << "enter word to look for, or q to quit: ";
		string s;
		if(!(cin >> s) || s == "q") break;
		print(cout, tq.query(s)) << endl;
	}
}

int main()
{
	ifstream ifs("a.txt");
	runQueries(ifs);
}
