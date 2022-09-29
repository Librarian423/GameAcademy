#include <iostream>
#include "func.h"

using namespace std;
int main()
{
	int i = 0;
	int num;
	int run = 1;
	int index = -1;
	int temp;
	int money = 0;
	Account arr[100];

	while ( run == 1 )
	{
		cout << "-----MENU-----" << endl;
		cout << "1. 계좌개설" << endl << "2. 입금" << endl << "3.출금" << endl << "4.계좌정보 전체 출력" << endl << "5.프로그램 종료" << endl;
		cout<<"선택: ";

		cin >> num;

		switch ( num )
		{
		case 1:
			if ( i > 99 )
			{
				run = 0;
				break;
			}
			CreateAccount(&arr[i]);
			i++;
			break;

		case 2:
			cout << endl << "[입   금]" << endl;
			cout << "계좌ID: ";
			cin >> temp;

			index = search(arr, temp, i);

			if ( index == -1 )
			{
				cout << endl << "계좌ID가 없습니다." << endl;
				break;
			}
			else
			{
				cout << "입금액: ";
				cin >> money;

				deposit(&arr[index], money);
			}
			break;

		case 3:
			cout << endl << "[출   금]" << endl;
			cout << "계좌ID: ";
			cin >> temp;

			index = search(arr, temp, i);

			if ( index == -1 )
			{
				cout << endl << "계좌ID가 없습니다." << endl;
				break;
			}
			else
			{
				cout << "출금액: ";
				cin >> money;
				withdraw(&arr[index], money);
			}
			break;

		case 4:
			printall(arr, i);
			break;

		case 5:
			run = 0;
			cout << endl << "[ 프로그램 종료 ]" << endl;
			break;

		default:
			cout << endl << "Wrong input" << endl;
			break;
		}
	}

	return 0;
}