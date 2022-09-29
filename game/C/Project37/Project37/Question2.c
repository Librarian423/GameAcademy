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
		
		printf("历磊: ");
		gets_s(ptr[i]->author, sizeof(ptr[i]->author));

		printf("力格: ");
		gets_s(ptr[i]->bookName, sizeof(ptr[i]->bookName));

		printf("其捞瘤 荐: ");
		scanf_s("%d", &ptr[i]->page);
		clearLineBuffer();
	}

	for ( int i = 0; i < 3; i++ )
	{
		printf("历磊: %s\n", ptr[i]->author);
		printf("力格: %s\n", ptr[i]->bookName);
		printf("其捞瘤 荐: %d\n", ptr[i]->page);
	}

	for ( int i = 0; i < sizeof(ptr) / sizeof(Library*); i++ )
	{
		free(ptr[i]);
		ptr[i] = NULL;
	}
}