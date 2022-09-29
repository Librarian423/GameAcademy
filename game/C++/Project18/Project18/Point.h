#pragma once
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{
	}
	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}

	friend const Point operator+(const Point& pos1, const Point& pos2);
	friend const Point operator-(const Point& pos1, const Point& pos2);

	Point& operator+=(const Point& ref)
	{
		xpos += ref.xpos;
		ypos += ref.ypos;
		//return *this = *(this) + ref;
		return *this;
		
	}

	Point& operator-=(const Point& ref)
	{
		return *this = *(this) - ref;
	}
	
	const Point& operator -()
	{
		const Point retobj(xpos, ypos);
		xpos *= -1;
		ypos *= -1;
		//return Point(-xpos,-ypos);
		return retobj;
	}

	friend const Point operator~(Point& ref);
	friend const bool operator==(const Point& pos1, const Point& pos2);
	friend const bool operator!=(const Point& pos1, const Point& pos2);

};

