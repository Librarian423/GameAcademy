#include <iostream>
#include "header.h"

using namespace std;

const Point* Circle::GetMid()const
{
	return midPoint;
}
double Circle::GetRadius()const
{
	return radius;
}

void Circle::Set(const Point* mid, double rad)
{
	this->midPoint->set(mid->getX(), mid->getY());
	this->radius = rad;
}

void Circle::Set(int x, int y, double rad)
{
	this->midPoint->set(x, y);
	this->radius = rad;
}

void Circle::printCircle()
{
	cout << "MidPoint:";
	this->midPoint->Print();
}

Circle::Circle()
	:radius(0)
{
	this->midPoint = new Point();
}

Circle::Circle(int x, int y)
	:radius(0)
{
	this->midPoint = new Point(x, y);
}

Circle::Circle(int x, int y, double rad)
	:radius(rad)
{
	this->midPoint = new Point(x, y);
}

Circle::Circle(const Point* p, double rad)
	:radius(rad)
{
	this->midPoint = new Point(*p);
}

Circle::Circle(const Circle& ref)
{
	midPoint = new Point(*ref.GetMid());
	radius = ref.GetRadius();
}

Circle::~Circle()
{
	if ( midPoint != nullptr )
	{
		delete midPoint;
	}
	midPoint = nullptr;
}