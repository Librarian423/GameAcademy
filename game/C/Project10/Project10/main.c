#include <stdio.h>

int main() {
	Question1();
	Question2();
	Question3();
	Question4();

	return 0;
}

int Question1() {
	for (int i = 1; i <= 100; i++)
	{
		if (i % 7 == 0 || i % 9 == 0)
		{
			printf("배수: %d\n", i);
		}
	}

	return 0;
}

int Question2() {
	int num1, num2;
	int result = 0;
	printf("두 수를 입력하세요: ");
	scanf_s("%d %d", &num1, &num2);

	if (num1 > num2)
	{
		result = num1 - num2;
	}

	else if (num1 < num2)
	{
		result = num2 - num1;
	}

	else if (num1 == num2)
	{
		result = num1 - num2;
	}

	printf("결과 값: %d\n", result);
	return 0;
}

int Question3() {
	double kor, eng, math;
	double average = 0;

	printf("국어 성적 입력: ");
	scanf_s("%lf", &kor);
	printf("영어 성적 입력: ");
	scanf_s("%lf", &eng);
	printf("수학 성적 입력: ");
	scanf_s("%lf", &math);

	average = (kor + eng + math) / 3;

	if (average >= 90)
	{
		printf("평균: %.2f\n", average);
		printf("A\n");
	}
	else if (average < 90 && average >= 80)
	{
		printf("평균: %.2f\n", average);
		printf("B\n");
	}
	else if (average < 80 && average >= 70)
	{
		printf("평균: %.2f\n", average);
		printf("C\n");
	}
	else if (average < 70 && average >= 50)
	{
		printf("평균: %.2f\n", average);
		printf("D\n");
	}
	else
	{
		printf("평균: %.2f\n", average);
		printf("F\n");
	}

	return 0;
}

int Question4() {
	int num1, num2;
	int result;
	
	printf("두 수를 입력하세요: ");
	scanf_s("%d %d", &num1, &num2);
	
	result = (num1 >= num2) ? num1 - num2 : num2 - num1;
	
	printf("결과 값: %d\n", result);
	return 0;
}