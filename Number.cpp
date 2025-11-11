#include <iostream>
#include "Number.h"
using namespace std;

Number::Number()
{
	value = 0;
}

Number::Number(int value)
{
	this->value = value;
}

int Number::getValue() const
{
	return value;
}

// 

Number& Number::operator++() //префіксний
{
	this->value++;
	return *this;
}
Number Number::operator++(int) //постфіксний
{
    Number temp = *this;
    this->value++;
    return temp;
}

Number& Number::operator--() 
{
    this->value--;
    return *this;
}

Number Number::operator--(int) 
{
    Number temp = *this;
    this->value--;
    return temp;
}
//
