#pragma once

#include <string>
#include <iostream>

struct Sales_data
{
    Sales_data()
    {
        bookNo = "";
        units_sold = 0;
        revenue = 0.0;
    }
    std::string bookNo;
    unsigned units_sold;
    double revenue;

    std::string isbn() const { return bookNo; }

    Sales_data& operator+=(const Sales_data&);
    Sales_data& combine(const Sales_data&);
};

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

Sales_data& Sales_data::operator+=(const Sales_data& rhs)
{
    return this->combine(rhs);
}
Sales_data add(const Sales_data& lhs, const Sales_data& rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

Sales_data operator+(const Sales_data& lhs, const Sales_data& rhs)
{
    return add(lhs, rhs);
}

std::istream& read(std::istream& is, Sales_data& item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

std::istream& operator>>(std::istream& is, Sales_data& item)
{
    return read(is, item);
}

std::ostream& print(std::ostream& os, const Sales_data& item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.revenue;
    return os;
}

std::ostream& operator<<(std::ostream& os, const Sales_data& item)
{
    return print(os, item);
}
