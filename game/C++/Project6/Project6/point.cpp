#include <iostream>
#include "point.h"
using namespace std;


void Point::MovePos(int x, int y)
{
	xpos += x;
	ypos += y;
}
void Point::AddPoint(const Point& pos)
{
	xpos += pos.xpos;
	ypos += pos.ypos;
}
void Point::ShowPosition()
{
	cout << "[" << xpos << ", " << ypos << "]" << endl;
}