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

	printf("�� ����� x, y ��ǥ: ");
	scanf_s("%d %d", &x1, &y1);

	printf("�� �ϴ��� x, y ��ǥ: ");
	scanf_s("%d %d", &x2, &y2);

	width = x1 - x2;
	length = y1 - y2;

	printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�.\n", width * length);

	return 0;
}

int Question2() {
	double num1, num2;

	printf("double�� �� �Է�: ");
	scanf_s("%lf %lf", &num1, &num2);

	printf("+: %lf\n-: %lf\n*: %lf\n/: %lf\n", num1 + num2, num1 - num2, num1 * num2, num1 / num2);

	return 0;
}

int Question4() {
	int ASCII;

	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &ASCII);
	printf("ASCII ��ȯ: %c\n", ASCII);
	return 0;
}

int Question5() {
	char ASCII2;

	printf("���ڸ� �Է��ϼ���: ");
	scanf_s(" %c", &ASCII2, (int)sizeof(ASCII2));
	printf("ASCII ��ȯ: %d\n", ASCII2);
	return 0;
}