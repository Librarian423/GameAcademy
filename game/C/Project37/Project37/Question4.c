#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int Question4()
{
	char arr[250];
	int Acount = 0;
	int Pcount = 0;

	errno_t err = fopen_s(&fp, "wordcnt.txt", "rt");
	if ( err != 0 )
	{
		printf("파일오픈 실패!\n");
		return -1;
	}

	while ( fscanf_s(fp, "%s", arr, (unsigned int)_countof(arr)) != EOF )
	{		
		if ( arr[0] == 'a' || arr[0] == 'A' )
		{
			Acount++;
		}
		else if ( arr[0] == 'p' || arr[0] == 'P' )
		{
			Pcount++;
		}
	}
	
	printf("A로 시작하는 단어의 수: %d\nP로 시작하는 단어의 수: %d\n", Acount, Pcount);
	err = fclose(fp);

	return 0;
}