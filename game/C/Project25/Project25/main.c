#include <stdio.h>

//문제 2번
void SimpleFuncOne(int *arr1, int arr2[])
{

}

void SimpleFuncTwo(int(*arr3)[4], int arr4[][4])
{

}

//문제 3번
void ComplexFuncOne(int* arr1[], int* arr2[][5])
{

}

void ComplexFuncTwo(int** arr3[], int*** arr4[][5])
{

}


int main()
{
	//문제 1번
	int num1 = 1, num2 = 2, num3 = 3, num4 = 4, num5 = 5;
	int* arr1[5]={&num1,&num2, &num3, &num4, &num5};
	int* arr2[3][5]= { &num1,&num2, &num3, &num4, &num5 };

	int** ptr1 = arr1;
	int *(* ptr2)[5] = arr2;
	printf("%d", **ptr1);
	printf("%d", *(*ptr2[0]));

	//문제 2번
	/*
	int arr1[3];
	int arr2[4];
	int arr3[3][4];
	int arr4[2][4];

	SimpleFuncOne(arr1, arr2);
	SimpleFuncTwo(arr3, arr4);
	*/

	//문제 3번
	/*
	int* arr1[3];
	int* arr2[3][5];
	int** arr3[5];
	int*** arr4[3][5];

	SimpleFuncOne(arr1, arr2);
	SimpleFuncTwo(arr3, arr4);
	*/

	//문제 4번
	//3 2
	//6 4
	//5 2
	//1 1

	//문제 5번
	int arr[2][2][2] = { 1,2,3,4,5,9,7,8 };
	printf("%d \n", (*(arr[1]))[1]);
	//*(arr[1][0]+1)
	//(*(arr + 1)[0])[1]
	//(*(arr[1]))[1]
	//*(*(arr + 1)[0] + 1)
	//*(*(*(arr + 1)) + 1)
	
	

	return 0;
}

