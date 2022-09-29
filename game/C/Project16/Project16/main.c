#include <stdio.h>

void Question1() {
	int num;
	printf("16진수 변환\n");
	scanf_s("%d", &num);
	printf("%x\n", num);

	return;
}

void Question2() {
	int num1, num2;

	printf("단을 입력하세요: ");
	scanf_s("%d %d", &num1, &num2);

	if (num1 > num2)
	{
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}

	for (int i = num1; i <= num2; i++)
	{
		for (int  j = 1; j <= 9; j++)
		{
			printf("%d X %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
	return;
}

void Question3() {
	int num1, num2;
	int gcm = 0;

	printf("두 개의 정수 입력: ");
	scanf_s(" %d %d", &num1, &num2);

	while (num2 != 0)
	{
		gcm = num1 % num2;
		num1 = num2;
		num2 = gcm;
	}
	printf("두 수의 최대공약수: %d\n", num1);

	return;
}

int Question4() {
	int money = 3500;
	int cream = 500, chip = 700, cola = 400;

	for (int i = 1; i < money/cream; i++)
	{
		for (int j = 1; j < money/chip; j++)
		{
			for (int k = 1; k < money/cola; k++)
			{
				if ((cream*i)+(chip*j)+(cola*k) == money)
				{
					printf("%d %d %d\n", i, j, k);
				}
				
			}
		}
	}

	return 0;

}

void Question5() {
	int pNum = 0;
	int count = 0;
	int num;

	printf("소수의 개수 입력: ");
	scanf_s("%d", &num);

	for (int i = 2; count < num; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				pNum = 1;
				break;
			}
		}
		if (pNum != 1)
		{
			printf("%d ", i);
			count++;
			
		}
		pNum = 0;
	}
	printf("\n");
	return;
}

void Qusetion6() {
	int num;
	int hour, min, sec;

	printf("초(second)입력: ");
	scanf_s("%d", &num);

	hour = num / 3600;
	min = (num - (hour * 3600)) / 60;
	sec = num - ((hour * 3600) + (min * 60));
	
	printf("[h:%d, m:%d, s:%d]\n", hour, min, sec);

	return;
}

void Question7() {
	int num;
	int max = 1;
	int count = 0;

	printf("상수 n 입력: ");
	scanf_s("%d", &num);

	while (max <= num)
	{
		max *= 2;
		count++;
	}

	printf("공식을 만족하는 k의 최대값은 %d\n", count-1);

	return;
}

int Question8(int num1) {
	
	if (num1 <= 0)
	{
		return;
	}
	return 2 * Question8(num1 - 1);
}

int Question9(int num) {
	if (num == 1)
	{
		return 0;
	}
	else if (num == 2)
	{
		return 1;
	}
	else
	{
		return Question9(num-1) + Question9(num-2 );
	}
}

int main() {

	Question1();
	Question2();
	Question3();
	Question4();
	Question5();
	Qusetion6();
	Question7();
	
	int input;
	printf("정수 입력: ");
	scanf_s("%d", &input);
	printf("2의 %d 승은 %d\n", input, Question8(input));
	
	printf("피보나치 개수 입력: ");
	scanf_s("%d", &input);
	for (int i = 1; i <= input; i++)
	{
		printf("%d ", Question9(i));
	}
	printf("\n");

	return 0;
}

