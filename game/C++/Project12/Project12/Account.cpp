#pragma once
#include <iostream>
#include "header.h"
#include "MyString.h"
#include "Exception.h"
using namespace std;


int Account::GetAccountNumber()const
{
	return accountNumber;
}

double Account::GetCash()
{
	return cash;
}

mine::string Account::GetName()
{
	return name;
}

void Account::deposit(const double money)
{
	if ( money < 0 )
	{
		throw DepositException(money);
	}
	this->cash += money;
}

void Account::withdraw(const double money)
{
	if ( money < 0 )
	{
		throw WithdrawException(money);
	}
	if ( cash < money )
	{
		throw WithdrawException(money);
	}
	this->cash -= money;
}

void Account::printall() const
{
	cout << endl << "계좌ID: " << accountNumber << endl;
	cout << "이름: " << name << endl;
	cout << "입금액: " << cash << endl;
}
void Account::ShowException()
{
	cout << endl << "계좌ID가 없습니다." << endl << endl;
}
Account::Account()
	:accountNumber(0), cash(0)
{
	name = "0";
}

Account::Account(Account* ac)
	:accountNumber(ac->accountNumber), cash(ac->cash)
{
	name = ac->name;
}

Account::Account(const int account, mine::string n, const double money)
	:accountNumber(account), cash(money)
{
	name = n;
}

Account::~Account()
{
	//delete name;
}