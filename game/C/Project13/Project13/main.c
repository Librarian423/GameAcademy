#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

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

	return 0;
}

int Question1() {
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);

	if (num1 == num2)
	{
		printf("Number1 and Number2 are equal\n");
	}
	else
	{
		printf("Number1 and Number2 are not equal\n");
	}

	return 0;
}

int Question2() {
	int num;
	scanf_s("%d", &num);

	if (num % 2 == 0)
	{
		printf("%d is an even integer\n", num);
	}
	else
	{
		printf("%d is an odd integer\n", num);
	}
	return 0;
}

int Question3() {
	int num;
	scanf_s("%d", &num);

	if (num >= 0)
	{
		printf("%d is a positive number\n", num);
	}
	else
	{
		printf("%d is a negative number\n", num);
	}

	return 0;
}

int Question4() {
	int year;
	scanf_s("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("%d is a leap year.\n", year);
	}
	else
	{
		printf("%d is not a leap year.\n", year);
	}

	return 0;
}

int Question5() {
	int age;
	scanf_s("%d", &age);

	if (age >= 18)
	{
		printf("Congratulation! You are eligible for casting your vote.\n");
	}
	else
	{
		printf("Sorry! You are ineligible for casting your vote.\n");
	}

	return 0;
}

int Question6() {
	int m;
	int n;
	scanf_s("%d", &m);

	if (m > 0)
	{
		n = 1;
	}
	else if (m == 0)
	{
		n = 0;
	}
	else 
	{
		n = -1;
	}
	printf("The value of n = %d\n", n);

	return 0;
}

int Question7() {
	int height;

	scanf_s("%d", &height);

	if (height >= 180)
	{
		printf("The person is Tall\n");
	}
	else if (height >= 170 && height < 180)
	{
		printf("The person is average height\n");
	}
	else
	{
		printf("The person is Dwarf\n");
	}

	return 0;
}

int Question8() {
	int num1, num2, num3;
	int first = 0, second = 0, third = 0;

	scanf_s("%d %d %d", &num1, &num2, &num3);

	if (num1 >= num2 && num1 >= num3)
	{
		printf("The 1st Number is the greatest among three\n");
	}
	else if (num2 >= num1 && num2 >= num3)
	{
		printf("The 2nd Number is the greatest among three\n");
	}
	else
	{
		printf("The 3rd Number is the greatest among three\n");
	}

	return 0;
}

int Question9() {
	int x, y;
	scanf_s("%d %d", &x, &y);

	if (x > 0 && y > 0)
	{
		printf("The coordinate point (%d,%d) lies in the First quadrant.\n", x, y);
	}
	else if (x < 0 && y > 0)
	{
		printf("The coordinate point (%d,%d) lies in the Second quadrant.\n", x, y);
	}
	else if (x < 0 && y < 0)
	{
		printf("The coordinate point (%d,%d) lies in the Third quadrant.\n", x, y);
	}
	else
	{
		printf("The coordinate point (%d,%d) lies in the Third quadrant.\n", x, y);
	}
}

int Question10() {
	int Math, Phy, Chem;

	printf("Eligibility Criteria :\n");
	printf("Marks in Maths >=65\n");
	printf(" Marks in Phy >=55\n");
	printf("Marks in Chem>=50\n");
	printf("Total in all three subject >=190\n");
	printf("Total in Maths and Physics >=140\n");
	printf("-------------------------------------\n");

	printf("Input the marks obtained in Physics :");
	scanf_s("%d", &Phy);
	printf("Input the marks obtained in Chemistry :");
	scanf_s("%d", &Chem);
	printf("Input the marks obtained in Mathematics :");
	scanf_s("%d", &Math);

	printf("Total marks of Maths, Physics and Chemistry : %d\n", Phy + Chem + Math);
	printf("Total marks of Maths and Physics : %d\n", Phy + Math);

	if (Math >= 65)
	{
		if (Phy >= 55)
		{
			if (Chem >= 50)
			{
				if ((Math + Phy + Chem) >= 190 || (Math + Phy) >= 140)
				{
					printf("The candidate is eligible for admission.\n");
				}
				else
				{
					printf("The candidate is not eligible.\n");
				}
			}
			else
			{
				printf("The candidate is not eligible.\n");
			}
		}
		else
		{
			printf("The candidate is not eligible.\n");
		}
	}
	else
	{
		printf("The candidate is not eligible.\n");
	}

	return 0;
}

int Question11() {
	int a, b, c;
	int x;

	scanf_s("%d %d %d", &a, &b, &c);

	x = (b * b) - (4 * a * c);

	if (x == 0)
	{
		printf("Both roots are equal.\n");
		printf("First and Second Root = %.2f", (double)(-b) / (2 * a));
		
	}
	else if (x > 0)
	{
		printf("Both roots are real and different\n");
		printf("First Root = %.2f\n", (double)((-b) + sqrt(b * b - (4 * a * c))) / 2 * a);
		printf("Second Root = %.2f\n", (double)((-b) - sqrt(b * b - (4 * a * c))) / 2 * a);
	}
	else
	{
		printf("Root are imaginary.\n");
		printf("No solution.\n");
	}

	return 0;
}

