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

	printf("정수를 5번 입력\n");
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

	printf("입력된 정수 중에서 최대값: %d\n", max);
	printf("입력된 정수 중에서 최소값: %d\n", min);
	printf("입력된 정수의 총 합: %d\n", sum);

	return 0;
}

int Question2() {
	char arr[] = "Good time";

	printf("%s\n", arr);

	//scanf_s("%s", arr, (unsigned int)sizeof(arr));
	//printf("%s", arr);

	return 0;
}