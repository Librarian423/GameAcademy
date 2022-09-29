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
	cout << endl << "[���°���]" << endl;
	cout << "����ID: ";
	cin >> ptr->accountNumber;
	cout << "�̸�: ";
	cin >> ptr->name;
	cout << "�Աݾ�: ";
	cin >> ptr->cash;
	cout << endl;

}

void deposit(Account* ptr, int money)
{

	ptr->cash += money;
	cout << "�ԱݿϷ�" << endl << endl;
}

void withdraw(Account* ptr, int money)
{
	if ( ptr->cash < money )
	{
		cout << "�ܾ� ����" << endl << endl;
		return;
	}
	else
	{
		ptr->cash -= money;
		cout << "��ݿϷ�" << endl << endl;
	}
}

void printall(const Account* ptr, const int p)
{
	if ( p == 0 )
	{
		cout << "���� ����" << endl;
		return;
	}
	for ( int i = 0; i < p; i++ )
	{
		cout << endl << "����ID: " << ptr[i].accountNumber << endl;
		cout << "�̸�: " << ptr[i].name << endl;
		cout << "�ܾ�: " << ptr[i].cash << endl;
		cout << endl;
	}

}
