#include <stdio.h>

int main() {
	srand(time(NULL));
	int arr[45];
	int temp;
	int sour, dest;

	for ( int i = 0; i < 45; i++ )
	{
		arr[i] = i + 1;
	}
	
	for ( int i = 0; i < 100; i++ )
	{
		sour = rand() % 45;
		dest = rand() % 45;
		
		temp = arr[sour];
		arr[sour] = arr[dest];
		arr[dest] = temp;
	}

	printf("나의 인생을 바꿀 행운의 번호 \n: ");
	for ( int i = 0; i < 6; i++ )
	{
		printf("%d ", arr[i]);
	}

	return 0;
}