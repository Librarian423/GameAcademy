#include <iostream>

using namespace std;

void increase(int& num)
{
	num++;
}

void reverse(int& num)
{
	num = -num;
}

void SwapPointer(int* (&pref1), int* (&pref2))
{
	int temp = *pref1;
	*pref1 = *pref2;
	*pref2 = temp;
}

int main()
{
	int num = 1;

	increase(num);
	cout << num << endl;
	
	reverse(num);
	cout << num << endl;

	int num1 = 5;
	int* ptr1 = &num1;
	int num2 = 10;
	int* ptr2 = &num2;

	SwapPointer(ptr1, ptr2);
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	return 0;
}