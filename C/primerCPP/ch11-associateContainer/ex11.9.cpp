#include "mycpp.h"

class Sales_data
{
public:
	int isbn() const;
private:
	int _isbn;
};

int Sales_data::isbn() const
{
	return _isbn;
}

bool comp(const Sales_data &s1, const Sales_data &s2)
{
	return s1.isbn() < s2.isbn();
}
#ifdef HAHA
bool comp2(const Sales_data &s1, const Sales_data &s2)
{
	return true;
}
#endif
using sd_comp = bool (*)(const Sales_data &, const Sales_data &);

int main()
{
	map<string,list<int>> words;
	map<Sales_data,int,decltype(comp)*> t1(comp);
	Sales_data s1;
	Sales_data s2;
	t1[s1]++;
	t1[s2]++;
	map<Sales_data,int,sd_comp> t2(comp);
	t2[s2]++;
	t2[s1]++;
}
