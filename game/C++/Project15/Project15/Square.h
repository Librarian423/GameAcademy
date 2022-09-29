#pragma once
#include "Rectangle.h"

class Square :public Rectangle
{
public:
	Square();
	Square(int a);
	Square(Rectangle & rec);

private:
};

