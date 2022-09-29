#include <stdio.h>

int Question1();
int Question2();
int Question4();
int Question5();


int main() {

	Question1();
	Question2();
	Question4();
	Question5();

	return 0;
}

int Question1() {
	int x1, y1;
	int x2, y2;
	unsigned int width, length;

	printf("좌 상단의 x, y 좌표: ");
	scanf_s("%d %d", &x1, &y1);

	printf("우 하단의 x, y 좌표: ");
	scanf_s("%d %d", &x2, &y2);

	width = x1 - x2;
	length = y1 - y2;

	printf("두 점이 이루는 직사각형의 넓이는 %d입니다.\n", width * length);

	return 0;
}

int Question2() {
	double num1, num2;

	printf("double형 수 입력: ");
	scanf_s("%lf %lf", &num1, &num2);

	printf("+: %lf\n-: %lf\n*: %lf\n/: %lf\n", num1 + num2, num1 - num2, num1 * num2, num1 / num2);

	return 0;
}

int Question4() {
	int ASCII;

	printf("정수를 입력하세요: ");
	scanf_s("%d", &ASCII);
	printf("ASCII 변환: %c\n", ASCII);
	return 0;
}

int Question5() {
	char ASCII2;

	printf("문자를 입력하세요: ");
	scanf_s(" %c", &ASCII2, (int)sizeof(ASCII2));
	printf("ASCII 변환: %d\n", ASCII2);
	return 0;
}