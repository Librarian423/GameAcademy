#include <iostream>
#include "header.h"

using namespace std;


int main()
{
	Point* ptr1 = new Point(5, 5);
	ptr1->Print();

	Point* ptr2 = new Point(5, 5);
	ptr2->Print();


	Rectangle rptr(ptr1, ptr2);
	rptr.printRectangle();

	Rectangle rect;
	rect.printRectangle();
	cout << endl;

	Circle* circle1= new Circle(1, 1, 1);
	circle1->printCircle();
	cout << endl;

	Circle* circle2 = new Circle(1, 1, 5);
	circle2->printCircle();
	cout << endl;

	Ring ring1(ptr1, 4, ptr2, 9);
	ring1.ShowRingInfo();
	cout << endl;

	Ring ring2(circle1, circle2);
	ring2.ShowRingInfo();
	cout << endl;

	Ring* cptr = new Ring(2, 2, 4, 2, 2, 9);
	cptr->ShowRingInfo();

	if ( ptr1 != nullptr )
	{
		delete ptr1;
	}
	if ( ptr2 != nullptr )
	{
		delete ptr2;
	}
	if ( circle1 != nullptr )
	{
		delete circle1;
	}
	if ( circle2 != nullptr )
	{
		delete circle2;
	}
	if ( cptr != nullptr )
	{
		delete cptr;
	}

	return 0;
}