#include <stdio.h>

int main() {

	printf("Question 1\n");
	Question1();
	printf("Question 2\n");
	Question2();
	printf("Question 3\n");
	Question3();
	printf("Question 4\n");
	Question4();
	printf("Question 5\n");
	Question5();
	printf("Question 6\n");
	Question6();
	printf("Question 7\n");
	Question7();
	printf("Question 8\n");
	Question8();
	printf("Question 9\n");
	Question9();
	printf("Question 10\n");
	Question10();
	printf("Question 11\n");
	Question11();
	printf("Question 12\n");
	Question12();
	printf("Question 13\n");
	Question13();
	printf("Question 14\n");
	Question14();
	printf("Question 15\n");
	Question15();
	printf("Question 16\n");
	Question16();
	printf("Question 17\n");
	Question17();
	printf("Question 18\n");
	Question18();
	printf("Question 19\n");
	Question19();
	printf("Question 20\n");
	Question20();
	printf("Question 21\n");
	Question21();
	printf("Question 22\n");
	Question22();
	printf("Question 23\n");
	Question23();
	printf("Question 24\n");
	Question24();
	printf("Question 25\n");
	Question25();
	printf("Question 26\n");
	Question26();
	printf("Question 27\n");
	Question27();
	printf("Question 28\n");
	Question28();
	printf("Question 29\n");
	Question29();
	printf("Question 30\n");
	Question30();
	printf("Question 31\n");
	Question31();
	printf("Question 32\n");
	Question32();
	printf("Question 33\n");
	Question33();
	printf("Question 34\n");
	Question34();
	printf("Question 35\n");
	Question35();
	printf("Question 36\n");
	Question36();
	printf("Question 37\n");
	Question37();
	printf("Question 38\n");
	Question38();
	printf("Question 39\n");
	Question39();
	printf("Question 40\n");
	Question40();
	printf("Question 41\n");
	Question41();
	printf("Question 42\n");
	Question42();
	printf("Question 43\n");
	Question43();
	printf("Question 44\n");
	Question44();
	printf("Question 45\n");
	Question45();
	printf("Question 46\n");
	Question46();
	printf("Question 47\n");
	Question47();
	printf("Question 48\n");
	Question48();
	printf("Question 49\n");
	Question49();
	printf("Question 50\n");
	Question50();
	printf("Question 51\n");
	Question51();
	printf("Question 52\n");
	Question52();
	printf("Question 53\n");
	Question53();
	printf("Question 54\n");
	Question54();
	printf("Question 55\n");
	Question55();
	printf("Question 56\n");
	Question56();
	printf("Question 57\n");
	Question57();
	printf("Question 58\n");
	Question58();
	printf("Question 59\n");
	Question59();

	return 0;
}

int Question1() {
	for (int i = 1; i <= 10; i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	return 0;
}

int Question2() {
	int sum = 0;

	printf("The first 10 natural number is :\n");
	for (int i = 1; i <= 10; i++)
	{
		printf("%d ", i);
		sum += i;
	}
	printf("\nThe Sum is : %d\n", sum);

	return 0;
}

int Question3() {
	int num;
	int sum = 0;

	scanf_s("%d", &num);
	printf("The first %d natural number is :\n", num);

	for (int i = 1; i <= num; i++)
	{
		printf("%d ", i);
		sum += i;
	}

	printf("\nThe Sum of Natural Number upto %d terms : %d", num, sum);

	return 0;
}

int Question4() {
	int num;
	int sum = 0;

	printf("Input the 10 numbers :\n");
	for (int i = 1; i <= 10; i++)
	{
		printf("Number-%d :", i);
		scanf_s("%d", &num);
		sum += num;
	}

	printf("The sum of 10 no is : %d\n", sum);
	printf("The Average is : %f\n", (double)sum / 10);

	return 0;
}

int Question5() {
	int num;

	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		printf("Number is : %d and cube of the %d is : %d\n", i, i, (i * i * i));

	}
	return 0;
}

int Question6() {
	int num;

	scanf_s("%d", &num);

	for (int i = 1; i <= 10; i++)
	{
		printf("%d X %d = %d\n", num, i, num * i);
	}

	return 0;
}

