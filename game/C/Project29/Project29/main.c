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

	printf("�̸� �Է�: ");
	scanf_s("%s", man.name, (unsigned int)sizeof(man.name));

	printf("�ֹε�Ϲ�ȣ �Է�: ");
	scanf_s("%s", man.pNum, (unsigned int)sizeof(man.pNum));

	printf("�޿����� �Է�: ");
	scanf_s("%d", &man.salary);

	printf("�̸�: %s\n�ֹε�Ϲ�ȣ: %s\n�޿�����: %d\n", man.name, man.pNum, man.salary);

	return 0;
}