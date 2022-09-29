#include <stdio.h>

int SquareByValue(int num)
{
	return num * num;
}

void SquareByReference(int* pnum)
{
	int temp = *pnum;
	*pnum = temp * temp;
	return;
}

void Swap3(int* ptr1, int* ptr2, int* ptr3)
{
	int temp = *ptr1;
	*ptr1 = *ptr3;
	*ptr3 = *ptr2;
	*ptr2 = temp;
	
	return;
}

int main()
{
	int num;

	int num1, num2, num3;

	//문제 1번
	printf("정수를 입력: ");
	scanf_s("%d", &num);
	int square = SquareByValue(num);
	printf("Call by value: %d\n", square);
	SquareByReference(&num);
	printf("Call by reference: %d\n", num);

	//문제 2번
	printf("정수 3개를 입력: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	Swap3(&num1, &num2, &num3);
	printf("num1: %d\nnum2: %d\nnum3: %d\n", num1, num2, num3);
	return 0;
}