int Question7() {
	int num;

	printf("Input upto the table number starting from 1 : ");
	scanf_s("%d", &num);
	printf("Multiplication table from 1 to %d\n", num);

	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= num; j++)
		{
			printf("%d X %d = %d ", j, i, j * i);
		}
		printf("\n");
	}

	return 0;
}

int Question8() {
	int num;
	int sum = 0;
	int odd = 1;
	scanf_s("%d", &num);

	printf("The odd numbers are :");
	for (int i = 1; i <= num; i++)
	{
		printf("%d ", odd);
		sum += odd;
		odd += 2;
	}

	printf("\nThe Sum of odd Natural Number upto %d terms : %d", num, sum);

	return 0;
}

int Question9() {
	int row;

	printf("Input row: ");
	scanf_s("%d", &row);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

int Question10() {
	int row;

	printf("Input row: ");
	scanf_s("%d", &row);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf("%d", j+1);
		}
		printf("\n");
	}
	return 0;
}

int Question11() {
	int row;
	int num = 1;
	printf("Input row: ");
	scanf_s("%d", &row);
	
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf("%d", num);
		}
		num++;
		printf("\n");
	}
	return 0;
}

int Question12() {
	int row;
	int num = 1;
	printf("Input row: ");
	scanf_s("%d", &row);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf("%d ", num);
			num++;
		}	
		printf("\n");
	}
	return 0;
}

int Question13() {
	int row;
	int num = 1;
	printf("Input row: ");
	scanf_s("%d", &row);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row - 1 - i; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < i + 1; k++)
		{
			printf("%d ", num);
			num++;
		}
		printf("\n");
	}
	return 0;
}

int Question14() {
	int row;
	
	printf("Input row: ");
	scanf_s("%d", &row);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row - 1 - i; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < i + 1; k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

int Question15() {
	int num;
	int fac = 1;

	printf("Input the number: ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		fac *= i;
	}
	printf("The Factorial of %d is: %d", num, fac);

	return 0;
}

int Question16() {
	int num;
	int even = 2;
	int total = 0;

	printf("Input the number of terms: ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("%d ", even);
		total += even;
		even += 2;
		
	}
	printf("\nThe Sum of even Natural Number upto %d terms : %d\n", num, total);

	return 0;
}

int Question17() {
	int row;
	int num = 1;
	printf("Input row: ");
	scanf_s("%d", &row);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row - 1 - i; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < i + 1; k++)
		{
			printf("%d ", num);
			
		}
		num++;
		printf("\n");
	}
	return 0;
}

int Question18() {
	double x;
	int num;
	double total = 1;
	double sum = 1;
	int count = 2;
	double temp = 1;
	double fac = 1;
	double pm = 1;

	printf("Input the Value of x :");
	scanf_s("%lf", &x);
	printf("Input the number of terms :");
	scanf_s("%d", &num);

	for (int i = 1; i < num; i++)
	{
		
		for (int j = 1; j <= count; j++)
		{
			fac = fac * j;
			temp = temp * x;
		}
		pm *= (-1);
		temp = temp * pm;
		total = temp / fac;
		sum = sum + total;
		fac = 1;
		temp = 1;
		count += 2;
		
	}
	printf("the sum = %f\n", sum);
	printf("Number of terms = %d\n", num);
	printf("value of x = %f\n", x);

	return 0;
}

int Question19() {
	int num;
	double sum = 0;

	printf("Input the number of terms : ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		sum = sum + (double)1 / i;
	}
	printf("%f", sum);

	return 0;
}

int Question20() {
	int row;

	printf("Input row: ");
	scanf_s("%d", &row);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row - 1 - i; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < (2 * i) + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

int Question21() {
	int num;
	int sum = 0;
	int ten = 9;

	printf("Input the number of terms :");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		sum += ten;
		printf("%d ", ten);
		ten = ten * 10 + 9;
	}
	printf("\nThe sum of the series = %d\n", sum);

	return 0;
}

