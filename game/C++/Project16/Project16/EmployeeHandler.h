#pragma once
#include "Employee.h"

class EmployeeHandler
{
private:
	Employee* empList[50];
	int empNum;

public:
	void AddEmployee(Employee* emp);
	void ShowAllSalaryInfo() const;
	void ShowTotalSalary() const;

	EmployeeHandler();
	~EmployeeHandler();
};