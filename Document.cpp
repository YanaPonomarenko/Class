#include "Document.h"
#include <iostream>
using namespace std;

Document::Document()
{
	title = nullptr;
	pages = 0;
}

Document::Document(const char* t, int p)
{
	if (t != nullptr)
	{
		int size = strlen(t);
		title = new char[size + 1];
		strcpy_s(title, size + 1, t);
	}
	else
	{
		title = nullptr;
	}
	if (p >= 0)
	{
		pages = p;
	}
	else
	{
		pages = 0;
	}
}

void Document::print()
{
	cout << title << "\n" << pages << endl;
}