int Question22() {
	int row;
	int num = 1;
	int num2 = 0;

	printf("Input row: ");
	scanf_s("%d", &row);

	for (int i = 1; i <= row; i++)
	{
		if (i % 2 == 0)
		{
			num = 0;
			num2 = 1;
		}
		else
		{
			num = 1;
			num2 = 0;
		}
		for (int j = 1; j <= i; j++)
		{
			if (j % 2 == 0)
			{
				printf("%d", num2);
			}
			else
			{
				printf("%d", num);
			}
			
		}
		
		printf("\n");
	}
	return 0;
}

int Question23() {
	double x;
	int num;
	double total = 1;
	double sum = 1;
	int count = 1;
	double temp = 1;
	double fac = 1;
	

	printf("Input the Value of x :");
	scanf_s("%lf", &x);
	printf("Input the number of terms :");
	scanf_s("%d", &num);

	for (int i = 1; i < num; i++)
	{

		for (int j = 1; j <= count; j++)
		{
			fac = fac * j;
			temp = temp * x;
		}
		
		total = temp / fac;
		sum = sum + total;
		fac = 1;
		temp = 1;
		count++;

	}
	printf("The sum is = %f\n", sum);

	return 0;
}

int Question24() {
	int x;
	int num;
	int total = 1;
	int sum = 0;
	int count = 1;
	int temp = 1;
	int pm = 1;

	printf("Input the Value of x :");
	scanf_s("%d", &x);
	printf("Input the number of terms :");
	scanf_s("%d", &num);
	printf("The values of the series:\n");

	for (int i = 1; i <= num; i++)
	{

		for (int j = 1; j <= count; j++)
		{
			temp = temp * x;
		}
		temp = temp * pm;
		printf("%d\n", temp);
		sum = sum + temp;
		pm *= (-1);
		temp = 1;
		count += 2;

	}
	printf("The sum = %d\n", sum);

	return 0;
}

int Question25() {
	int num;
	int sum = 0;
	int temp = 1;
	printf("Input the number of terms :");
	scanf_s("%d", &num);

	printf("The square natural upto %d tems are: ", num);
	for (int i = 0; i < num; i++)
	{
		printf("%d ", temp * temp);
		sum = sum + (temp * temp);
		temp++;
	}
	printf("\nThe sum of Square Natural Number upto %d terms = %d\n", num, sum);

	return 0;
}

int Question26() {
	int num;
	int sum = 0;
	int temp = 1;

	printf("Input the number of terms :");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		sum += temp;
		printf("%d ", temp);
		temp = temp * 10 + 1;
	}
	printf("\nThe sum of the series = %d\n", sum);

	return 0;
}

int Question27() {
	int num;
	int sum = 0;

	printf("Input the number : ");
	scanf_s("%d", &num);
	printf("The positive divisor: ");

	for (int i = 1; i < num; i++)
	{
		if (num % i == 0)
		{
			sum = sum + i;
			printf("%d ", i);
		}
	}
	
	printf("\nThe sum of the divisor is : %d\n", sum);

	if (sum == num)
	{
		printf("The number is perfect.\n");
	}
	else
	{
		printf("So, the number is not perfect.\n");
	}
	
	return 0;
}

