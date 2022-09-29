#include <iostream>
#include "Point.h"

using namespace std;

int Point::getX()const
{
	return x;
}

int Point::getY()const
{
	return y;
}
void Point::set(int a, int b)
{
	x = a;
	y = b;
}

void Point::Print()
{
	cout << "[" << x << ", " << y << "]" << endl;
}

Point::Point()
	:x(0), y(0)
{
}


Point::Point(const int& a, const int& b)
	:x(a), y(b)
{
}