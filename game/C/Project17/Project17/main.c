#include <stdio.h>

int main() {
	Question1();
	Question2();

	return 0;
}

int Question1() {
	int arr[5];
	int sum = 0;
	int max;
	int temp;
	int min;

	printf("������ 5�� �Է�\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d: ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	temp = arr[0];
	for (int i = 1; i < 5; i++)
	{
		if (temp < arr[i])
		{
			temp = arr[i];
			max = temp;

		}
	}

	temp = arr[0];
	for (int i = 0; i < 5; i++)
	{
		if (temp >= arr[i])
		{
			temp = arr[i];
			min = temp;

		}
	}

	for (int i = 0; i < 5; i++)
	{
		sum += arr[i];
	}

	printf("�Էµ� ���� �߿��� �ִ밪: %d\n", max);
	printf("�Էµ� ���� �߿��� �ּҰ�: %d\n", min);
	printf("�Էµ� ������ �� ��: %d\n", sum);

	return 0;
}

int Question2() {
	char arr[] = "Good time";

	printf("%s\n", arr);

	//scanf_s("%s", arr, (unsigned int)sizeof(arr));
	//printf("%s", arr);

	return 0;
}