#pragma once
#include <iostream>
#include <string>
using namespace std;

struct Action {
    string title;
    Action() : title("") {}

    Action(const std::string& t) : title(t) {}

    friend ostream& operator<<(ostream& os, const Action& action) {
        os << action.title;
        return os;
    }
};

class MyStack
{
    enum { EMPTY = -1, FULL = 20 };
    Action st[FULL + 1];
    int top;

public:
    MyStack();

    void Push(const Action& a);
    void Push(const string& title);
    Action Pop();

    void Clear();
    bool IsEmpty();
    bool IsFull();
    int GetCount();

    friend ostream& operator<<(ostream& os, const MyStack& stack) {
        os << "Stack contents (" << stack.top + 1 << " elements):" << endl;
        for (int i = 0; i < stack.top + 1; i++)
        {
            os << i + 1 << ". " << stack.st[i] << endl;
        }
        os << endl;
        return os;
    }
};