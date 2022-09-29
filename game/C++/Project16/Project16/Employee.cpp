#include <iostream>
#include <cstring>
#include "Employee.h"
#include "EmployeeHandler.h"
#include "TemporaryWorker.h"
#include "PermanentWorker.h"
#include "SalesWorker.h"
#include "ForeignSalesWorker.h"

using namespace std;

Employee::Employee(const char* name)
{
	strcpy_s(this->name, strlen(name) + 1, name);
}
void Employee::ShowYourName() const
{
	cout << "name: " << name << endl;
}