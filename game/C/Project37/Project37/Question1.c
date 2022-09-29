#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void Question1()
{
	Library arr[3];

	printf("도서 정보 입력\n");
	for ( int i = 0; i < 3; i++ )
	{
		printf("저자: ");
		gets_s(arr[i].author, sizeof(arr[i].author));
		
		printf("제목: ");
		gets_s(arr[i].bookName, sizeof(arr[i].bookName));

		printf("페이지 수: ");
		scanf_s("%d", &arr[i].page);
		clearLineBuffer();
	}
	printf("\n");

	printf("도서 정보 출력\n");
	for ( int i = 0; i < 3; i++ )
	{
		printf("저자: %s\n", arr[i].author);
		printf("제목: %s\n", arr[i].bookName);
		printf("페이지 수: %d\n", arr[i].page);
	}
}