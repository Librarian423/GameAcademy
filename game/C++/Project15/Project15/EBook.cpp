#include <iostream>
#include "EBook.h"

using namespace std;


EBook::EBook()
{
	DRMkey = new char[2];

	strcpy_s(DRMkey, sizeof(char[2]), "0");
}

EBook::EBook(const char* title, const char* isbn, const int price, const char* DRMkey)
	:Book(title, isbn, price)
{
	this->DRMkey = new char[strlen(DRMkey) + 1];

	strcpy_s(this->DRMkey, strlen(DRMkey) + 1, DRMkey);
}

EBook::EBook(Book& book, const char* DRMkey)
	:Book(book)
{
	this->DRMkey = new char[strlen(DRMkey) + 1];

	strcpy_s(this->DRMkey, strlen(DRMkey) + 1, DRMkey);
}

EBook::~EBook()
{
	delete []DRMkey;
}

void EBook::ShowBookInfo()
{
	Book::ShowBookInfo();
	cout << "ÀÎÁõÅ°: " << DRMkey << endl;
}