#include <stdio.h>

int Bignum(int num1, int num2, int num3) {
	
	if (num1 >= num2 && num1 >= num3)
	{
		return num1;
	}
	else if (num2 >= num1 && num2 >= num3)
	{
		return num2;
	}
	else
	{
		return num3;
	}
}

int Smallnum(int num1, int num2, int num3) {

	if (num1 <= num2 && num1 <= num3)
	{
		return num1;
	}
	else if (num2 <= num1 && num2 <= num3)
	{
		return num2;
	}
	else
	{
		return num3;
	}
}

double CelToFah(double cel) {
	
	return 1.8 * cel + 32;
}

double FahToCel(double fah) {
	
	return (fah - 32) / 1.8;
}

void Fibonacchi(int fibo) {
	int num;
	int num1 = 0;
	int num2 = 1;

	if (fibo < 1)
	{
		printf("0�� �Է¹���\n");
		return;
	}
	else if (fibo == 1)
	{
		printf("0\n");
		return;
	}
	else
	{
		printf("0 1 ");
		for (int i = 2; i < fibo; i++)
		{

			num = num1 + num2;
			printf("%d ", num);
			num1 = num2;
			num2 = num;
		}
		printf("\n");
		return;
	}
}

int main() {

	//���� 1
	int num1, num2, num3;
	int big, small;
	scanf_s("%d %d %d", &num1, &num2, &num3);

	big = Bignum(num1, num2, num3);
	small = Smallnum(num1, num2, num3);

	printf("ū �� %d\n", big);
	printf("���� �� %d\n", small);

	//���� 2

	double cel, fah;
	double celTofah, fahTocel;
	printf("���� �µ��� �Է�: ");
	scanf_s("%lf", &cel);
	printf("ȭ�� �µ��� �Է�: ");
	scanf_s("%lf", &fah);

	celTofah = CelToFah(cel);
	fahTocel = FahToCel(fah);
	printf("����: %.2f -> ȭ��: %.2f\n", cel, celTofah);
	printf("ȭ��: %.2f -> ����: %.2f\n", fah, fahTocel);
	

	//���� 3
	int fibo;
	printf("�Ǻ���ġ ���� ���� �Է�: ");
	scanf_s("%d", &fibo);

	Fibonacchi(fibo);

	return 0;
}