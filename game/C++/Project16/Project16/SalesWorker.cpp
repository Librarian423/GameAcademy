#include <iostream>
#include <cstring>
#include "Employee.h"
#include "EmployeeHandler.h"
#include "TemporaryWorker.h"
#include "PermanentWorker.h"
#include "SalesWorker.h"

using namespace std;

SalesWorker::SalesWorker(const char* name, int money, double ratio)
	: PermanentWorker(name, money), salesResult(0), bonusRatio(ratio)
{
}
void SalesWorker::AddSalesResult(int value)
{
	salesResult += value;
}
int SalesWorker::GetPay() const
{
	return PermanentWorker::GetPay()       // PermanentWorker의 GetPay 함수 호출
		+ (int)(salesResult * bonusRatio);
}
void SalesWorker::ShowSalaryInfo() const
{
	ShowYourName();
	cout << "salary: " << GetPay() << endl << endl;
}