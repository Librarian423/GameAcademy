#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int Question5()
{
	char arr1[250];
	char arr2[250];
	int istrue = 1;
	errno_t err1 = fopen_s(&fp1, "d1.txt", "rt");
	errno_t err2 = fopen_s(&fp2, "d2.txt", "rt");
	if ( err1 != 0 )
	{
		printf("1 파일오픈 실패!\n");
		return -1;
	}
	if ( err2 != 0 )
	{
		printf("2 파일오픈 실패!\n");
		return -1;
	}
	
	while ( fscanf_s(fp1, "%s", arr1, (unsigned int)_countof(arr1)) != NULL && fscanf_s(fp2, "%s", arr2, (unsigned int)_countof(arr2)) != NULL )
	{
		if ( (unsigned int)strlen(arr1) == (unsigned int)strlen(arr2) )
		{
			int len = (unsigned int)strlen(arr1);
			for ( int i = 0; i < len; i++ )
			{
				if ( arr1[i] == arr2[i] )
				{
					continue;
				}
				else
				{
					printf("두 파일은 일치하지 않습니다.\n");
					istrue--;
					break;
				}
			}
		}
		else
		{
			printf("두 파일은 일치하지 않습니다.\n");
			istrue--;
			break;
		}
	}
	if ( istrue == 1 )
	{
		printf("두 개의 파일은 완전히 일치 합니다.\n");
	}

	fclose(fp1);
	fclose(fp2);
	return 0;
}