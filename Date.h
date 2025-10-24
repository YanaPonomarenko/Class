#pragma once
#include <iostream>
using namespace std;

class Date
{
private:
	int day;
	int month;
	int year;

public:
	Date();
	Date(int d, int m, int y);

	int getDay() const;
	int getMonth() const;
	int getYear() const;

	void setDay(int d);
	void setMonth(int m);
	void setYear(int y);

	int operator-(const Date& obj) const;
	Date& operator+=(int days);

	friend ostream& operator<<(ostream& out, const Date& obj);
	friend istream& operator>>(istream& in, Date& obj);
};


