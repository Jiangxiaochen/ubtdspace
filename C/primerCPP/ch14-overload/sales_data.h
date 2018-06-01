#ifndef __SALES_DATA_H
#define __SALES_DATA_H

#include <string>
#include <iostream>
using std::ostream;
using std::istream;

class Sales_data
{
public:
	Sales_data() = default;
	Sales_data(const std::string &s) : bookNo(s){}
	Sales_data(const std::string &s, unsigned n, double p):
		bookNo(s),units_sold(n),revenue(p*n){}
	Sales_data(std::istream&);
	std::string isbn() const {return bookNo;}
	Sales_data& combine(const Sales_data &);
private:
	double avg_price() const;
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;


friend Sales_data add(const Sales_data &, const Sales_data &);
friend std::ostream &print(std::ostream &, const Sales_data &);
friend std::istream &read(std::istream &, Sales_data &);
friend std::ostream &operator<<(ostream &os, const Sales_data &item);
friend std::istream &operator>>(istream &is, const Sales_data &item);
friend Sales_data &operator=(Sales_data &lhs, Sales_data &rhs);
friend Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs);
};

Sales_data add(const Sales_data &, const Sales_data &);
std::ostream &print(std::ostream &, const Sales_data &);
std::istream &read(std::istream &, Sales_data &);
ostream &operator<<(ostream &os, const Sales_data &item);





#endif