int Question28() {
	int start;
	int end;
	int sum = 0;
	int count = 1;

	printf("Input the starting range of number : ");
	scanf_s("%d", &start);
	printf("Input the ending range of number : ");
	scanf_s("%d", &end);
	printf("The Perfect numbers within the given range : ");

	for (int i = start; i <= end; i++)
	{
		count = 1;
		sum = 0;
		while (count < i)
		{
			if (i % count == 0)
			{
				sum = sum + count;
			}
			count++;
		}
		
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}

int Question29() {
	int num;
	int a, b, c;
	int a1 = 1, b1 = 1, c1 = 1;

	printf("Input a number: ");
	scanf_s("%d", &num);

	a = num / 100;
	b = (num - (a * 100)) / 10;
	c = (num - (a * 100) - (b * 10));

	for (int i = 0; i < 3; i++)
	{
		a1 *= a;
		b1 *= b;
		c1 *= c;
	}
	if (num == a1 + b1 + c1)
	{
		printf("%d is an Armstrong number.\n", num);
	}
	else
	{
		printf("%d is not an Armstrong number.\n", num);
	}

	return 0;
}

int Question30() {
	int start;
	int end;
	int a, b, c;
	int a1 = 1, b1 = 1, c1 = 1;
	int sum = 0;

	printf("Input starting number of range: ");
	scanf_s("%d", &start);
	printf("Input ending number of range: ");
	scanf_s("%d", &end);
	printf("Armstrong numbers in given range are: ");

	for (int i = start; i < end; i++)
	{
		a = i / 100;
		b = (i - (a * 100)) / 10;
		c = (i - (a * 100) - (b * 10));
		for (int j = 0; j < 3; j++)
		{
			a1 *= a;
			b1 *= b;
			c1 *= c;

		}
		if (i == a1 + b1 + c1)
		{
			printf("%d ", i);
		}
		a1 = 1;
		b1 = 1;
		c1 = 1;
		
	}
	
	return 0;
}

int Question31() {
	int row;

	printf("Input row: ");
	scanf_s("%d", &row);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row - 1 - i; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < (2 * i) + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = row-1; i >= 1; i--)
	{
		for (int j = 1; j <= row-i ; j++)
		{
			printf(" ");
		}
		for (int k = 1; k <= (2 * i) - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

int Question32() {
	int num;
	int check = 1;

	printf("Input a number: ");
	scanf_s("%d", &num);

	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			check = 0;
		}
	}
	if (check == 0)
	{
		printf("%d is not a prime number.\n", num);
	}
	else
	{
		printf("%d is a prime number.\n", num);
	}
	return 0;
}

int Question33() {
	int row;
	int num = 1;
	printf("Input row: ");
	scanf_s("%d", &row);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row - 1 - i; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < i + 1; k++)
		{
			if (k == 0 || i == 0)
			{
				num = 1;
			}
			else
			{
				num = num * (i - k + 1) / k;
			}
			printf("%d ", num);

		}
		printf("\n");
	}
	return 0;
}

int Question34() {
	int start;
	int end;
	int check = 0;
	int num = 0;

	printf("Input a starting number of range: ");
	scanf_s("%d", &start);
	printf("Input a ending number of range: ");
	scanf_s("%d", &end);
	printf("The prime number between %d and %d are :\n", start, end);

	for (int i = start; i <= end; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				check = 0;
				continue;
				
			}
		}
		if (check == 1)
		{
			printf("%d ", i);
		}
		check = 1;
	}
	printf("\n");
	return 0;
}

int Question35() {
	int fibo;
	int num;
	int num1 = 0;
	int num2 = 1;
	
	printf("Input number of terms to display : ");
	scanf_s("%d", &fibo);
	printf("Here is the Fibonacci series upto %d terms: \n", fibo);

	if (fibo < 1)
	{
		printf("Wrong number\n");
		return 0;
	}
	else if (fibo == 1)
	{
		printf("0\n");
		return 0;
	}
	else
	{
		printf("0 1 ");
		for (int i = 2; i < fibo; i++)
		{

			num = num1 + num2;
			printf("%d ", num);
			num1 = num2;
			num2 = num;
		}
		printf("\n");
		return 0;
	}

	return 0;
}

int Question36() {
	int row;

	printf("Input row: ");
	scanf_s("%d", &row);

	for (int i = 0; i <= row; i++)
	{
		for (int j = 1; j <= row - i; j++)
		{
			printf(" ");
		}
		for (int k = 1; k <= i; k++)
		{
			printf("%d", k);
		}
		for (int p = i-1; p >=1; p--)
		{
			printf("%d", p);
		}
		printf("\n");
	}
	return 0;
}

int Question37() {
	int num;
	int temp = 0;
	int sum = 0;

	printf("Input the number: ");
	scanf_s("%d", &num);

	for (num; num != 0; num = num / 10)
	{
		temp = num % 10;
		sum = sum * 10 + temp;
	}
	printf("The number in reverse order is : %d\n", sum);
	return 0;
}

