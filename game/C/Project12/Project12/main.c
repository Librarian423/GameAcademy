#include <stdio.h>

int	main() {
	int n;
	int sn = 0;
	scanf_s("%d", &n);
	sn = n / 10;
	switch (sn)
	{
	case 0:
		printf("0이상 10미만");
		break;
	case 1:
		printf("10이상 20미만");
		break;
	case 2:
		printf("20이상 30미만");
		break;
	default:
		printf("30이상");
		break;
	}

	return 0;
}