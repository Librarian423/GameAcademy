#include <stdio.h>

int main() {
	
	printf("���� 1��\n");
	Question1();

	printf("���� 2��\n");
	Question2();
}

int Question1() {
	int num1, num2;
	int sum = 0;

	printf("�� ���� �Է��ϼ���: ");
	scanf_s("%d %d", &num1, &num2);

	for (int i = num1; i <= num2; i++)
	{
		sum += i;
	}

	printf("�հ� = %d\n\n", sum);

	return 0;
}

int Question2() {
	int num;
	int total = 1;

	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &num);
	
	for (int i = 1; i <= num; i++)
	{
		total = total * i;
	}

	printf("%d! = %d", num, total);

	return 0;
}