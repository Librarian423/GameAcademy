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
	//���� 2��
	int arr[50][50] = { 0 };
	int num = 1;
	int input;
	int len;
	int x = -1, y = 0;
	int updown = 1;

	printf("n�� �Է�: ");
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
	printf("������ ���� 0���� 100����\n");
	for ( int i = 0; i < 5; i++ )
	{
		printf("���� ���: %d: \n", rand() % 100);
	}
}

void Question4()
{
	srand(time(NULL));
	for ( int i = 0; i < 2; i++ )
	{
		printf("�ֻ��� %d�� ��� %d\n", i + 1, rand() % 6 + 1);
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
		printf("������ 1, ������ 2, ���� 3: ");
		com = rand() % 3 + 1;
		scanf_s("%d", &input);

		switch ( input )
		{
		case 1:
			printf("����� ���� ����, ");
			if ( com == input )
			{
				printf("��ǻ�ʹ� ���� ����, �����ϴ�!\n");
				tie++;
				break;
			}
			else if ( com == 2 )
			{
				printf("��ǻ�ʹ� ���� ����, �̰���ϴ�!\n");
				win++;
				break;
			}
			else
			{
				printf("��ǻ�ʹ� �� ����, ����� �����ϴ�!\n");
				lose--;
				break;
			}
		case 2:
			printf("����� ���� ����, ");
			if ( com == input )
			{
				printf("��ǻ�ʹ� ���� ����, �����ϴ�!\n");
				tie++;
				break;
			}
			else if ( com == 3 )
			{
				printf("��ǻ�ʹ� �� ����, �̰���ϴ�!\n");
				win++;
				break;
			}
			else
			{
				printf("��ǻ�ʹ� ���� ����, ����� ������ϴ�!\n");
				lose--;
				break;
			}
		case 3:
			printf("����� �� ����, ");
			if ( com == input )
			{
				printf("��ǻ�ʹ� �� ����, ����� �����ϴ�!\n");
				tie++;
				break;
			}
			else if ( com == 1 )
			{
				printf("��ǻ�ʹ� ���� ����, �̰���ϴ�!\n");
				win++;
				break;
			}
			else
			{
				printf("��ǻ�ʹ� ���� ����, ����� ������ϴ�!\n");
				lose--;
				break;
			}
		default:
			printf("1���� 3�� �Է��ϼ���\n");
			break;
		}
	}
	printf("������ ���: %d��, %d��\n", win, tie);
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
		printf("3���� ���� ����: ");
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
		printf("%d��° ���� ���: %d strike, %d ball!!\n", count, strike, ball);
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
	//���� 1��
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

	//���� 2��
	Question2();

	//���� 3��
	Question3();

	//���� 4��
	Question4();

	//���� 5��
	Question5();

	//���� 6��
	Question6();

	return 0;
}