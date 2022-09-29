#include <iostream>
#include "Ring.h"

using namespace std;

void Ring::Init(int x1, int y1, double rad1, int x2, int y2, double rad2)
{
	if ( IsMidPoint(x1, y1, x2, y2) && IsRadius(rad1, rad2) )
	{
		this->c1->Set(x1, y1, rad1);
		this->c2->Set(x2, y2, rad2);
	}
	else
	{
		this->c1->Set(0, 0, 0);
		this->c2->Set(0, 0, 0);
	}

}

void Ring::Init(const Point* a, double rad1, const Point* b, double rad2)
{
	if ( IsMidPoint(a, b) && IsRadius(rad1, rad2) )
	{
		this->c1->Set(a, rad1);
		this->c2->Set(b, rad2);
	}
	else
	{
		this->c1->Set(0, 0, 0);
		this->c2->Set(0, 0, 0);
	}
}

const Circle* Ring::GetC1()const
{
	return c1;
}

const Circle* Ring::GetC2()const
{
	return c2;
}

void Ring::Print()
{
	cout << "Inner Circle Info..." << endl;
	this->c1->Print();
	cout << endl;
	
	cout << "Outter Circle Info..." << endl;
	this->c2->Print();
	cout << endl;
}

double Ring::Area()
{
	return c2->Area() - c1->Area();
}

double Ring::Round()
{
	return c1->Round() + c2->Round();
}

bool Ring::IsMidPoint(int x1, int y1, int x2, int y2)
{
	return ((x1 == x2) && (y1 == y2));
}

bool Ring::IsMidPoint(const Point* a, const Point* b)
{
	return IsMidPoint(a->getX(), a->getY(), b->getX(), b->getY());
}

bool Ring::IsRadius(double rad1, double rad2)
{
	if ( IsRing(rad1, rad2) )
	{
		return (rad1 > 0 && rad2 > 0);
	}
	else
	{
		return false;
	}
}

bool Ring::IsRing(double rad1, double rad2)
{
	return (rad1 <= rad2);
}
Ring::Ring()
{
	this->c1->Set(0, 0, 0);
	this->c2->Set(0, 0, 0);
}

Ring::Ring(int x1, int y1, double rad1, int x2, int y2, double rad2)
{
	if ( IsMidPoint(x1, y1, x2, y2) && IsRadius(rad1, rad2) )
	{
		this->c1 = new Circle(x1, y1, rad1);
		this->c2 = new Circle(x2, y2, rad2);
	}
	else
	{
		this->c1->Set(0, 0, 0);
		this->c2->Set(0, 0, 0);

	}
}

Ring::Ring(const Point* p1, double rad1, const Point* p2, double rad2)
{
	if ( IsMidPoint(p1, p2) && IsRadius(rad1, rad2) )
	{
		this->c1 = new Circle(p1, rad1);
		this->c2 = new Circle(p2, rad2);
	}
	else
	{
		this->c1->Set(0, 0, 0);
		this->c2->Set(0, 0, 0);

	}
}

Ring::Ring(const Circle* cc1, const Circle* cc2)
{
	if ( IsMidPoint(cc1->GetMid(), cc2->GetMid()) && IsRadius(cc1->GetRadius(), cc2->GetRadius()) )
	{
		this->c1 = new Circle(cc1->GetMid(), cc1->GetRadius());
		this->c2 = new Circle(cc2->GetMid(), cc2->GetRadius());
	}
	else
	{
		this->c1->Set(0, 0, 0);
		this->c2->Set(0, 0, 0);

	}
}

//Ring::Ring(const Shapes* sh1, const Shapes* sh2)
//{
//	if ( IsMidPoint(sh1->getX(), sh1->getY(), sh2->getX(), sh2->getY()))
//	{
//		this->c1 = new Circle(, cc1->GetRadius());
//		this->c2 = new Circle(cc2->GetMid(), cc2->GetRadius());
//	}
//	else
//	{
//		this->c1->Set(0, 0, 0);
//		this->c2->Set(0, 0, 0);
//
//	}
//}

Ring::Ring(const Ring& ref)
{
	c1 = new Circle(*ref.GetC1());
	c2 = new Circle(*ref.GetC2());
}

Ring::~Ring()
{
	if ( c1 != nullptr )
	{
		delete c1;
	}
	if ( c2 != nullptr )
	{
		delete c2;
	}
	c1 = nullptr;
	c2 = nullptr;
}