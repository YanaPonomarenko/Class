#pragma once
class Book
{
private:
	char* title;
	int year;
	double price;
public:
	Book(const char* bookT, int bookY, double bookP);

    Book(const Book& obj);

    ~Book();

    void print() const;
    const char* getTitle() const;
    void setPrice(double newPrice);
};

