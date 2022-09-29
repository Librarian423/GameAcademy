#include "Rectangle.h"
#include <iostream>

using namespace std;

void Rectangle::ShowAreaInfo()
{
	cout << "¸éÀû: " << width * height << endl;
}

int Rectangle::getWidth()
{
	return width;
}

int Rectangle::getHeight()
{
	return height;
}

Rectangle::Rectangle()
	:width(0), height(0) {}

Rectangle::Rectangle(int w, int h)
	:width(w), height(h) {}