#include "mycpp.h"

class Quote{
public:
	Quote() = default;
	Quote(string &book, double sales_price):
		bookNo(book),price(sales_price){}
	string isbn() const{
		return bookNo;
	}
	virtual double net_price(size_t n) const;
	virtual ~Quote() = default;
private:
	string bookNo;
protected:
	double price = 0.0;
};

class Bulk_quote : public Quote{
public:
	double net_price(size_t) const override;
};

double Quote::net_price(size_t n) const
{
	return n * price;
}

double Bulk_quote::net_price(size_t n) const
{
	return 5;
}

void p(const Quote &q)
{
	cout << q.net_price(0) << endl;
}
int main()
{
	p(Bulk_quote());
	p(Quote());
}
