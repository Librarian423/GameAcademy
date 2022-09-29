#include <stdio.h>

int main() {

	Question1();
	Question2();

	return 0;	
}

int Question1() {
	printf("문제 1번\n");

	for (int i = 2; i <= 9; i++)
	{
		if (i % 2 != 0)
		{
			continue;
		}
		for (int j = 1; j <= 9; j++)
		{
			
			printf("%d x %d = %d\n", i, j, i * j);
			if (i == j)
			{
				break;
			}
		}
		printf("\n");
	}

	return 0;
}

int Question2() {
	printf("문제 2번\n");

	for (int i = 0; i <= 9; i++)
	{
		
		for (int j = 0; j <= 9; j++)
		{
			if ((i+j) != 9)
			{
				continue;
			}
			printf("AZ+ZA = %d%d + %d%d ", i, j, j, i);
			printf("= %d%d\n", i+j, i+j);
		}
		printf("\n");
	}

	return 0;
}