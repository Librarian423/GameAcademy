#pragma once
#include "header.h"

class NormalAccount :public Account
{
public:
	//NormalAccount();
	NormalAccount(const int id, mine::string name, const int cash, const int rate);
	//~NormalAccount();
	virtual void printall() const;
	virtual void deposit(const double money);
	virtual void withdraw(const double money);
	double GetRate();
	//virtual double setRateMoney();

private:
	int rate;
};