#pragma once
#include "header.h"
#include "NormalAccount.h"

class HighCreditAccount :public Account
{
public:
	//HighCreditAccount();
	HighCreditAccount(const int id, mine::string name, const int cash, int rate, int grade);
	
	virtual void printall() const;
	virtual void deposit(const double money);
	virtual void withdraw(const double money);


private:
	int rate;
	int grade;
};