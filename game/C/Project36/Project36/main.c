#include <stdio.h>

#define PI				 3.14
#define PLUS(A, B, C)   ((A)+(B)+(C))
#define MUL(A, B, C)	((A)*(B)*(C))

#define AREA(R)			((R)*(R)*PI)

#define MAX(A, B)		(((A)>(B)) ? (A) : (B))

void Question1()
{
	int num1, num2, num3;

	printf("Insert 3 numbers: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	printf("PLUS: %d\n", PLUS(num1, num2, num3));
	printf("MUL: %d\n", MUL(num1, num2, num3));
}

void Question2()
{
	double radius;

	printf("radius: ");
	scanf_s("%lf", &radius);
	
	printf("AREA: %lf\n", AREA(radius));
}

void Question3()
{
	int num1, num2;

	printf("Insert 2 numbers: ");
	scanf_s("%d %d", &num1, &num2);
	printf("MAX: %d\n", MAX(num1, num2));
}

int main()
{
	Question1();
	Question2();
	Question3();
	return 0;
}