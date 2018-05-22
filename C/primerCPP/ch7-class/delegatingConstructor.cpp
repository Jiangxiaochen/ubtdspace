#include <iostream>
#include <string>
using namespace std;

class Sales_data
{
public:
    Sales_data(std::string s, unsigned cnt, double price):
		bookNo(s),units_sold(cnt),revenue(price){cout<<"complete"<<endl;}
	Sales_data() : Sales_data("",0,0){cout<<"default"<<endl;}
	Sales_data(string s) : Sales_data(s,0,0){cout<<"string"<<endl;}
	explicit Sales_data(istream &is) : Sales_data(){cout<<"istream"<<endl;}
	void read(istream &is,Sales_data &other);
private:
	string bookNo;
	unsigned units_sold;
	double revenue;
};

int main()
{
	Sales_data s(cin); // complete->default->istream
	Sales_data s2 = string("123");
//	Sales_data s3 = cin;// error because of explicit
	Sales_data s4("123");
}
