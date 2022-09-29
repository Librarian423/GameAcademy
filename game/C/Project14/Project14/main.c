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
		printf("0을 입력받음\n");
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

	//문제 1
	int num1, num2, num3;
	int big, small;
	scanf_s("%d %d %d", &num1, &num2, &num3);

	big = Bignum(num1, num2, num3);
	small = Smallnum(num1, num2, num3);

	printf("큰 수 %d\n", big);
	printf("작은 수 %d\n", small);

	//문제 2

	double cel, fah;
	double celTofah, fahTocel;
	printf("섭씨 온도를 입력: ");
	scanf_s("%lf", &cel);
	printf("화씨 온도를 입력: ");
	scanf_s("%lf", &fah);

	celTofah = CelToFah(cel);
	fahTocel = FahToCel(fah);
	printf("섭씨: %.2f -> 화씨: %.2f\n", cel, celTofah);
	printf("화씨: %.2f -> 섭씨: %.2f\n", fah, fahTocel);
	

	//문제 3
	int fibo;
	printf("피보나치 수열 개수 입력: ");
	scanf_s("%d", &fibo);

	Fibonacchi(fibo);

	return 0;
}