int Question12() {
	int stuNum, phy, chem, comapp;
	int total;
	double percent;
	char stuName[10];
	
	printf("Input the Roll Number of the student :");
	scanf_s("%d", &stuNum);

	printf("Input the Name of the Student :");
	scanf_s("%s", stuName, (int)sizeof(stuName));

	printf("Input the marks of Physics, Chemistry and Computer Application :");
	scanf_s("%d %d %d", &phy, &chem, &comapp);

total = phy + chem + comapp;
percent = (double)total / 3;
printf("Roll No : %d\n", stuNum);
printf("Name of Student : %s\n", stuName);
printf("Marks in Physics : %d\n", phy);
printf("Marks in Chemistry : %d\n", chem);
printf("Marks in Computer Application : %d\n", comapp);
printf("Total Marks = %d\n", total);
printf("Percentage = %.2f\n", percent);
if (percent >= 60)
{
	printf("Division = First\n");
}
else if (percent < 60 && percent >= 48)
{
	printf("Division = Second\n");
}
else if (percent < 48 && percent >= 36)
{
	printf("Division = Pass\n");
}
else
{
	printf("Division = Fail\n");
}

}

int Question13() {
	int temp;

	scanf_s("%d", &temp);

	if (temp >= 40)
	{
		printf("Its Very Hot\n");
	}
	else if (temp < 40 && temp >= 30)
	{
		printf("Its Hot\n");
	}
	else if (temp < 30 && temp >= 20)
	{
		printf("Normal in Temp\n");
	}
	else if (temp < 20 && temp >= 10)
	{
		printf("Cold weather\n");
	}
	else if (temp < 10 && temp >= 0)
	{
		printf("Very Cold weather\n");
	}
	else
	{
		printf("Freezing weather\n");
	}

	return 0;
}

int Question14() {
	int a, b, c;

	scanf_s("%d %d %d", &a, &b, &c);

	if (a == b && a == c && b == c)
	{
		printf("This is an Equilateral triangle\n");
	}
	else if (a == b || a == c || b == c)
	{
		printf("This is an Isosceles triangle\n");
	}
	else
	{
		printf("This is an Scalene triangle\n");
	}

	return 0;
}

int Question15() {
	int a, b, c;

	scanf_s("%d %d %d", &a, &b, &c);

	if (a + b + c == 180)
	{
		printf("The triangle is valid.\n");
	}
	else
	{
		printf("The triangle is not valid.\n");
	}

	return 0;
}

int Question16(){
	char ch;

	scanf_s(" %c", &ch);

	if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)
	{
		printf("This is an alpahbet.\n");
	}
	else
	{
		printf("This is a special character.\n");
	}

	return 0;
}

int Question17() {
	char ch;

	scanf_s("%c", &ch);

	if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
	{
		printf("The alphabet is a vowel.\n");
	}
	else if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
	{
		printf("The alphabet is a consonant.\n");
	}
	else
	{
		printf("This is not an alphabet.\n");
	}

	return 0;
}

int Question18() {
	int price, sellPrice;

	scanf_s("%d %d", &price, &sellPrice);

	if (price > sellPrice)
	{
		printf("You loss your profit amount : %d\n", sellPrice - price);
	}
	else if (price < sellPrice)
	{
		printf("You can booked your profit amount : %d\n", sellPrice - price);
	}
	else
	{
		printf("There are no profit nor loss\n");
	}
	return 0;
}

int Question19() {
	int id;
	char name[20];
	double unit, camount, samount = 0, namount;
	printf("id: ");
	scanf_s("%d", &id);
	printf("name: ");
	scanf_s("%s", name,(int)sizeof(name));
	printf("unit: ");
	scanf_s("%lf", &unit);

	printf("Customer IDNO :%d\n", id);
	printf("Customer Name :%s\n", name);
	if (unit >= 600)
	{
		camount = unit * 2.00;
	}
	else if (unit >= 400 && unit < 600)
	{
		camount = unit * 1.80;
	}
	else if (unit >= 200 && unit < 400)
	{
		camount = unit * 1.50;
	}
	else
	{
		camount = unit * 1.20;
	}

	if (camount > 400)
	{
		samount = camount * 0.15;
	}

	namount = camount + samount;

	if (namount < 100 )
	{
		namount = 100;
	}
	printf("Amount Charges @Rs. 2.00 per unit :%.2f\n", camount);
	printf("Surchage Amount : %.2f\n", samount);
	printf("Net Amount Paid By the Customer : %.2f\n", namount);

	return 0;

}

