#include <iostream>
#include <string.h>
#include "printer.h"

using namespace std;

void Printer::SetString(const char *st)
{
	strcpy_s(arr, sizeof(arr),st);
}

void Printer::ShowString()
{
	cout << arr << endl;
}