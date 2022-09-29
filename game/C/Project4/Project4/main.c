#include <stdio.h>

int main() {
	int num1;
	int result;
	
	scanf_s("%d", &num1);

	result = num1 << 3;
	result = result >> 2;
	
	printf("%d", result);
	
	return 0;
}