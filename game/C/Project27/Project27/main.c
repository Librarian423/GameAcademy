#include <stdio.h>
#include <string.h>

void ClearLineFromReadBuffer()
{
	while ( getchar() != '\n' );
}

void check(char *ptr, int len)
{
	for ( int i = 0; i < len; i++ )
	{
		if ( ptr[i] >= 'A' && ptr[i] <= 'Z' )
		{
			ptr[i] += 'a' - 'A';
		}
		else if ( ptr[i] >= 'a' && ptr[i] <= 'z' )
		{
			ptr[i] -= 'a' - 'A';
		}
	}
}

void Question1()
{
	printf("영문 대소문자 입력\n");
	char ch1 = getchar();

	if ( ch1 >= 'A' && ch1 <= 'Z' )
	{
		ch1 += 'a' - 'A';
	}
	else if ( ch1 >= 'a' && ch1 <= 'z' )
	{
		ch1 -= 'a' - 'A';
	}
	else
	{
		printf("틀린 입력\n");
		return 0;
	}
	putchar(ch1);
	printf("\n");
}

void Question2()
{
	char arr[50];
	int len;

	fgets(arr, sizeof(arr), stdin);
	
	len = strlen(arr);
	
	check(arr, len);
	printf("%s", arr);
}

int main()
{
	Question1();
	ClearLineFromReadBuffer();

	Question2();

	return 0;
}