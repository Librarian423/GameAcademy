#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	int num1;
	int num2;
	int result;
	printf("���� one: ");
	scanf_s("%d", &num1);
	printf("���� two: ");
	scanf_s("%d", &num2);

	result = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, result);
	Question1();
	printf("\n\n");
	Question2();
	return 0;
}

int Question1() {
	printf("������\n�� �� ��\n��  ��  ��\n");
	printf("������\n");
	printf("���� ������ �ڵ�������3��\n");
	printf("010-5806-8055");
	return 0;
}

int Question2() {
	printf("�� �̸��� �������Դϴ�.\n");
	printf("�� ���̴� %d���̰��\n", 24);
	printf("���� ��� ���� �������� %d-%d�Դϴ�.\n", 238, 5);
	printf("%dx%d=%d\n",4,5,4*5);
	printf("%dx%d=%d\n",7,9,7*9);
	return 0;
}