#include <iostream>
#include "func.h"

using namespace std;

int search(Account* ptr, int temp, const int input)
{
	for ( int i = 0; i < input; i++ )
	{
		if ( ptr[i].accountNumber == temp )
		{
			return i;
		}
	}
	return -1;

}

void CreateAccount(Account* ptr)
{
	cout << endl << "[계좌개설]" << endl;
	cout << "계좌ID: ";
	cin >> ptr->accountNumber;
	cout << "이름: ";
	cin >> ptr->name;
	cout << "입금액: ";
	cin >> ptr->cash;
	cout << endl;

}

void deposit(Account* ptr, int money)
{

	ptr->cash += money;
	cout << "입금완료" << endl << endl;
}

void withdraw(Account* ptr, int money)
{
	if ( ptr->cash < money )
	{
		cout << "잔액 부족" << endl << endl;
		return;
	}
	else
	{
		ptr->cash -= money;
		cout << "출금완료" << endl << endl;
	}
}

void printall(const Account* ptr, const int p)
{
	if ( p == 0 )
	{
		cout << "정보 없음" << endl;
		return;
	}
	for ( int i = 0; i < p; i++ )
	{
		cout << endl << "계좌ID: " << ptr[i].accountNumber << endl;
		cout << "이름: " << ptr[i].name << endl;
		cout << "잔액: " << ptr[i].cash << endl;
		cout << endl;
	}

}
