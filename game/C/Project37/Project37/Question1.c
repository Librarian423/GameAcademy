#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void Question1()
{
	Library arr[3];

	printf("���� ���� �Է�\n");
	for ( int i = 0; i < 3; i++ )
	{
		printf("����: ");
		gets_s(arr[i].author, sizeof(arr[i].author));
		
		printf("����: ");
		gets_s(arr[i].bookName, sizeof(arr[i].bookName));

		printf("������ ��: ");
		scanf_s("%d", &arr[i].page);
		clearLineBuffer();
	}
	printf("\n");

	printf("���� ���� ���\n");
	for ( int i = 0; i < 3; i++ )
	{
		printf("����: %s\n", arr[i].author);
		printf("����: %s\n", arr[i].bookName);
		printf("������ ��: %d\n", arr[i].page);
	}
}