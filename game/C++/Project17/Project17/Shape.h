#pragma once
#include "Point.h"

class Shapes 
{
public:
	//Shapes();
	virtual ~Shapes();

	virtual double Area() = 0;
	virtual double Round() = 0;
	virtual void Print() = 0;
private:

};
