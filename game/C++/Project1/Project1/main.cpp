#include <stdlib.h>
#include <iostream>

using namespace std;

void Question0()
{
	int num1;
	int num2;

	cout << "1번 숫자: ";
	cin >> num1;
	cout << "2번 숫자: ";
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
		cout << i + 1 << "번째 정수 입력: ";
		cin >> num;
		sum += num;
	}
	cout << "합계: " << sum << endl;
}

void Question2()
{
	char name[100];
	char phone[100];

	cout << "사용자 이름: ";
	cin >> name;
	cout << "사용자 전화번호: ";
	cin >> phone;


	cout << "사용자 이름: " << name << endl;
	cout << "사용자 전화번호: " << phone << endl;
}

void Question3()
{
	int num;
	

	cout << "단 입력: ";
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
		cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		cin >> sale;
		if ( sale == -1 )
		{
			cout << "프로그램을 종료합니다." << endl;
			break;
		}
		cout << "이번 달 급여: " << 50 + (sale * extra) <<"만원" << endl;
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