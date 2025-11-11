#pragma once
class Document
{
private:
	char* title;
	int pages;
public:
	Document();
	Document(const char* t, int p);

	void print();
};

