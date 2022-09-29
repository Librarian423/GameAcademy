#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clearLineBuffer()
{
	while ( getchar() != '\n' );
}

void Question1()
{
	int num;

	printf("���ڿ� ���� �Է�: ");
	scanf_s("%d", &num);
	clearLineBuffer();

	char* ptr = (char*)malloc(sizeof(char) * num);
	char* arr = (char*)malloc(sizeof(char) * num);
	int count = 0;
	int cur;

	printf("���ڿ� �Է�: ");
	gets_s(ptr, sizeof(char) * num);

	int len = strlen(ptr);
	cur = len;

	for ( int i = len; i >= 0; i-- )
	{
		if ( ptr[i] == ' ' )
		{
			for ( int j = i + 1; j < cur; j++ )
			{
				arr[count] = ptr[j];
				count++;
			}
			arr[count] = ' ';
			count++;
			cur = i;
		}
		if ( i == 0 )
		{
			for ( int j = 0; j < cur; j++ )
			{
				arr[count] = ptr[j];
				count++;
			}
			arr[count] = '\0';
		}
	}

	printf("Reverse print:\n%s\n", arr);
	free(ptr);
	free(arr);
}

void Question2()
{
	int* ptr = (int*)malloc(sizeof(int) * 5);
	int num;
	int i = 0;
	int size = 5;

	while ( 1 )
	{
		printf("%d: ", i);
		scanf_s("%d", &num);
		if ( num == -1 )
		{
			break;
		}
		if ( i >= size )
		{
			printf("realloc\n");
			size += 3;
			ptr = (int*)realloc(ptr, sizeof(int) * size);
		}
		ptr[i] = num;
		i++;
	}
	for ( int j = 0; j < i; j++ )
	{
		printf("%d: %d\n", j, ptr[j]);
	}

	free(ptr);
}

int main()
{
	Question1();
	Question2();
	
	return 0;
}