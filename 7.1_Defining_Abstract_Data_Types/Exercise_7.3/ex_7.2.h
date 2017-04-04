#ifndef CP5_ex7_02_h
#define CP5_ex7_02_h

#include <string>

struct Sales_data
{
	std::string isbn() const { return bookNo; }
	Sales_data& combine (const Sales_data&);
	double avg_price() const;

	std::string bookNo;
	unsigned units_sold;
	double revenue;
};

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}
#endif