int Question38() {
	int num;
	int temp = 0;
	int sum = 0;
	int i;

	printf("Input the number: ");
	scanf_s("%d", &num);

	for (i = num; num != 0; num = num / 10)
	{
		temp = num % 10;
		sum = sum * 10 + temp;
	}

	if (i == sum)
	{
		printf("%d is a palindrome number.\n", i);
	}
	else
	{
		printf("%d is not a palindrome number.\n", i);
	}

	return 0;
}

int Question39() {
	int sum = 0;

	printf("Numbers between 100 and 200, divisible by 9 :\n");

	for (int i = 100; i <= 200; i++)
	{
		if (i % 9 == 0)
		{
			printf("%d ", i);
			sum = sum + i;
		}
	}
	printf("\nThe sum : %d\n", sum);

	return 0;
}

int Question40() {
	int row;

	printf("Input row: ");
	scanf_s("%d", &row);

	for (int i = 0; i <= row; i++)
	{
		for (int j = 1; j <= row - i; j++)
		{
			printf(" ");
		}
		for (int k = 'A'; k <= i+'A'; k++)
		{
			printf("%c", k);
		}
		for (int p = i - 1+'A'; p >= 'A'; p--)
		{
			printf("%c", p);
		}
		printf("\n");
	}
	return 0;
}

int Question41() {
	int num;
	int temp = 0;
	int sum = 0;
	int binary = 1;

	printf("Input a decimal number: ");
	scanf_s("%d", &num);

	for ( int i = num; i > 0; i /= 2 )
	{
		temp = i % 2;
		if ( temp != 0 )
		{
			sum += binary;
		}
		binary *= 10;
	}
	printf("The equivalent Binary Number : %d\n", sum);
	
	return 0;
}

int Question42() {
	int num;
	int i;
	int sum = 0;
	int temp = 0;
	int binary = 1;

	printf("Input a binary number :");
	scanf_s("%d", &num);
	printf("The Binary Number: %d\n", num);

	for (i = num; num != 0; num = num / 10)
	{
		temp = num % 10;
		if (temp != 0)
		{
			sum = sum + binary;
		}
		binary *= 2;
	}
	printf("The equivalent Decimal Number : %d\n", sum);

	return 0;
}

int Question43() {
	int num1, num2;
	int end;
	int gcm = 0;

	printf("Input 1st number for HCF: ");
	scanf_s("%d", &num1);
	printf("Input 2nd number for HCF: ");
	scanf_s("%d", &num2);
	printf("HCF of %d and %d is : ", num1, num2);

	end = (num1 < num2) ? num1 : num2;

	for (int i = 1; i < end; i++)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			gcm = i;
		}
	}
	printf("%d\n", gcm);

	return 0;
}

int Question44() {
	int num1, num2;
	int end;
	int gcm = 0;

	printf("Input 1st number for LCM: ");
	scanf_s("%d", &num1);
	printf("Input 2nd number for LCM: ");
	scanf_s("%d", &num2);
	printf("LCM of %d and %d is : ", num1, num2);

	end = (num1 < num2) ? num1 : num2;

	for (int i = 1; i < end; i++)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			gcm = i;
		}
	}
	printf("%d\n", (num1 * num2) / gcm);

	return 0;
}

int Question45() {
	int num1, num2;
	int end;
	int gcm = 0;

	printf("Input 1st number for LCM: ");
	scanf_s("%d", &num1);
	printf("Input 2nd number for LCM: ");
	scanf_s("%d", &num2);
	printf("LCM of %d and %d is : ", num1, num2);

	end = (num1 > num2) ? num1 : num2;

	for (int i = end; ; i+=end)
	{
		if (i % num1 == 0 && i % num2 == 0)
		{
			gcm = i;
			break;
		}
	}
	printf("%d\n", gcm);

	return 0;
}

int Question46()
{
	int num;
	int sum = 0;
	int temp = 0;
	int binary = 1;

	printf("Input a binary number :");
	scanf_s("%d", &num);
	printf("The Binary Number: %d\n", num);

	while ( num != 0 )
	{
		temp = num % 10;
		if ( temp != 0 )
		{
			sum = sum + binary;
		}
		binary *= 2;
		num /= 10;
	}

	printf("The equivalent Decimal Number : %d\n", sum);

	return 0;
}

