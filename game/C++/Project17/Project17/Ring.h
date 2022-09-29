#pragma once
#include "Circle.h"
#include "Shape.h"

class Ring :public Shapes
{
public:
	void Init(int x1, int y1, double rad1, int x2, int y2, double rad2);
	void Init(const Point* a, double rad1, const Point* b, double rad2);

	const Circle* GetC1() const;
	const Circle* GetC2() const;

	virtual void Print();
	virtual double Area();
	virtual double Round();

	bool IsMidPoint(int x1, int y1, int x2, int y2);
	bool IsMidPoint(const Point* a, const Point* b);
	bool IsRadius(double rad1, double rad2);
	bool IsRing(double rad1, double rad2);

	Ring();
	Ring(int x1, int y1, double rad1, int x2, int y2, double rad2);
	Ring(const Point* p1, double rad1, const Point* p2, double rad2);
	Ring(const Circle* cc1, const Circle* cc2);
	Ring(const Ring& ref);
	virtual ~Ring();

private:
	Circle* c1;
	Circle* c2;
};