#include <iostream>
#include "header.h"
#include "AccountHandler.h"
#include "NormalAccount.h"
#include "HighCreditAccount.h"
#include "MyString.h"
#include "Exception.h"
using namespace std;

int main()
{
	int i = 0;
	int num;
	bool run = true;
	
	int id;
	mine::string name;
	int cash;
	int rate;
	int grade;
	AccountHandler ach;

	while ( run )
	{
		cout << "-----MENU-----" << endl;
		cout << "1. ���°���" << endl << "2. �Ա�" << endl << "3.���" << endl << "4.�������� ��ü ���" << endl << "5.���α׷� ����" << endl;
		cout << "����: ";

		cin >> num;

		switch ( num )
		{
		case 1:
			cout << endl << "[������������]" << endl;
			if ( i > MAX )
			{
				run = false;
				break;
			}
			cout << "1. ���뿹�ݰ���" << endl;
			cout << "2. �ſ�ŷڰ���" << endl;
			cout << "����: ";
			cin >> num;
			switch ( num )
			{
			case 1:
				cout << endl << "[ ���뿹�ݰ��� ����]" << endl;
				cout << "����ID: ";
				cin >> id;
				try
				{
					if ( ach.search(id) != -1 )
					{
						//cout << endl << "�ߺ��� ����ID" << endl << endl;
						break;
						
					}
					else
					{
						cout << "�̸�: ";
						cin >> name;
						cout << "�Աݾ�: ";
						cin >> cash;
						cout << "������: ";
						cin >> rate;
						cout << endl;
						NormalAccount* normalaccount = new NormalAccount(id, name, cash, rate);

						ach.CreateAccount(normalaccount);
						i++;
					}
				}
				catch ( Exception& expn )
				{
					expn.ExceptionThrow();
				}
				
				break;
			case 2:
				cout << endl << "[ �ſ�ŷڰ��� ����]" << endl;
				cout << "����ID: ";
				cin >> id;
				if ( ach.search(id) != -1 )
				{
					cout << endl << "�ߺ��� ����ID" << endl << endl;
					break;
				}
				else
				{
					cout << "�̸�: ";
					cin >> name;
					cout << "�Աݾ�: ";
					cin >> cash;
					cout << "������: ";
					cin >> rate;
					cout << "�ſ���(1toA, 2toB, 3toC): ";
					cin >> grade;
					if ( grade < 1 || grade > 3 )
					{
						cout << "�߸��� �Է�" << endl;
						break;
					}
					cout << endl;
					HighCreditAccount* highaccount = new HighCreditAccount(id, name, cash, rate, grade);
					ach.CreateAccount(highaccount);
					i++;
				}
				break;
			default:
				cout << endl << "Wrong input" << endl;
				break;
			}
			break;

		case 2:
			cout << endl << "[��   ��]" << endl;
			cout << "����ID: ";
			cin >> id;
			try
			{
				if ( ach.search(id) == -1 )
				{
					//cout << endl << "����ID�� �����ϴ�." << endl << endl;
					break;
				}
				else
				{
					cout << "�Աݾ�: ";
					cin >> cash;
					ach.deposit(id, cash);
				}
			}
			catch ( Exception& expn )
			{
				expn.ExceptionThrow();
			}
			
			break;

		case 3:
			cout << endl << "[��   ��]" << endl;
			cout << "����ID: ";
			cin >> id;
			try
			{
				if ( ach.search(id) == -1 )
				{
					//cout << endl << "����ID�� �����ϴ�." << endl << endl;
					break;
				}
				else
				{
					cout << "��ݾ�: ";
					cin >> cash;
					ach.withdraw(id, cash);
				}
			}
			catch ( Exception& expn )
			{
				expn.ExceptionThrow();
			}
			
			break;

		case 4:
			
			ach.printall();
			break;

		case 5:
			run = false;
			cout << endl << "[ ���α׷� ���� ]" << endl;
			break;

		default:
			cout << endl << "Wrong input" << endl;
			break;
		}
	}
	return 0;
}