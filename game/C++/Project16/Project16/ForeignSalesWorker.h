#pragma once
#include "SalesWorker.h"


enum class RISK_LEVEL
{
	RISK_A = 3,
	RISK_B = 2,
	RISK_C = 1, 
};

class ForeignSalesWorker : public SalesWorker
{
public:
	int RiskPay()const;
	virtual void ShowSalaryInfo() const;
	int GetPay() const;

	ForeignSalesWorker(const char* name, int money, double ratio, RISK_LEVEL level);

private:
	RISK_LEVEL level;
};
