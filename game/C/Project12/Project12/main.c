#include <stdio.h>

int	main() {
	int n;
	int sn = 0;
	scanf_s("%d", &n);
	sn = n / 10;
	switch (sn)
	{
	case 0:
		printf("0�̻� 10�̸�");
		break;
	case 1:
		printf("10�̻� 20�̸�");
		break;
	case 2:
		printf("20�̻� 30�̸�");
		break;
	default:
		printf("30�̻�");
		break;
	}

	return 0;
}