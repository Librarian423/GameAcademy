#pragma once
#include <iostream>
#include "header.h"
#include "NormalAccount.h"
#include "Exception.h"
using namespace std;

//NormalAccount::NormalAccount()
//	:Account(0, "0", 0) {}

NormalAccount::NormalAccount(const int id, mine::string name, const int cash, const int rate)
	:Account(id, name, cash), rate(rate) { }

void NormalAccount::printall() const
{
	Account::printall();
	cout << "ÀÌÀÚÀ²: " << rate << endl << endl;
}

double NormalAccount::GetRate()
{
	return rate;
}

void NormalAccount::deposit(const double money)
{
	if ( money < 0 )
	{
		throw WithdrawException(money);
	}
	//double extra = (money * (rate * 0.01));
	Account::deposit(money + (money * (rate * 0.01)));
}

void NormalAccount::withdraw(const double money)
{
	Account::withdraw(money);
}