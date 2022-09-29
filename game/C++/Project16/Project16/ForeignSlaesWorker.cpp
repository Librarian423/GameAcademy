#include <iostream>
#include <cstring>
#include "Employee.h"
#include "EmployeeHandler.h"
#include "TemporaryWorker.h"
#include "PermanentWorker.h"
#include "SalesWorker.h"
#include "ForeignSalesWorker.h"

using namespace std;

int ForeignSalesWorker::RiskPay()const
{
	double ratio = 0.0;
	switch ( level )
	{
	case RISK_LEVEL::RISK_A:
		ratio = 0.3;
		break;
	case RISK_LEVEL::RISK_B:
		ratio = 0.2;
		break;
	case RISK_LEVEL::RISK_C:
		ratio = 0.1;
		break;
	}
	return SalesWorker::GetPay() * ratio;
}

int ForeignSalesWorker::GetPay() const
{
	return SalesWorker::GetPay() + RiskPay();
}

void ForeignSalesWorker::ShowSalaryInfo() const
{
	ShowYourName();
	cout << "salary: " << SalesWorker::GetPay()<< endl;
	cout << "risk pay: " << RiskPay() << endl;
	cout << "sum: " << GetPay() << endl << endl;
}

ForeignSalesWorker::ForeignSalesWorker(const char* name, int money, double ratio, RISK_LEVEL level)
	:SalesWorker(name, money, ratio), level(level) {}