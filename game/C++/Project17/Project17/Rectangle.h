#pragma once
//#include "Point.h"
#include "Shape.h"

class Rectangle :public Shapes
{
public:
	Rectangle();
	Rectangle(int a, int b, int c, int d);
	Rectangle(const Point* a, const Point* b);
	virtual ~Rectangle();

	const Point& GetLT()const;
	const Point& GetRB()const;

	void Set(const Point* lt, const Point* rb);

	bool IsLTRB(int ltX, int ltY, int rbX, int rbY);
	bool IsLTRB(const Point* LT, const Point* RB);
	virtual void Print();
	virtual double Area();
	virtual double Round();

private:
	Point* lt;
	Point* rb;
};