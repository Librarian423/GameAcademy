#define _USE_MATH_DEFINES // for C++
#include <iostream>
#include <cmath>
#include "Circle.h"


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

void Circle::Print()
{
	cout << "MidPoint:";
	this->midPoint->Print();
	cout << "¹ÝÁö¸§: " << this->radius << endl;
}

double Circle::Area()
{
	return (radius * radius) * M_PI;
}

double Circle::Round()
{
	return (2 * (radius)*M_PI);
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