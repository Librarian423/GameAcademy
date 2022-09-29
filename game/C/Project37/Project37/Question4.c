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
		printf("���Ͽ��� ����!\n");
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
	
	printf("A�� �����ϴ� �ܾ��� ��: %d\nP�� �����ϴ� �ܾ��� ��: %d\n", Acount, Pcount);
	err = fclose(fp);

	return 0;
}