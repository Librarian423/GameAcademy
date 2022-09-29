#include <iostream>
#include <cstring>
#include "Employee.h"
#include "EmployeeHandler.h"
#include "TemporaryWorker.h"
#include "PermanentWorker.h"
#include "SalesWorker.h"

using namespace std;

EmployeeHandler::EmployeeHandler() 
	: empNum(0) {}

void EmployeeHandler::AddEmployee(Employee* emp)
{
	empList[empNum++] = emp;
}
void EmployeeHandler::ShowAllSalaryInfo() const
{
	for ( int i = 0; i < empNum; i++ )
		empList[i]->ShowSalaryInfo();
}
void EmployeeHandler::ShowTotalSalary() const
{
	int sum = 0;
	for ( int i = 0; i < empNum; i++ )
		sum += empList[i]->GetPay();
	cout << "salary sum: " << sum << endl;
}
EmployeeHandler::~EmployeeHandler()
{
	for ( int i = 0; i < empNum; i++ )
		delete empList[i];
}