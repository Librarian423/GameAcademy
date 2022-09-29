#include <stdio.h>

int main() {
	Question1();
	Question2();


	return 0;
}

int Question1() {
	printf("1이상의 수를 입력하세요: ");
	int input = 1;
	int count = 0;
	int sum = 0;

	while (count < 5)
	{
		scanf_s("%d", &input);
		while (input < 1 )
		{
			scanf_s("%d", &input);
			
		}
		sum += input;
		count++;

	}

	printf("%d\n\n", sum);
	return 0;
}

int Question2() {
	
	printf("문제 2번 피라미드 출력\n");

	int num;
	int i = 0;
	int count = 0;
	
	scanf_s("%d", &num);

	while (num > 0)
	{
		count = i;
		while (count > 0)
		{
			printf("O");
			count--;

		}
		printf("*\n");
		i++;
		num--;
	}

	return 0;
}