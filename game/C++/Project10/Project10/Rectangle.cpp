#include <iostream>
#include "header.h"

using namespace std;

Rectangle::Rectangle()
{
	lt = new Point(0,0);
	rb = new Point(0,0);
	
};

Rectangle::Rectangle(int a, int b, int c, int d)
{
	
	if ( IsLTRB(a, b, c, d) )
	{
		lt = new Point(a, b);
		rb = new Point(c, d);
	}
	else
	{
		this->lt = new Point(0, 0);
		this->rb = new Point(0, 0);
	}
}

Rectangle::Rectangle(const Point* lt, const Point* rb)
{
	if ( IsLTRB(lt, rb) )
	{
		this->lt = new Point(*lt);
		this->rb = new Point(*rb);
	}
	else
	{
		this->lt = new Point(0,0);
		this->rb = new Point(0,0);
	}
	
}

Rectangle::~Rectangle()
{
	if ( lt != nullptr )
	{
		delete lt;
	}
	if ( rb != nullptr )
	{
		delete rb;
	}
}

const Point& Rectangle::GetLT() const
{
	return *lt;
}

const Point& Rectangle::GetRB() const
{
	return *rb;

}

void Rectangle::Set(const Point* lt, const Point* rb)
{
	if ( IsLTRB(lt, rb) )
	{
		this->lt->set(lt->getX(), lt->getY());
		this->rb->set(rb->getX(), rb->getY());
	}
}


bool Rectangle::IsLTRB(int ltX, int ltY, int rbX, int rbY)
{
	return (ltX < rbX) && (ltY > rbY);
}

bool Rectangle::IsLTRB(const Point* LT, const Point* RB)
{
	return IsLTRB(LT->getX(), LT->getY(), RB->getX(), RB->getY());
}

void Rectangle::printRectangle()
{
	cout << "LT: [" << this->lt->getX() << ", " << this->lt->getY() << "]" << endl;
	cout << "RB: [" << this->rb->getX() << ", " << this->rb->getY() << "]" << endl;
}

