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
		printf("이름 입력: ");
		scanf_s("%s", arr[i].name, (unsigned int)sizeof(arr[i].name));

		printf("주민등록번호 입력: ");
		scanf_s("%s", arr[i].pNum, (unsigned int)sizeof(arr[i].pNum));

		printf("급여정보 입력: ");
		scanf_s("%d", &arr[i].salary);
	}

	for ( int i = 0; i <len; i++ )
	{
		printf("이름: %s\n주민등록번호: %s\n급여정보: %d\n", arr[i].name, arr[i].pNum, arr[i].salary);
	}
	

	return 0;
}