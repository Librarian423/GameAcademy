#pragma once

class Point
{
public:
	int getX() const;
	int getY() const;

	void set(int a, int b);

	virtual void Print();

	Point();
	Point(const int& a, const int& b);
private:
	int x;
	int y;
};