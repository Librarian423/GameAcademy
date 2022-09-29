#include <iostream>
#include "Circle.h"
#include "Point.h"
#include "Rectangle.h"
#include "Ring.h"
#include "Shape.h"

using namespace std;


int main()
{
	/*Point* ptr1 = new Point(5, 5);
	ptr1->Print();

	Point* ptr2 = new Point(5, 5);
	ptr2->Print();


	Rectangle rptr(ptr1, ptr2);
	rptr.printRectangle();

	Rectangle rect;
	rect.printRectangle();
	cout << endl;

	Circle* circle1 = new Circle(1, 1, 1);
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
	}*/

	Point* pos1 = new Point(-10, 10);
	Point* pos2 = new Point(10, -10);

	Shapes* shapes[4];
	shapes[0] = new Rectangle(pos1, pos2);
	shapes[1] = new Circle(pos1, 5);
	shapes[2] = new Circle(pos1, 10);
	shapes[3] = new Ring((Circle*)shapes[1], (Circle*)shapes[2]);

	for ( int i = 0; i < 4; ++i )
	{
		shapes[i]->Print();
		std::cout << "³ÐÀÌ: " << shapes[i]->Area() << std::endl;
		std::cout << "µÑ·¹: " << shapes[i]->Round() << std::endl;
		std::cout << std::endl;
	}

	for ( int i = 0; i < 4; i++ )
	{
		delete shapes[i];
	}

	return 0;
}