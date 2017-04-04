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
// member function
Sales_data& Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

// nonmember functions
std::istream& read (istream& is, Sales_data& item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

std::ostream& print (ostream& os, const Sales_data& item)
{
    os << item.isbn() << " " << item.units_sold << " "
       << item.revenue << " " << item.avg_price();
    return os;
}

Sales_data add (const Sales_data& lhs, const Sales_data& rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

#endif
