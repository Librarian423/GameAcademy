#include "Square.h"
#include <iostream>

using namespace std;

Square::Square()
	:Rectangle(0, 0) { }

Square::Square(int a)
	:Rectangle(a, a) { }

Square::Square(Rectangle& rec)
{
	if ( rec.getWidth() == rec.getHeight() )
	{
		Rectangle(rec.getWidth(), rec.getHeight());
	}
	else
	{
		Rectangle(0, 0);
		cout << "���簢���� �ƴմϴ�." << endl;
	}
}
