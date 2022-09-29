#include <stdio.h>
#include <math.h>

struct employee
{
	char name[20];
	char pNum[20];
	int salary;
};

int main()
{
	struct employee man;

	printf("이름 입력: ");
	scanf_s("%s", man.name, (unsigned int)sizeof(man.name));

	printf("주민등록번호 입력: ");
	scanf_s("%s", man.pNum, (unsigned int)sizeof(man.pNum));

	printf("급여정보 입력: ");
	scanf_s("%d", &man.salary);

	printf("이름: %s\n주민등록번호: %s\n급여정보: %d\n", man.name, man.pNum, man.salary);

	return 0;
}