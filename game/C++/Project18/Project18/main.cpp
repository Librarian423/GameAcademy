#include <iostream>
#include "Point.h"

using namespace std;

int main(void)
{
	Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos3 = pos1 + pos2;
	Point pos4 = pos1 - pos2;

	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();
	(pos1 += pos2);// = Point(100, 100);
	pos4.ShowPosition(); 
	pos1.ShowPosition();
	(pos1 -= pos2);
	pos1.ShowPosition();
	if ( pos1 == pos1 )
	{
		cout << "equal" << endl;
	}
	else
	{
		cout << "not equal" << endl;
	}

	if ( pos1 != pos2 )
	{
		cout << "not equal" << endl;
	}
	else
	{
		cout << "equal" << endl;
	}
	-pos1;
	pos1.ShowPosition();
	Point pos5 = ~pos1;
	pos5.ShowPosition();
	//cout << ~3 << " " << ~4 << endl;
	return 0;
}