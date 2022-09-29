#include <stdio.h>

int main()
{
	Question1();
	Question2();
	Question3();
	Question4();
	return 0;
}

int Question1()
{
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;

	for ( int i = 0; i < 5; i++ )
	{
		*ptr += 2;
		ptr++;
	}

	for ( int i = 0; i < 5; i++ )
	{
		printf("%d ", arr[i]);
	}

	printf("\n");

	return 0;
}

int Question2()
{
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;

	for ( int i = 0; i < 5; i++ )
	{
		*(ptr + i) += 2;
	}

	for ( int i = 0; i < 5; i++ )
	{
		printf("%d ", arr[i]);
	}

	printf("\n");

	return 0;
}

int Question3()
{
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = &arr[4];
	int sum = 0;
	int temp = 0;

	for ( int i = 0; i < 5; i++ )
	{
		temp = *ptr;
		sum += temp;
		ptr--;
	}

	
	printf("гу: %d\n", sum);

	return 0;
}

int Question4()
{
	int arr[6] = { 1,2,3,4,5,6 };
	int* front = arr;
	int* back = &arr[sizeof(arr) / sizeof(int) - 1];
	int temp = 0;

	for ( int i = 0; i < sizeof(arr) / sizeof(int) / 2; i++ )
	{
		temp = *(front + i);
		*(front + i) = *back;
		*back = temp;
		back--;
		
	}
	
	for ( int i = 0; i < 6; i++ )
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}