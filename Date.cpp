#include "Date.h"

Date::Date()
{
	day = 1;
	month = 1;
	year = 1;
}

Date::Date(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}

int Date::getDay() const
{
	return day;
}

int Date::getMonth() const
{
	return month;
}

int Date::getYear() const
{
	return year;
}

void Date::setDay(int d)
{
	day = d;
}

void Date::setMonth(int m)
{
	month = m;
}

void Date::setYear(int y)
{
	year = y;
}

int Date::operator-(const Date& obj) const
{
	int days1 = year * 365 + month * 30 + day;
	int days2 = obj.year * 365 + obj.month * 30 + obj.day;

	if (days1 > days2)
		return days1 - days2;
	else
		return days2 - days1;
}

Date& Date::operator+=(int days)
{
	day += days;
	return *this;
}

ostream& operator<<(ostream& out, const Date& obj)
{
	out << "Day: " << obj.day << " Month: " << obj.month << " Year: " << obj.year;
	return out;
}

istream& operator>>(istream& in, Date& obj)
{
	cout << "Enter day: ";
	in >> obj.day;
	cout << "Enter month: ";
	in >> obj.month;
	cout << "Enter year: ";
	in >> obj.year;
	return in;
}
