#include "mycpp.h"

class QueryResult;

class TextQuery
{
public:
	using line_no = vector<string>::size_type;
	TextQuery(ifstream&);
	QueryResult query(const string &) const;
	void showfile(const int num) const;
	void showwm(const char *str) const;
private:
	shared_ptr<vector<string>> file;
	map<string,shared_ptr<set<line_no>>> wm;
};



