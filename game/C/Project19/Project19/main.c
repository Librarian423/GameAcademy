#include <stdio.h>

int main()
{
	srand(time(NULL));
	int user[3];
	int com[3];
	int strike = 0;
	int ball = 0;
	
	for ( int i = 0; i < 3; i++ )
	{
		com[i] = rand() % 10;
		for ( int j = 0; j < i; j++ )
		{
			if ( com[i]==com[j] )
			{
				i--;
				break;
			}			
		}
	}

	for ( int i = 0; i < 3; i++ )
	{
		printf("%d ", com[i]);
	}
	
	
	while ( 1 )
	{
		printf("\n0 에서 9 숫자 3개 입력: ");
		for ( int i = 0; i < 3; i++ )
		{
			scanf_s("%d", &user[i]);

		}

		for ( int i = 0; i < 3; i++ )
		{
			if ( user[i] == com[i] )
			{
				strike++;
			}
			else
			{
				for ( int j = 0; j < 3; j++ )
				{
					if ( user[i] == com[j] )
					{
						ball++;
					}
				}
			}
		}
		printf("strike: %d\nball: %d\n", strike, ball);
		if ( strike == 3 )
		{
			printf("3 strike out!!\n");
			break;
		}
		strike = 0;
		ball = 0;
	}
	
	
	return 0;
}