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
		cout << "1. 계좌개설" << endl << "2. 입금" << endl << "3.출금" << endl << "4.계좌정보 전체 출력" << endl << "5.프로그램 종료" << endl;
		cout << "선택: ";

		cin >> num;

		switch ( num )
		{
		case 1:
			cout << endl << "[계좌종류선택]" << endl;
			if ( i > MAX )
			{
				run = false;
				break;
			}
			cout << "1. 보통예금계좌" << endl;
			cout << "2. 신용신뢰계좌" << endl;
			cout << "선택: ";
			cin >> num;
			switch ( num )
			{
			case 1:
				cout << endl << "[ 보통예금계좌 개설]" << endl;
				cout << "계좌ID: ";
				cin >> id;
				try
				{
					if ( ach.search(id) != -1 )
					{
						//cout << endl << "중복된 계좌ID" << endl << endl;
						break;
						
					}
					else
					{
						cout << "이름: ";
						cin >> name;
						cout << "입금액: ";
						cin >> cash;
						cout << "이자율: ";
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
				cout << endl << "[ 신용신뢰계좌 개설]" << endl;
				cout << "계좌ID: ";
				cin >> id;
				if ( ach.search(id) != -1 )
				{
					cout << endl << "중복된 계좌ID" << endl << endl;
					break;
				}
				else
				{
					cout << "이름: ";
					cin >> name;
					cout << "입금액: ";
					cin >> cash;
					cout << "이자율: ";
					cin >> rate;
					cout << "신용등급(1toA, 2toB, 3toC): ";
					cin >> grade;
					if ( grade < 1 || grade > 3 )
					{
						cout << "잘못된 입력" << endl;
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
			cout << endl << "[입   금]" << endl;
			cout << "계좌ID: ";
			cin >> id;
			try
			{
				if ( ach.search(id) == -1 )
				{
					//cout << endl << "계좌ID가 없습니다." << endl << endl;
					break;
				}
				else
				{
					cout << "입금액: ";
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
			cout << endl << "[출   금]" << endl;
			cout << "계좌ID: ";
			cin >> id;
			try
			{
				if ( ach.search(id) == -1 )
				{
					//cout << endl << "계좌ID가 없습니다." << endl << endl;
					break;
				}
				else
				{
					cout << "출금액: ";
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
			cout << endl << "[ 프로그램 종료 ]" << endl;
			break;

		default:
			cout << endl << "Wrong input" << endl;
			break;
		}
	}
	return 0;
}