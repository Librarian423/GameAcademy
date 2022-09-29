#include <iostream>
#include "calculator.h"
using namespace std;

void Calculator::Init()
{
	AddCount = 0;
	MinCount = 0;
	MulCount = 0;
	DivCount = 0;
}
void Calculator::ShowOpCount()
{
	cout << "µ¡¼À: " << AddCount << " ";
	cout << "»¬¼À: " << MinCount << " ";
	cout << "°ö¼À: " << MulCount << " ";
	cout << "³ª´°¼À: " << DivCount << endl;
}
double Calculator::Add(double a, double b)
{
	AddCount++;
	return a + b;
}
double Calculator::Div(double a, double b)
{
	DivCount++;
	return a / b;
}
double Calculator::Min(double a, double b)
{
	MinCount++;
	return a - b;
}
double Calculator::Mul(double a, double b)
{
	MulCount++;
	return a * b;
}