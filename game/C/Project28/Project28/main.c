#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Question1()
{
	char arr[50];
	int num = 0;
	int len;
	int sum = 0;
	
	printf("문자열 입력: ");
	fgets(arr, sizeof(arr), stdin);
	len = strlen(arr);

	for ( int i = 0; i < len; i++ )
	{
		num = arr[i] - '0';
		if ( num >= 0 && num <= 9 )
		{
			sum += num;
		}
	}

	printf("sum = %d\n", sum);
}

void Question2()
{
	char str1[20];
	char str2[20];
	char str3[40];
	int len;
	
	printf("str1: ");
	fgets(str1, sizeof(str1), stdin);
	len = strlen(str1);
	
	printf("str2: ");
	fgets(str2, sizeof(str1), stdin);
	
	strncpy_s(str3, sizeof(str3), str1, len - 1);
	strcat_s(str3, sizeof(str3), str2);
	
	printf("%s", str3);
}

void Question3()
{
	char input1[50];
	char input2[50];
	char name1[10] = { 0 };
	char name2[10] = { 0 };
	char age1[10] = { 0 };
	char age2[10] = { 0 };
	int len1;
	int len2;

	printf("1번 이름과 나이\n");
	fgets(input1, sizeof(input1), stdin);
	len1 = strlen(input1);

	printf("2번 이름과 나이\n");
	fgets(input2, sizeof(input2), stdin);
	len2 = strlen(input2);
	
	//1번 사람
	for ( int i = 0; i < len1; i++ )
	{
		if ( input1[i] == ' ' )
		{
			strncpy_s(name1, sizeof(name1), input1, len1 - i);
			strncpy_s(age1, sizeof(age1), input1 + i + 1, len1);
			break;
		}

	}
	printf("%s: ", name1);
	printf("%d\n", atoi(age1));

	//2번 사람
	for ( int i = 0; i < len2; i++ )
	{
		if ( input2[i] == ' ' )
		{
			strncpy_s(name2, sizeof(name2), input2, len2 - i);
			strncpy_s(age2, sizeof(age2), input2 + i + 1, len2);
			break;
		}
	}
	printf("%s: ", name2);
	printf("%d\n", atoi(age2));

	if ( strcmp(name1, name2) == 0 && atoi(age1) == atoi(age2) )
	{
		printf("같은 사람\n");
	}
	else
	{
		printf("다른 사람\n");
	}
}

int main()
{
	//문제 1번
	Question1();
	

	//문제 2번
	Question2();
	

	//문제 3번
	Question3();

	return 0;
}