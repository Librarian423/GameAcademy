#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	int num1;
	int num2;
	int result;
	printf("정수 one: ");
	scanf_s("%d", &num1);
	printf("정수 two: ");
	scanf_s("%d", &num2);

	result = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, result);
	Question1();
	printf("\n\n");
	Question2();
	return 0;
}

int Question1() {
	printf("유수현\n유 수 현\n유  수  현\n");
	printf("유수현\n");
	printf("서울 성동구 자동차시장3길\n");
	printf("010-5806-8055");
	return 0;
}

int Question2() {
	printf("제 이름은 유수현입니다.\n");
	printf("제 나이는 %d살이고요\n", 24);
	printf("제가 사는 곳의 번지수는 %d-%d입니다.\n", 238, 5);
	printf("%dx%d=%d\n",4,5,4*5);
	printf("%dx%d=%d\n",7,9,7*9);
	return 0;
}