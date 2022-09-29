#include <stdio.h>
#include <stdlib.h>

void MaxAndMin(const int* ptr, const int len, int** max, int** min);

int main()
{
	int* maxPtr = NULL;
	int* minPtr = NULL;
	int arr[5];
	int len = sizeof(arr) / sizeof(int);

	for ( int i = 0; i < len; i++ )
	{
		printf("%d: ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	MaxAndMin(arr, len, &maxPtr, &minPtr);
	printf("Max: %d\nMin: %d\n", *maxPtr, *minPtr);

	return 0;
}

void MaxAndMin(const int* ptr, const int len, int** max, int** min)
{
	*max = &ptr[0];
	*min = &ptr[0];

	for ( int i = 1; i < len; i++ )
	{
		if ( ptr[i] > **max )
		{
			*max = &ptr[i];
		}
		if ( ptr[i] < **min )
		{
			*min = &ptr[i];	
		}
	}
}