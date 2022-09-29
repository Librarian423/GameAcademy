#pragma once

class Employee
{
private:
	char name[100];
public:
	Employee(const char* name);
	void ShowYourName() const;

	virtual void ShowSalaryInfo() const = 0;
	virtual int GetPay() const = 0;
};