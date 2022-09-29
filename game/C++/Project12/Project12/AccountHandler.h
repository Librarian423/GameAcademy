#pragma once
#include "header.h"
#include "BoundCheckPointPtrArray.h"
#include "Exception.h"
using namespace std;



class AccountHandler
{
public:
	void CreateAccount(const int id, mine::string name, const double cash);
	void CreateAccount(Account* ac);
	bool CheckDuplicate(const int acNum);
	virtual void deposit(const int id, const double money);
	void withdraw(const int id, const double money);
	virtual void printall() const;

	int search(const int temp);

	AccountHandler();
	//AccountHandler(int len);
	~AccountHandler();
	
private:
	BoundCheckArray<Account*> accountList;

	int aNum;
	
};

#include "BoundCheckPointPtrArray.cpp"