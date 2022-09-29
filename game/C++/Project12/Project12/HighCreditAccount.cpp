#pragma once
#include <iostream>
#include "header.h"
#include "HighCreditAccount.h"
#include "Exception.h"

using namespace std;

HighCreditAccount::HighCreditAccount(const int id, mine::string name, const int cash, int rate, int grade)
	:Account(id, name, cash), rate(rate), grade(grade) {}

void HighCreditAccount::printall()const  
{
	Account::printall();
	cout << "이자율: " << rate << endl;
	cout << "신용등급(1toA, 2toB, 3toC): " << grade << endl << endl;
}

void HighCreditAccount::deposit(const double money)
{
	int extra = 0;
	switch ( grade )
	{
	case 1:
		extra = 7;
		break;
	case 2:
		extra = 4;
		break;
	case 3:
		extra = 2;
		break;
	}
	if ( money < 0 )
	{
		throw WithdrawException(money);
	}
	Account::deposit(money + (money * ((rate + extra) * 0.01)));
}

void HighCreditAccount::withdraw(const double money)
{
	Account::withdraw(money);
}