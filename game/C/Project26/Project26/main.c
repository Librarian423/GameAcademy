#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Rotate(int ptr[][4])
{
	int temp[4][4];
	int len = 4;
	//arr[y][x]
	for ( int i = 0; i < len; i++ )
	{
		for ( int j = 0; j < 4; j++ )
		{
			temp[i][j] = ptr[len - 1 - j][i];
		}

	}
	for ( int i = 0; i < 4; i++ )
	{
		for ( int j = 0; j < 4; j++ )
		{
			ptr[i][j] = temp[i][j];
		}
	}
}

void Printarray(int ptr[][4])
{
	for ( int i = 0; i < 4; i++ )
	{
		for ( int j = 0; j < 4; j++ )
		{
			printf("%d ", ptr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void Question2()
{
	//문제 2번
	int arr[50][50] = { 0 };
	int num = 1;
	int input;
	int len;
	int x = -1, y = 0;
	int updown = 1;

	printf("n을 입력: ");
	scanf_s("%d", &input);

	len = input;

	//arr2[y][x]
	while ( len > 0 )
	{
		for ( int i = 0; i < len; i++ )
		{
			x += updown;
			arr[y][x] = num++;
		}

		len--;

		for ( int i = 0; i < len; i++ )
		{
			y += updown;
			arr[y][x] = num++;

		}
		updown = -updown;
	}

	for ( int i = 0; i < input; i++ )
	{
		for ( int j = 0; j < input; j++ )
		{
			printf("%5d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void Question3()
{
	printf("난수의 범위 0부터 100까지\n");
	for ( int i = 0; i < 5; i++ )
	{
		printf("난수 출력: %d: \n", rand() % 100);
	}
}

void Question4()
{
	srand(time(NULL));
	for ( int i = 0; i < 2; i++ )
	{
		printf("주사위 %d의 결과 %d\n", i + 1, rand() % 6 + 1);
	}
}

void Question5()
{
	int win = 0;
	int tie = 0;
	int lose = 1;
	int com;
	int input;
	srand(time(NULL));
	while ( lose == 1 )
	{
		printf("바위는 1, 가위는 2, 보는 3: ");
		com = rand() % 3 + 1;
		scanf_s("%d", &input);

		switch ( input )
		{
		case 1:
			printf("당신은 바위 선택, ");
			if ( com == input )
			{
				printf("컴퓨터는 바위 선택, 비겼습니다!\n");
				tie++;
				break;
			}
			else if ( com == 2 )
			{
				printf("컴퓨터는 가위 선택, 이겼습니다!\n");
				win++;
				break;
			}
			else
			{
				printf("컴퓨터는 보 선택, 당신이 졌습니다!\n");
				lose--;
				break;
			}
		case 2:
			printf("당신은 가위 선택, ");
			if ( com == input )
			{
				printf("컴퓨터는 가위 선택, 비겼습니다!\n");
				tie++;
				break;
			}
			else if ( com == 3 )
			{
				printf("컴퓨터는 보 선택, 이겼습니다!\n");
				win++;
				break;
			}
			else
			{
				printf("컴퓨터는 바위 선택, 당신이 졌겼습니다!\n");
				lose--;
				break;
			}
		case 3:
			printf("당신은 보 선택, ");
			if ( com == input )
			{
				printf("컴퓨터는 보 선택, 당신이 비겼습니다!\n");
				tie++;
				break;
			}
			else if ( com == 1 )
			{
				printf("컴퓨터는 바위 선택, 이겼습니다!\n");
				win++;
				break;
			}
			else
			{
				printf("컴퓨터는 가위 선택, 당신이 졌겼습니다!\n");
				lose--;
				break;
			}
		default:
			printf("1에서 3을 입력하세요\n");
			break;
		}
	}
	printf("게임의 결과: %d승, %d무\n", win, tie);
}

void Question6()
{
	srand(time(NULL));
	int user[3];
	int com[3];
	int strike = 0;
	int ball = 0;
	int count = 1;

	for ( int i = 0; i < 3; i++ )
	{
		com[i] = rand() % 10;
		for ( int j = 0; j < i; j++ )
		{
			if ( com[i] == com[j] )
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
	printf("\n");
	printf("Start Game!\n");
	while ( 1 )
	{
		printf("3개의 숫자 선택: ");
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
		printf("%d번째 도전 결과: %d strike, %d ball!!\n", count, strike, ball);
		if ( strike == 3 )
		{
			printf("\nGame Over!!\n");
			break;
		}
		count++;
		strike = 0;
		ball = 0;
	}
}

int main()
{
	//문제 1번
	int arr[4][4];
	int num = 1;
	for ( int i = 0; i < 4; i++ )
	{
		for ( int j = 0; j < 4; j++ )
		{
			arr[i][j] = num;
			num++;
		}
	}
	Printarray(arr);
	Rotate(arr);
	Printarray(arr);
	Rotate(arr);
	Printarray(arr);
	Rotate(arr);
	Printarray(arr);
	Rotate(arr);

	//문제 2번
	Question2();

	//문제 3번
	Question3();

	//문제 4번
	Question4();

	//문제 5번
	Question5();

	//문제 6번
	Question6();

	return 0;
}