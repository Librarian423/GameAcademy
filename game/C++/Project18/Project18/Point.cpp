#include <iostream>
#include "Point.h"

const Point operator+(const Point& pos1, const Point& pos2)
{
	Point pos(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
	return pos;
}

const Point operator-(const Point& pos1, const Point& pos2)
{
	Point pos(pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos);
	return pos;
}

const bool operator==(const Point& pos1, const Point& pos2)
{
	return (pos1.xpos == pos2.xpos && pos1.ypos == pos2.ypos);
}
const bool operator!=(const Point& pos1, const Point& pos2)
{
	return (pos1.xpos != pos2.xpos || pos1.ypos != pos2.ypos);
}
const Point operator~(Point &ref)
{
	return Point(ref.ypos, ref.xpos);
}