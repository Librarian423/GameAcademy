#pragma once
#include <iostream>
#include "header.h"
#include "AccountHandler.h"
#include "Exception.h"

using namespace std;

void AccountHandler::CreateAccount(const int id, mine::string name, const double cash)
{
	if ( aNum > MAX || search(id) != -1 )
	{
		throw SearchException(id);
	}
	else
	{
		Account ac(id, name, cash);
		accountList[aNum++] = new Account(ac);
	}
}

void AccountHandler::CreateAccount(Account* ac)
{
	accountList[aNum++] = ac;

}

bool AccountHandler::CheckDuplicate(const int acNum)
{
	for ( int i = 0; i < aNum; i++ )
	{
		if ( accountList[i]->GetAccountNumber() == acNum )
		{
			return true;
		}
	}
	return false;
}

void AccountHandler::deposit(const int id, const double money)// throw(DepositException)
{
	int i = search(id);
	if ( i != -1 )
	{
		accountList[i]->deposit(money);

	}
	else
	{
		throw DepositException(money);
	}
	
}
void AccountHandler::withdraw(const int id, const double money)// throw(WithdrawException)
{
	int i = search(id);
	if ( i != -1 )
	{
		accountList[i]->withdraw(money);
	}
	else
	{
		throw WithdrawException(money);
	}
}
void AccountHandler::printall()const
{
	if ( aNum == 0 )
	{
		cout << "정보 없음" << endl;
		return;
	}
	for ( int i = 0; i < aNum; i++ )
	{
		accountList[i]->printall();
		cout << endl;
	}
}

int AccountHandler::search(const int id)
{
	for ( int i = 0; i < aNum; i++ )
	{
		if ( accountList[i]->GetAccountNumber() == id )
		{
			return i;
		}
	}
	return -1;
}

AccountHandler::AccountHandler()
	:aNum(0), accountList(MAX) { }



AccountHandler::~AccountHandler()
{
	for ( int i = 0; i < aNum; i++ )
	{
		delete accountList[i];
	}
}