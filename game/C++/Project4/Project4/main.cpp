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
		cout << "1. ���°���" << endl << "2. �Ա�" << endl << "3.���" << endl << "4.�������� ��ü ���" << endl << "5.���α׷� ����" << endl;
		cout<<"����: ";

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
			cout << endl << "[��   ��]" << endl;
			cout << "����ID: ";
			cin >> temp;

			index = search(arr, temp, i);

			if ( index == -1 )
			{
				cout << endl << "����ID�� �����ϴ�." << endl;
				break;
			}
			else
			{
				cout << "�Աݾ�: ";
				cin >> money;

				deposit(&arr[index], money);
			}
			break;

		case 3:
			cout << endl << "[��   ��]" << endl;
			cout << "����ID: ";
			cin >> temp;

			index = search(arr, temp, i);

			if ( index == -1 )
			{
				cout << endl << "����ID�� �����ϴ�." << endl;
				break;
			}
			else
			{
				cout << "��ݾ�: ";
				cin >> money;
				withdraw(&arr[index], money);
			}
			break;

		case 4:
			printall(arr, i);
			break;

		case 5:
			run = 0;
			cout << endl << "[ ���α׷� ���� ]" << endl;
			break;

		default:
			cout << endl << "Wrong input" << endl;
			break;
		}
	}

	return 0;
}