#pragma once
#include <iostream>
#include <cstring>
#include "MyString.h"

#define MAX 1024

class Account
{
public:
	Account();
	Account(Account* ac);
	Account(const int account, mine::string name, const double cash);
	~Account();
	
	int GetAccountNumber()const;
	double GetCash();
	mine::string GetName();
	virtual void deposit(const double money);
	virtual void withdraw(const double money);
	virtual void printall() const;
	void ShowException();
	Account& operator=(const Account& ref)
	{
		//name = new char[strlen(ref.name) + 1];

		if ( !(name == nullptr) )
		{
			name = ref.name;
			//strcpy_s(name, strlen(ref.name) + 1, ref.name);
		}
		
		accountNumber = ref.accountNumber;
		cash = ref.cash;

		return *this;
	}
	

private:
	int accountNumber;
	mine::string name;
	double cash;

};
