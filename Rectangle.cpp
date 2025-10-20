#include "Rectangle.h"

Rectangle::Rectangle()
{
    this->x = 0;
    this->y = 0;
    this->height = 0;
    this->width = 0;
}

Rectangle::Rectangle(int x1, int y1, int h, int w)
{
    this->x = x1;
    this->y = y1;
    this->height = h;
    this->width = w;
}

int Rectangle::getPerimeter()
{
    return 2 * (this->height + this->width);
}

int Rectangle::getArea()
{
    return this->height * this->width;
}

int Rectangle::getX()
{
    return this->x;
}

int Rectangle::getY()
{
    return this->y;
}

int Rectangle::getHeight()
{
    return this->height;
}

int Rectangle::getWidth()
{
    return this->width;
}

void Rectangle::setX(int x1)
{
    this->x = x1;
}

void Rectangle::setY(int y1)
{
    this->y = y1;
}

void Rectangle::setHeight(int h1)
{
    this->height = h1;
}

void Rectangle::setWidth(int w1)
{
    this->width = w1;
}

void Rectangle::showRectangle()
{
    //
}