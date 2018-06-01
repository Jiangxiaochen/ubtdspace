#include "sales_data.h"
using std::istream;
using std::ostream;

Sales_data& Sales_data::combine(const Sales_data &other)
{
	units_sold += other.units_sold;
	revenue += other.revenue;
	return *this;
}

double Sales_data::avg_price() const
{
	if(units_sold) return revenue/units_sold;
	return 0;
}

istream &read(istream &is, Sales_data &item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << " "
		<< item.revenue << " " << item.avg_price();
	return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

Sales_data::Sales_data(std::istream &is)
{
	read(is, *this);
}

ostream &operator<<(ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << " "
		<< item.revenue << " " << item.avg_price();
	return os;
}

istream &operator>>(istream &is, Sales_data &item)
{
	double price;
	is >> item.bookNo >> item.units_sold >> price;
	if(is) item.revenue = item.units_sold * price;
	else item = Sales_data();
	return is;
}

Sales_data &operator=(Sales_data &rhs)
{
	auto lhs = this;
	lhs.bookNo = rhs.bookNo,lhs.units_sold=rh.units_sold,lhs.revenue=rhs.revenue;
	return *lhs;
}

Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum += rhs;
	return sum;
}

