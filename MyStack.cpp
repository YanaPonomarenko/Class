#include "MyStack.h"

MyStack::MyStack()
{
    top = EMPTY;
}

void MyStack::Clear()
{
    top = EMPTY;
}

bool MyStack::IsEmpty()
{
    return top == EMPTY;
}

bool MyStack::IsFull()
{
    return top == FULL;
}

int MyStack::GetCount()
{
    return top + 1;
}

void MyStack::Push(const Action& a)
{
    if (!IsFull())
        st[++top] = a;
}

void MyStack::Push(const std::string& title)
{
    if (!IsFull())
        st[++top] = Action(title);
}

Action MyStack::Pop()
{
    if (!IsEmpty())
        return st[top--];
    else
        return Action();
}
