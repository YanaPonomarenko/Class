#pragma once
class Rectangle
{
private:
	int x;
	int y;
	int height;
	int width;
public:
	Rectangle();
	Rectangle(int x1, int y1, int h, int w);

	int getPerimeter();
	int getArea();

	int getX();
	int getY();
	int getHeight();
	int getWidth();

	void setX(int x1);
	void setY(int y1);
	void setHeight(int h1);
	void setWidth(int w1);

	void showRectangle();
};

