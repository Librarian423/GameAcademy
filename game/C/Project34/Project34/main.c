#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calcSize(FILE* fp)
{
	int fpos;
	int size;
	int cpos = ftell(fp);

	fseek(fp, 0, SEEK_END);
	fpos = ftell(fp);
	//printf("%d\n", fpos);

	size = fpos;

	fseek(fp, cpos, SEEK_SET);
	cpos = ftell(fp);
	//printf("%d\n", cpos);

	return size;
}

int main(int argc, char* argv[])
{
	FILE* fp;
	int fileSize;

	errno_t err = fopen_s(&fp, "text.txt", "rt");
	if ( err != 0 )
	{
		printf("1파일오픈 실패!\n");
		return -1;
	}

	
	fileSize = calcSize(fp);

	printf("%d\n", fileSize);

	err = fclose(fp);

	return 0;
}