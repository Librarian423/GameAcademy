#include <stdio.h>

struct employee
{
	char name[20];
	char pNum[20];
	int salary;
}Employee;

int main()
{
	struct employee arr[3] = { "aaa","123",1 };
	int len = (unsigned int)sizeof(arr) / sizeof(Employee);
	

	for ( int i = 0; i < len; i++ )
	{
		printf("�̸� �Է�: ");
		scanf_s("%s", arr[i].name, (unsigned int)sizeof(arr[i].name));

		printf("�ֹε�Ϲ�ȣ �Է�: ");
		scanf_s("%s", arr[i].pNum, (unsigned int)sizeof(arr[i].pNum));

		printf("�޿����� �Է�: ");
		scanf_s("%d", &arr[i].salary);
	}

	for ( int i = 0; i <len; i++ )
	{
		printf("�̸�: %s\n�ֹε�Ϲ�ȣ: %s\n�޿�����: %d\n", arr[i].name, arr[i].pNum, arr[i].salary);
	}
	

	return 0;
}