#pragma once
//#include "Point.h"
#include "Shape.h"

class Circle :public Shapes
{
public:
	const Point* GetMid()const;
	double GetRadius()const;

	void Set(const Point* mid, double rad);
	void Set(int x, int y, double rad);

	virtual void Print();
	virtual double Area();
	virtual double Round();

	Circle();
	Circle(int x, int y);
	Circle(int x, int y, double rad);
	Circle(const Point* p, double rad);
	Circle(const Circle& ref);
	virtual ~Circle();

private:
	Point* midPoint;
	double radius;
};