int Question47()
{
	int num;
	int sum = 0;
	int fac;

	scanf_s("%d", &num);

	for ( int i = num; i > 0; i = i / 10 )
	{
		fac = 1;
		for ( int j = 1; j <= i % 10; j++ )
		{
			fac = fac * j;
		}
		sum = sum + fac;
	}

	if ( num == sum )
	{
		printf("%d is a Strong number.\n", num);
	}
	else
	{
		printf("%d is not a Strong number.\n", num);
	}
	return 0;
}

int Question48()
{
	int start;
	int end;
	int sum = 0;
	int fac;

	printf("Input starting range of number: ");
	scanf_s("%d", &start);
	printf("Input ending range of number: ");
	scanf_s("%d", &end);

	for ( int i = start; i <= end; i++ )
	{
		for ( int j = i; j > 0; j = j / 10 )
		{
			fac = 1;
			for ( int k = 1; k <= j % 10; k++ )
			{
				fac = fac * k;
			}
			sum = sum + fac;
		}
		if ( i == sum )
		{
			printf("%d ", i);
		}
		sum = 0;
	}
	printf("\n");

	return 0;
}

int Question49()
{
	int start;
	int item;
	int dif;
	int end;
	int sum = 0;

	printf("Input the starting number of the A.P. series: ");
	scanf_s("%d", &start);
	printf("Input the number of items for the A.P. series: ");
	scanf_s("%d", &item);
	printf("Input the common difference of the A.P. series: ");
	scanf_s("%d", &dif);

	end = start + (item - 1) * dif;

	for ( int i = start; i <= end; i+=dif )
	{
		if ( i != end )
		{
			printf("%d + ", i);
			sum += i;
		}
		else
		{
			sum += i;
			printf("%d = %d", i, sum);
		}	
	}
	printf("\n");

	return 0;
}

int Question50()
{
	int num;
	int temp;
	int sum = 0;
	int ten = 1;

	printf("Enter a number to convert: ");
	scanf_s("%d", &num);

	for ( int i = num; i > 0; i /= 8 )
	{
		temp = i % 8 * ten;
		sum += temp;
		ten *= 10;
	}

	printf("The Octal of %d is %d\n", num, sum);
	return 0;
}

int Question51()
{
	int num;
	int temp;
	int sum = 0;
	int ten = 1;

	printf("Input an Octal number (using digit 0 - 7): ");
	scanf_s("%d", &num);

	for ( int i = num; i > 0; i /= 10 )
	{
		temp = i % 10 * ten;
		if ( i % 10 > 7 )
		{
			printf("Not a Octal Number\n");
			return 0;
		}
		sum += temp;
		ten *= 8;
	}

	printf("The equivalent Decimal Number: %d\n", sum);
	return 0;
}

int Question52()
{
	double start;
	int end;
	double ratio;
	double sum = 0;
	double temp;

	printf("Input the starting number of the G.P. series: ");
	scanf_s("%lf", &start);
	printf("Input the number of trems for the G.P. series: ");
	scanf_s("%d", &end);
	printf("Input the common ratio of the G.P. series: ");
	scanf_s("%lf", &ratio);

	temp = start;
	for ( int i = 0; i < end; i++ )
	{ 
		printf("%f ", temp);
		sum = sum + temp;
		temp *= ratio;
	}
	printf("\nThe Sum of the G.P.series: %f\n", sum);

	return 0;
}

int Question53()
{
	int num;
	int binary = 1;
	int temp = 0;
	int binarySum = 0;
	int octal = 0;
	int ten = 1;

	printf("Input a binary number :");
	scanf_s("%d", &num);
	printf("The Binary Number: %d\n", num);

	while ( num != 0 )
	{
		temp = num % 10;
		if ( temp != 0 )
		{
			binarySum = binarySum + binary;
		}
		binary *= 2;
		num /= 10;
	}

	//printf("The equivalent Decimal Number : %d\n", binarySum);

	for ( int i = binarySum; i > 0; i /= 8 )
	{
		temp = i % 8 * ten;
		octal += temp;
		ten *= 10;
	}

	printf("The equivalent Octal Number: %d\n", octal);

	return 0;
}

