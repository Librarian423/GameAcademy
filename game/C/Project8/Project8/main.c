#include <stdio.h>

int main() {
	
	printf("���� 1-1\n");
	Question1_1();
	
	printf("���� 1-2\n");
	Question1_2();
	
	printf("���� 2\n");
	Question2();

	printf("���� 3\n");
	Question3();
	
	return 0;
}

int Question1_1() {
	int num = 1;
	int total = 0;

	while (num != 0)
	{
		num = 0;
		printf("���� �Է�(0 to quit): ");
		scanf_s("%d", &num);
		total += num;
	}

	printf("�հ�: %d \n\n", total);

	return 0;
}

int Question1_2() {
	int num;
	int total = 0;

	printf("���� �Է�(0 to quit): ");
	scanf_s("%d", &num);
	while (num != 0)
	{
		printf("���� �Է�(0 to quit): ");
		total += num;
		scanf_s("%d", &num);

	}

	printf("�հ�: %d \n\n", total);

	return 0;
}

int Question2() {
	int num = 0;
	int sum = 0;
	do
	{
		sum += num;
		num += 2;
	} while (num < 101);

	printf("0 �̻� 100 ���� ¦�� ���� = %d\n\n", sum);
	
	return 0;
}

int Question3() {
	int cur = 2;
	int is = 0;

	do
	{
		is = 1;

		do 
		{
			printf("%d��%d��%d \n", cur, is, cur * is);
			is++;
		} while (is < 10);

		cur++;
		printf("\n");
	} while (cur < 10);
	
	return 0;
}