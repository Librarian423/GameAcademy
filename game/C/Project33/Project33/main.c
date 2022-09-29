#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Question1()
{
	FILE* fp;
	
	char buffer[1024];
	const char* elems[] = { "#이름: ","#주민번호: " ,"#전화번호: " };
	int len = _countof(elems);
	
	errno_t err = fopen_s(&fp, "mystory.txt", "wt");
	if ( err != 0 )
	{
		printf("1파일오픈 실패!\n");
		return -1;
	}

	for ( int i = 0; i < len; i++ )
	{
		printf("%s", elems[i]);
		fgets(buffer, _countof(buffer), stdin);
		fputs(elems[i], fp);
		fputs(buffer, fp);
	}

	err = fclose(fp);
}

int Question2()
{
	FILE* fp;

	char buffer[1024];
	const char* elems[] = { "#즐겨먹는 음식: ","#취미: " };
	int len = _countof(elems);

	errno_t err = fopen_s(&fp, "mystory.txt", "a+");
	if ( err != 0 )
	{
		printf("1파일오픈 실패!\n");
		return -1;
	}

	for ( int i = 0; i < len; i++ )
	{
		printf("%s", elems[i]);
		fgets(buffer, _countof(buffer), stdin);
		fputs(elems[i], fp);
		fputs(buffer, fp);
	}

	err = fclose(fp);
}

int Question3()
{
	FILE* fp;

	int str[250];
	char* line;

	errno_t err = fopen_s(&fp, "mystory.txt", "r");
	if ( err != 0 )
	{
		printf("1파일오픈 실패!\n");
		return -1;
	}

	line = fgets(str, sizeof(str), fp);
	while ( line != NULL )
	{
		printf("%s", line);
		line = fgets(str, sizeof(str), fp);
	}
	
	err = fclose(fp);
}

int main(int argc, char* argv[])
{
	const char* path = "mystory.txt";
	if ( argc > 1 )
	{
		path = argv[1];
	}
	printf("%s\n", path);
	Question1();
	Question2();
	Question3();
	
	
	return 0;
}