int Question54()
{
	int num;
	int binary = 1;
	int temp = 0;
	int binarySum = 0;
	int octalSum = 0;
	int ten = 1;

	printf("Input an Octal number (using digit 0 - 7): ");
	scanf_s("%d", &num);
	printf("The Octal Number: %d\n", num);

	for ( int i = num; i > 0; i /= 10 )
	{
		temp = i % 10 * ten;
		if ( i % 10 > 7 )
		{
			printf("Not a Octal Number\n");
			return 0;
		}
		octalSum += temp;
		ten *= 8;
	}

	//printf("The equivalent Decimal Number: %d\n", octalSum);
	
	for ( int i = octalSum; i > 0; i /= 2 )
	{
		temp = i % 2;
		if ( temp != 0 )
		{
			binarySum += binary;
		}
		binary *= 10;
	}
	printf("The equivalent Binary Number : %d\n", binarySum);

	return 0;
}

int Question55()
{
	int num;
	int sum = 0;
	int temp;

	printf("Input any Decimal number: ");
	scanf_s("%d", &num);

	for ( int i = num; i > 0; i /= 16 )
	{
		temp = i % 16;
		if ( temp < 10 )
		{
			temp += 48;
		}
		else
		{
			temp += 55;
		}
		sum = sum * 100 + temp;
	}
	
	printf("The equivalent Hexadecimal Number: ");
	for ( int i = sum; i > 0; i /= 100 )
	{
		temp = i % 100;
		//printf("%d\n", temp);
		printf("%c", temp);
	}
	printf("\n");

	return 0;
}

int Question56()
{
	int check = 0;
	int prime = 0;
	int num;

	printf("Input a positive integer: ");
	scanf_s("%d", &num);
	
	for ( int i = 1; i <= num; i++ )
	{
		for ( int j = 2; j < i; j++ )
		{
			if ( i % j == 0 )
			{
				check = 0;
			}
		}
		if ( check == 1 )
		{
			
			for ( int k = 2; k < i; k++ )
			{
				for ( int j = 2; j < k; j++ )
				{
					if ( k % j == 0 )
					{
						prime = 0;
					}
				}
				if ( k + i == num && prime == 1 )
				{
					printf("%d = %d + %d\n", i + k, i, k);
				}
				prime = 1;
			}
		}
		check = 1;
	}
	printf("\n");
	return 0;
}

int Question57()
{
	char arr[100];

	printf("Input a string to reverse: ");
	scanf_s("%s", arr, (unsigned int)sizeof(arr));
	printf("Reversed string is: ");

	for ( int i = strlen(arr); i >= 0; i-- )
	{
		printf("%c", arr[i]);
	}
	printf("\n");

	return 0;
}

int Question58()
{
	char arr[100];
	int count = 0;

	scanf_s("%s", arr, (unsigned int)sizeof(arr));

	printf("Input a string: ");
	for ( int i = 0; arr[i] != '\0'; i++ )
	{
		count++;
	}

	printf("The string contains %d number of characters.\nSo, the length of the string %s is : %d\n", count, arr, count);

	return 0;

}

int Question59()
{
	int num;
	int digit = 0;
	int temp;
	int ap = 0;
	int sum = 0;
	int sum2 = 1;

	printf("Input a number: ");
	scanf_s("%d", &num);

	temp = num;
	while ( temp != 0 )
	{
		temp /= 10;
		digit++;
	}

	temp = num;
	while ( temp != 0 )
	{
		ap = temp % 10;
		for ( int i = 0; i < digit; i++ )
		{
			sum2 = sum2 * ap;
			
		}
		sum += sum2;
		
		sum2 = 1;
		
		temp /= 10;
	}
	
	if ( num == sum )
	{
		printf("%d is an Armstrong number.\n", num);
	}
	else
	{
		printf("%d is not an Armstrong number.\n", num);
	}

	return 0;
}