#include <stdlib.h>
#include <iostream>

using namespace std;

void Question0()
{
	int num1;
	int num2;

	cout << "1�� ����: ";
	cin >> num1;
	cout << "2�� ����: ";
	cin >> num2;

	for ( int i = num1; i <= num2; i++ )
	{
		for ( int j = 1; j < 10; j++ )
		{
			cout << i << " X " << j << " = " << i * j << endl;
		}
		cout << endl;
	}
}

void Question1()
{
	int num;
	int sum = 0;

	for ( int i = 0; i < 5; i++ )
	{
		cout << i + 1 << "��° ���� �Է�: ";
		cin >> num;
		sum += num;
	}
	cout << "�հ�: " << sum << endl;
}

void Question2()
{
	char name[100];
	char phone[100];

	cout << "����� �̸�: ";
	cin >> name;
	cout << "����� ��ȭ��ȣ: ";
	cin >> phone;


	cout << "����� �̸�: " << name << endl;
	cout << "����� ��ȭ��ȣ: " << phone << endl;
}

void Question3()
{
	int num;
	

	cout << "�� �Է�: ";
	cin >> num;
	

	for ( int i = 1; i < 10; i++ )
	{
		cout << num << " X " << i << " = " << num * i << endl;
	}
}

void Question4()
{
	double sale = 0;
	const double extra = 0.12;

	while ( 1 )
	{
		cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		cin >> sale;
		if ( sale == -1 )
		{
			cout << "���α׷��� �����մϴ�." << endl;
			break;
		}
		cout << "�̹� �� �޿�: " << 50 + (sale * extra) <<"����" << endl;
	}
}

int main()
{
	Question0();
	Question1();
	Question2();
	Question3();
	Question4();

	return 0;
}