#include <stdio.h>

int main() {
	int num1, num2, num3;
	
	printf("���� �Է��ϼ���: ");
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
	printf("\n���� 1��\n");
	int mul, minus;

	mul = num1 * num2;
	minus = num1 - num2;

	printf("���� = %d\n���� = %d\n", minus, mul );
	return 0;
}

int Question2(int num1, int num2, int num3) {
	printf("���� 2��\n");
	int result;

	result = num1 * num2 + num3;

	printf("%dx%d+%d=%d\n", num1, num2, num3, result);
	return 0;
}

int Question3(int num) {
	printf("���� 3��\n");
	printf("%d\n", num * num);
}

int Question4(int num1, int num2) {
	printf("���� 4��\n");
	int div, res;

	div = num1 / num2;
	res = num1 % num2;

	printf("�� = %d\n", div);
	printf("������ = %d\n", res);
	return 0;
}

int Question5(int num1, int num2, int num3) {
	printf("���� 5��\n");
	int result;

	result = (num1 - num2) * (num2 + num3) * (num3 % num1);
	
	printf("(num1 - num2) * (num2 + num3) * (num3 %% num1) = %d\n", result);
	return 0;
}