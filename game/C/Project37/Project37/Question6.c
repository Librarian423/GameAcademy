#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int run(Telephone* ptr, int input)
{
	int num;
	int i = input;
	int run = 1;

	while ( run == 1 )
	{
		printf("*****MENU*****\n");
		printf("1. Insert\n2. Delete\n3. Search\n4. Print All\n5. Exit\n");
		printf("Choose the item: ");

		scanf_s("%d", &num);

		switch ( num )
		{
		case 1:
			i = insert(ptr, i);
			break;
		case 2:
			i = del(ptr, i);;
			break;
		case 3:
			search(ptr, i);
			break;
		case 4:
			printall(ptr, i);
			break;
		case 5:
			run--;
			printf("[ Exit ]\n");
			break;
		default:
			printf("Wrong input\n");
			break;
		}
	}
	return i;
}

int insert(Telephone *ptr, int p)
{
	printf("[ INSERT ]\n");
	
	printf("Input Name: ");
	scanf_s("%s", ptr[p].name, (unsigned int)sizeof(ptr[p].name));
	
	printf("Input Tel Number: ");
	scanf_s("%s", ptr[p].phone, (unsigned int)sizeof(ptr[p].phone));
	printf("\tData Inserted\n");

	return p += 1;
}

int del(Telephone* ptr, int p)
{
	char temp[100] = { 0 };
	int check = 0;
	int len = p;
	
	printf("[ Delete ]\n");
	if ( p == 0 )
	{
		printf("There Are No Data\n");
		return 0;
	}

	printf("Input Name: ");
	scanf_s("%s", temp, (unsigned int)_countof(temp));
	
	for ( int i = 0; i < len; i++ )
	{
		if ( strcmp(ptr[i].name, temp) == 0 )
		{
			printf("Delete\n");
			for ( int j = i; j < len - 1; j++ )
			{
				printf("for Delete1\n");
				strcpy_s(ptr[j].name, (unsigned int)_countof(ptr[j].name), ptr[j + 1].name);
				printf("for Delete2\n");
				strcpy_s(ptr[j].phone, (unsigned int)_countof(ptr[j].phone), ptr[j + 1].phone);
			}
			p -= 1;
			check++;
		}
	}
	if ( check == 0 )
	{
		printf("No name on list\n");
	}
	return p;
}

void search(const Telephone* ptr, const int p)
{
	char temp[100] = { 0 };
	int check = 0;

	printf("[ Search ]\n");
	if ( p == 0 )
	{
		printf("There Are No Data\n");
		return;
	}
	
	printf("Input Name: ");
	scanf_s("%s", temp, (unsigned int)_countof(temp));

	for ( int i = 0; i < p; i++ )
	{
		if ( strcmp(ptr[i].name, temp) == 0 )
		{
			printf("Data Searched\n");
			printf("Name: %s\n", ptr[i].name);
			printf("Tel Number: %s\n", ptr[i].phone);
			check++;
		}
	}
	if ( check == 0 )
	{
		printf("No Data Found\n");
	}
}

void printall(const Telephone* ptr, const int p)
{
	printf("[ Print All Data ]\n");
	if ( p == 0 )
	{
		printf("There Are No Data\n");
		return;
	}

	for ( int i = 0; i < p; i++ )
	{
		printf("Name: %s\t", ptr[i].name);
		printf("Tel Number: %s\n", ptr[i].phone);
	}
}


void Question6()
{
	int len;
	int start = 0;
	Telephone* arr = (Telephone*)malloc(sizeof(Telephone) * 500);
	len = run(arr, start);

	if ( len != 0 )
	{
		writeFile(arr, len);
	}
	
	free(arr);
}