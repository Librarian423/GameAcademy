#pragma once

class Point
{
public:
	int getX() const;
	int getY() const;

	void set(int a, int b);

	void Print();

	Point();
	Point(const int& a, const int& b);
private:
	int x;
	int y;
};

class Rectangle
{
public:
	Rectangle();
	Rectangle(int a, int b, int c, int d);
	Rectangle(const Point* a, const Point* b);
	~Rectangle();
	const Point& GetLT()const;
	const Point& GetRB()const;

	void Set(const Point* lt, const Point* rb);

	bool IsLTRB(int ltX, int ltY, int rbX, int rbY);
	bool IsLTRB(const Point* LT, const Point* RB);
	void printRectangle();
	
private:
	Point *lt;
	Point *rb;
};

class Circle
{
public:
	const Point* GetMid()const;
	double GetRadius()const;

	void Set(const Point* mid, double rad);
	void Set(int x, int y, double rad);

	void printCircle();

	Circle();
	Circle(int x, int y);
	Circle(int x, int y, double rad);
	Circle(const Point* p, double rad);
	Circle(const Circle& ref);
	~Circle();
private:
	Point *midPoint;
	double radius;
};

class Ring
{
public:
	void Init(int x1, int y1, double rad1, int x2, int y2, double rad2);
	void Init(const Point* a, double rad1, const Point* b, double rad2);
	
	const Circle* GetC1() const;
	const Circle* GetC2() const;

	void ShowRingInfo();
	
	bool IsMidPoint(int x1, int y1, int x2, int y2);
	bool IsMidPoint(const Point* a, const Point* b);
	bool IsRadius(double rad1, double rad2);
	bool IsRing(double rad1, double rad2);

	Ring();
	Ring(int x1, int y1, double rad1, int x2, int y2, double rad2);
	Ring(const Point* p1, double rad1, const Point* p2, double rad2);
	Ring(const Circle* cc1, const Circle* cc2);
	Ring(const Ring& ref);
	~Ring();
private:
	Circle *c1;
	Circle *c2;
};