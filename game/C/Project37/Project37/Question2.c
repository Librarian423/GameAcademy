#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void Question2()
{
	Library* ptr[3];

	for ( int i = 0; i < 3; i++ )
	{
		ptr[i] = (Library*)malloc(sizeof(Library));
		
		printf("����: ");
		gets_s(ptr[i]->author, sizeof(ptr[i]->author));

		printf("����: ");
		gets_s(ptr[i]->bookName, sizeof(ptr[i]->bookName));

		printf("������ ��: ");
		scanf_s("%d", &ptr[i]->page);
		clearLineBuffer();
	}

	for ( int i = 0; i < 3; i++ )
	{
		printf("����: %s\n", ptr[i]->author);
		printf("����: %s\n", ptr[i]->bookName);
		printf("������ ��: %d\n", ptr[i]->page);
	}

	for ( int i = 0; i < sizeof(ptr) / sizeof(Library*); i++ )
	{
		free(ptr[i]);
		ptr[i] = NULL;
	}
}