#include <stdio.h>

int main() {

	printf("����1��\n");
	Question1();
	printf("����2��\n");
	Question2();
	printf("����3��\n");
	Question3();
	printf("����4��\n");
	Question4();
	printf("����5��\n");
	Question5();

	return 0;
}

//Hello world ���
int Question1() {
	int num;
	int limit = 0;

	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &num);
	while (limit < num)
	{
		printf("Hello world!\n");
		limit++;
	}

	printf("\n\n");

	return 0;
}

//3�� ��� ���
int Question2() {
	int num;
	int limit = 0;

	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &num);

	while (limit < num)
	{
		printf("%d ", (limit + 1) * 3);
		limit++;
	}

	printf("\n\n");

	return 0;
}

//������ ��
int Question3() {
	int num;
	int sum = 0;
	
	printf("������ ��� �Է��ϼ���\n0�� �Է��ϸ� ����\n");
	scanf_s("%d", &num);
	while (num != 0)
	{
		sum += num;
		scanf_s("%d", &num);
		
	}
	
	printf("%d\n\n", sum);

	return 0;
}

//������ ���
int Question4() {
	int num;
	int limit = 9;

	printf("������ ���\n");
	scanf_s("%d", &num);

	while (limit > 0)
	{
		printf("%d\n", limit * num);
		limit--;
	}

	printf("\n\n");

	return 0;
}

//��� ���
int Question5() {
	int num;
	int limit;
	int count = 0;
	int sum = 0;

	printf("�� ���� ������ �Է��� ���ΰ���?");
	scanf_s("%d", &limit);
	printf("������ �Է��ϼ���\n");

	while (count < limit)
	{
		scanf_s("%d", &num);
		sum += num;
		count++;
	}

	printf("%.2f\n", (double)sum / limit);

	return 0;
}