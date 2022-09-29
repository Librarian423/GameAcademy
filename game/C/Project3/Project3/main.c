#include <stdio.h>

int main() {
	int num1, num2, num3;
	
	printf("수를 입력하세요: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	Question1(num1, num2);
	printf("\n");

	Question2(num1, num2, num3);
	printf("\n");

	Question3(num1);
	printf("\n");

	Question4(num1, num2);
	printf("\n");

	Question5(num1, num2, num3);
	printf("\n");

	return 0;
}

int Question1(int num1, int num2) {
	printf("\n문제 1번\n");
	int mul, minus;

	mul = num1 * num2;
	minus = num1 - num2;

	printf("뺄셈 = %d\n곱셈 = %d\n", minus, mul );
	return 0;
}

int Question2(int num1, int num2, int num3) {
	printf("문제 2번\n");
	int result;

	result = num1 * num2 + num3;

	printf("%dx%d+%d=%d\n", num1, num2, num3, result);
	return 0;
}

int Question3(int num) {
	printf("문제 3번\n");
	printf("%d\n", num * num);
}

int Question4(int num1, int num2) {
	printf("문제 4번\n");
	int div, res;

	div = num1 / num2;
	res = num1 % num2;

	printf("몫 = %d\n", div);
	printf("나머지 = %d\n", res);
	return 0;
}

int Question5(int num1, int num2, int num3) {
	printf("문제 5번\n");
	int result;

	result = (num1 - num2) * (num2 + num3) * (num3 % num1);
	
	printf("(num1 - num2) * (num2 + num3) * (num3 %% num1) = %d\n", result);
	return 0;
}