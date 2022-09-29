#pragma once

#include "header.h"

using namespace std;

class Exception
{
public:
	virtual void ExceptionThrow() = 0;
private:

};

class SearchException :public Exception
{
public:
	SearchException(int id)
		:id(id)	{}

	virtual void ExceptionThrow()
	{
		cout << endl << "계좌ID가 없습니다." << endl << endl;
	}
private:
	int id;
};

class DepositException :public Exception
{
public:
	DepositException(double money)
		:reqDep(money) { }

	virtual void ExceptionThrow()
	{
		cout << "입금 불가" << endl << endl;
	}
private:
	double reqDep;
};

class WithdrawException :public Exception
{
public:
	WithdrawException(double money)
		:cash(money) {}

	virtual void ExceptionThrow()
	{
		cout << "금액 초과" << endl << endl;
	}
private:
	double cash;
};
