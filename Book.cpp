#include "Book.h"
#include <iostream>
using namespace std;

Book::Book(const char* bookT, int bookY, double bookP)
{
    size_t titleLength = strlen(bookT);
    this->title = new char[titleLength + 1];
    strcpy_s(this->title, titleLength + 1, bookT);

    this->year = bookY;
    this->price = bookP;

	
}

Book::Book(const Book& obj)
{
    size_t titleLength = strlen(obj.title);
    this->title = new char[titleLength + 1];
    strcpy_s(this->title, titleLength + 1, obj.title);

    this->year = obj.year;
    this->price = obj.price;
}

Book::~Book()
{
    delete[] this->title;
}

void Book::print() const
{
    cout << "Назва: " << this->title << endl;
    cout << "Рік видання: " << this->year <<endl;
    cout << "Ціна: " << this->price << " грн" << endl;
}
