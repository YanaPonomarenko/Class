#pragma once
class Number
{
private:
	int value;
public:
	Number();
	Number(int value);

	int getValue() const;
	 
	Number& operator++();
	Number operator++(int);
	Number& operator--();
	Number operator--(int);
	Number operator+(int num) const;

	friend std::ostream& operator<<(std::ostream& os, const Number& obj);

	friend std::istream& operator>>(std::istream& is, Number& obj);
};

Number operator-(int num, const Number& obj);