#include <stdio.h>

int main() {

	printf("문제1번\n");
	Question1();
	printf("문제2번\n");
	Question2();
	printf("문제3번\n");
	Question3();
	printf("문제4번\n");
	Question4();
	printf("문제5번\n");
	Question5();

	return 0;
}

//Hello world 출력
int Question1() {
	int num;
	int limit = 0;

	printf("정수를 입력하세요: ");
	scanf_s("%d", &num);
	while (limit < num)
	{
		printf("Hello world!\n");
		limit++;
	}

	printf("\n\n");

	return 0;
}

//3의 배수 출력
int Question2() {
	int num;
	int limit = 0;

	printf("정수를 입력하세요: ");
	scanf_s("%d", &num);

	while (limit < num)
	{
		printf("%d ", (limit + 1) * 3);
		limit++;
	}

	printf("\n\n");

	return 0;
}

//정수의 합
int Question3() {
	int num;
	int sum = 0;
	
	printf("정수를 계속 입력하세요\n0을 입력하면 종료\n");
	scanf_s("%d", &num);
	while (num != 0)
	{
		sum += num;
		scanf_s("%d", &num);
		
	}
	
	printf("%d\n\n", sum);

	return 0;
}

//구구단 출력
int Question4() {
	int num;
	int limit = 9;

	printf("구구단 출력\n");
	scanf_s("%d", &num);

	while (limit > 0)
	{
		printf("%d\n", limit * num);
		limit--;
	}

	printf("\n\n");

	return 0;
}

//평균 출력
int Question5() {
	int num;
	int limit;
	int count = 0;
	int sum = 0;

	printf("몇 개의 정수를 입력할 것인가요?");
	scanf_s("%d", &limit);
	printf("정수를 입력하세요\n");

	while (count < limit)
	{
		scanf_s("%d", &num);
		sum += num;
		count++;
	}

	printf("%.2f\n", (double)sum / limit);

	return 0;
}