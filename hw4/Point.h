#ifndef Point_H
#define Point_H
#include <iostream>
using namespace std;

class Figure
{
public:
	int _x1, _y1, _x2, _y2, _x3, _y3;
};
/////////////////////////////////////////////////////////
class Line : public Figure
{
public:
	Line(int x1, int y1, int x2, int y2)
	{
		_x1 = x1;
		_y1 = y1;
		_x2 = x2;
		_y2 = y2;
	}
	double area()
	{
		return 0;
	}
};
/////////////////////////////////////////////////////////
class Rectangle : public Figure
{
public:
	Rectangle(int x1, int y1, int x2, int y2)
	{
		_x1 = x1;
		_y1 = y1;
		_x2 = x2;
		_y2 = y2;
	}
	double area()
	{
		return ((abs(_x1 - _x2)) * (abs(_y1 - _y2)));
	}
};
/////////////////////////////////////////////////////////
class Triangle : public Figure
{
public:
	Triangle(int x1, int y1, int x2, int y2, int x3, int y3)
	{
		_x1 = x1;
		_y1 = y1;
		_x2 = x2;
		_y2 = y2;
		_x3 = x3;
		_y3 = y3;
	}
	double area()
	{
		return (abs((_x1*_y2) + (_x2*_y3) + (_x3*_y1) - (_y1*_x2) - (_y2*_x3) - (_y3*_x1)) / 2);
	}
};
/////////////////////////////////////////////////////////
class Circle : public Figure
{
public:
	Circle(int x1, int y1, int x2, int y2)
	{
		_x1 = x1;
		_y1 = y1;
		_x2 = x2;
		_y2 = y2;
	}
	double area()
	{
		int a = abs(_x1 - _x2)*abs(_x1 - _x2) + abs(_y1 - _y2)*abs(_y1 - _y2);
		return (a*3.14159);
	}
};
#endif