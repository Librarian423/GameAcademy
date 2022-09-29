#include <iostream>
#include "point.h"
using namespace std;



int main(void)
{
	Point pos1 = { 12, 4 };
	Point pos2 = { 20, 30 };

	pos1.MovePos(-7, 10);
	pos1.ShowPosition(); // [5, 14]

	pos1.AddPoint(pos2);
	pos1.ShowPosition(); // [25, 44]
}