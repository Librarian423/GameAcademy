#include <stdio.h>

void Enum(const int* ptr, int len)
{
	printf("¦�� ���: ");
	for ( int i = 0; i < len; i++ )
	{
		if ( ptr[i] % 2 == 0 )
		{
			printf("%d ", ptr[i]);
		}
		
	}
	printf("\n");
}

void Onum(const int* ptr, int len)
{
	printf("Ȧ�� ���: ");
	for ( int i = 0; i < len; i++ )
	{
		if ( ptr[i] % 2 != 0 )
		{
			printf("%d ", ptr[i]);
		}
	}
	printf("\n");
}

void Question2()
{
	int num;
	int binary[32] ={0};
	int temp;
	int count = 0;
	printf("10���� ���� �Է�: ");
	scanf_s("%d", &num);

	temp = num;
	while ( temp != 0 )
	{
		binary[count] = temp % 2;
		temp /= 2;
		count++;
	}
	for ( int i = count-1; i >= 0; i-- )
	{
		printf("%d", binary[i]);
	}
	printf("\n");
}

void Question3()
{
	int num;
	int arr[10];
	int len = sizeof(arr) / sizeof(int);
	int even = len - 1;
	int odd = 0;
	
	printf("�� 10���� ���� �Է�\n");

	for ( int i = 0; i < len; i++ )
	{
		printf("�Է�: ");
		scanf_s("%d", &num);

		if ( num % 2 == 0 )
		{
			arr[even] = num;
			even--;
		}
		else
		{
			arr[odd] = num;
			odd++;
		}
	}
	printf("�迭�� ����� ���: ");
	for ( int i = 0; i < len; i++ )
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void Question4()
{
	char arr[50];
	int len;
	int end;
	int check = 0;

	printf("���ڿ� �Է�: ");
	scanf_s("%s", arr, (unsigned int)sizeof(arr));
	
	len = strlen(arr);
	end = len-1;
	
	for ( int i = 0; i < len / 2; i++ )
	{
		if ( arr[i] != arr[end] )
		{	
			printf("ȸ���� �ƴմϴ�.\n");
			check++;
			break;
		}
		end--;
	}
	if ( check == 0 )
	{
		printf("ȸ�� �Դϴ�.\n");
	}
}

void Question5()
{
	int num;
	int arr[7];
	int len = sizeof(arr) / sizeof(int);
	int temp;

	for ( int i = 0; i < len; i++ )
	{
		printf("�Է�: ");
		scanf_s("%d", &num);
		arr[i] = num;
	}

	for ( int i = 0; i < len - 1; i++ )
	{
		for ( int j = 0; j < (len-i)-1; j++ )
		{
			if ( arr[j] < arr[j + 1] )
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				
			}
		}
	}
	for ( int i = 0; i < len; i++ )
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	//���� 1��
	int num;
	int arr[10];
	int len = sizeof(arr) / sizeof(int);

	for ( int i = 0; i < len; i++ )
	{
		printf("�Է�: ");
		scanf_s("%d", &num);
		arr[i] = num;
	}

	Onum(arr, len);
	Enum(arr, len);

	//���� 2��
	Question2();

	//���� 3��
	Question3();

	//���� 4��
	Question4();

	//���� 5��
	Question5();
	return 0;
}