int Question20() {
	char grade;
	
	printf("Input the grade :");
	scanf_s(" %c", &grade);

	switch (grade)
	{
	case 'E':
		printf("You have chosen : Excellent\n");
		break;
	case 'V':
		printf("You have chosen : Very Good\n");
		break;
	case 'G':
		printf("You have chosen : Good\n");
		break;
	case 'A':
		printf("You have chosen : Average\n");
		break;
	case 'F':
		printf("You have chosen : Fail\n");
		break;
	default:
		printf("Not available\n");
		break;
	}
	return 0;
}

int Question21() {
	int week;

	scanf_s("%d", &week);

	switch (week)
	{
	case 1:
		printf("Monday\n");
		break;
	case 2:
		printf("Tuesday\n");
		break;
	case 3:
		printf("Wednesday\n");
		break;
	case 4:
		printf("Thursday\n");
		break;
	case 5:
		printf("Friday\n");
		break;
	case 6:
		printf("Saturday\n");
		break;
	case 7:
		printf("Sunday\n");
		break;
	default:
		printf("Not available\n");
		break;
	}
	return 0;
}

int Question22() {
	int number;

	scanf_s("%d", &number);

	switch (number)
	{
	case 1:
		printf("One\n");
		break;
	case 2:
		printf("Two\n");
		break;
	case 3:
		printf("Three\n");
		break;
	case 4:
		printf("Four\n");
		break;
	case 5:
		printf("Five\n");
		break;
	case 6:
		printf("Six\n");
		break;
	case 7:
		printf("Seven\n");
		break;
	case 8:
		printf("Eight\n");
		break;
	case 9:
		printf("Nine\n");
		break;
	default:
		printf("Not available\n");
		break;
	}
	return 0;
}

int Question23() {
	int month;

	scanf_s("%d", &month);

	switch (month)
	{
	case 1:
		printf("January\n");
		break;
	case 2:
		printf("Feburary\n");
		break;
	case 3:
		printf("March\n");
		break;
	case 4:
		printf("April\n");
		break;
	case 5:
		printf("May\n");
		break;
	case 6:
		printf("June\n");
		break;
	case 7:
		printf("July\n");
		break;
	case 8:
		printf("August\n");
		break;
	case 9:
		printf("September\n");
		break;
	case 10:
		printf("Octover\n");
		break;
	case 11:
		printf("November\n");
		break;
	case 12:
		printf("December\n");
		break;
	default:
		printf("Not available\n");
		break;
	}
	return 0;
}

int Question24() {
	int month;

	scanf_s("%d", &month);

	switch (month)
	{
	case 1:
		printf("Month have 31 days\n");
		break;
	case 2:
		printf("Month have 28 or 29 days\n");
		break;
	case 3:
		printf("Month have 31 days\n");
		break;
	case 4:
		printf("Month have 30 days\n");
		break;
	case 5:
		printf("Month have 31 days\n");
		break;
	case 6:
		printf("Month have 30 days\n");
		break;
	case 7:
		printf("Month have 31 days\n");
		break;
	case 8:
		printf("Month have 31 days\n");
		break;
	case 9:
		printf("Month have 30 days\n");
		break;
	case 10:
		printf("Month have 31 days\n");
		break;
	case 11:
		printf("Month have 30 days\n");
		break;
	case 12:
		printf("Month have 31 days\n");
		break;
	default:
		printf("Not available\n");
		break;
	}
	return 0;
}

int Question25() {
	int shape;
	double length, height, radius;

	printf("1: circle\n2: Triangle\n3: Square\n");
	printf("Choose your geometrical shape: ");
	scanf_s("%d", &shape);

	switch (shape)
	{
	case 1:
		printf("Input circle`s radius: ");
		scanf_s("%lf", &radius);
		printf("The area is : %f\n", 3.1415 * radius * radius);
		break;
	case 2:
		printf("Input length and height");
		scanf_s("%lf %lf", &length, &height);
		printf("The area is : %f\n", 0.5 * length * height);
		break;
	case 3:
		printf("Input length and height");
		scanf_s("%lf %lf", &length, &height);
		printf("The area is : %f\n", length * height);
		break;
	default:
		break;
	}
}

int Question26() {
	int num1, num2;
	int calc;

	printf("Insert two numbers: ");
	scanf_s("%d %d", &num1, &num2);
	printf("1: Sum\n2: Subtraction\n3: Multiplication\n4: Division\n");
	scanf_s("%d", &calc);

	switch (calc)
	{
	case 1:
		printf("The Sum of %d and %d is: %d", num1, num2, num1 + num2);
		break;
	case 2:
		printf("The Subtraction of %d and %d is: %d", num1, num2, num1 - num2);
		break;
	case 3:
		printf("The Multiplication  of %d and %d is: %d", num1, num2, num1 * num2);
		break;
	case 4:
		printf("The Division of %d and %d is: %.2f", num1, num2, (double)num1 / num2);
		break;
	default:
		break;
	}
}