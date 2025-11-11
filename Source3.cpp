#include <iostream>
using namespace std;

class Point
{
private:
    int x;
    int y;
public:
    Point() = default;
    explicit Point(int x)
    {
        this->x = x;
        this->y = 0;
    }
    Point(int x, int y) :x{ x }, y{ y } {}
    int getX() const
    {
        return this->x;
    }
    int getY() const
    {
        return this->y;
    }
    void setY(int y)
    {
        this->y = y;
    }
    void setX(int x)
    {
        this->x = x;
    }
    void showPoint() const
    {
        cout << this->getX() << endl << this->getY() << endl;
    }
    Point& operator+(Point& obj)
    {
        Point p{ this->x + obj.x, this->y + obj.y };
        return p;
    }
    bool operator>(Point& obj)
    {
        if (this->x > obj.x && this->y > obj.y)
            return true;
        return false;
    }
    bool operator!=(Point& obj)
    {
        if (this->x != obj.x || this->y != obj.y)
            return true;
        return false;
    }
    Point& operator+(int n)
    {
        Point p{ this->x + n, this->y + n };
        return p;
    }
};

Point& operator+(int n, Point& p)
{
    Point result{ p.getX() + n, p.getY() + n };
    return result;
}

Point& operator-(int n, Point& p)
{
    Point result{ n - p.getX(), n - p.getY() };
    return result;
}

int main()
{
    Point p1{ 12,15 };
    Point p2{ 7,8 };
    Point p4 = p1 + 10; 
    Point p5 = 10 + p1;
    p4.showPoint();

    if (p1 > p2)
    {
        cout << "p1>p2\n";
    }

    if (p1 != p2)
    {
        cout << "p1 != p2\n";
    }

    Point p6 = 30 - p1;
    cout << "30 - p1: ";
    p6.showPoint();

    Point p3 = p1 + p2;
    p3.showPoint();
    return 0;
}