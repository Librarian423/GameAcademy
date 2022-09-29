#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void Question7()
{
	printf("\nQuestion 7\n\n");
	readFile();
}

int writeFile(Telephone* ptr, int line)
{
	errno_t err3 = fopen_s(&fp3, "telephone.txt", "wt");
	if ( err3 != 0 )
	{
		printf("파일오픈 실패!\n");
		return -1;
	}

	for ( int i = 0; i < line; i++ )
	{
		printf("writing\n");
		fputs(ptr[i].name, fp3);
		fputs("\n", fp3);
		fputs(ptr[i].phone, fp3);
		fputs("\n", fp3);
	}

	err3 = fclose(fp3);
	return 0;
}

int readFile()
{
	char temp[100];
	int lineCount = 0;
	Telephone* arr = (Telephone*)malloc(sizeof(Telephone) * 500);
	if ( arr==NULL )
	{
		return 0;
	}
	errno_t err3 = fopen_s(&fp3, "telephone.txt", "rt");
	if ( err3 != 0 )
	{
		printf("파일오픈 실패!\n");
		return -1;
	}

	while ( !feof(fp3) )
	{
		fscanf_s(fp3, "%s", temp, (unsigned int)_countof(temp));
		strcpy_s(arr[lineCount].name, (unsigned int)_countof(arr[lineCount].name), temp);
		fscanf_s(fp3, "%s", temp, (unsigned int)_countof(temp));
		strcpy_s(arr[lineCount].phone, (unsigned int)_countof(arr[lineCount].phone), temp);
		lineCount++;
	}
	lineCount--;
	
	lineCount = run(arr, lineCount);
	
	err3 = fclose(fp3);

	writeFile(arr, lineCount);
	
	free(arr);

	return 0;
}