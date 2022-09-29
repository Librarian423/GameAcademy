#include <iostream>
#include"Book.h"

using namespace std;

Book::Book()
	:price(0)
{
	title = new char[2];
	isbn = new char[2];

	strcpy_s(title, sizeof(char[2]), "0");
	strcpy_s(isbn, sizeof(char[2]), "0");
}

Book::Book(const char* title, const char* isbn, const int price)
	:price(price)
{
	this->title = new char[strlen(title) + 1];
	this->isbn = new char[strlen(isbn) + 1];

	strcpy_s(this->title, strlen(title) + 1, title);
	strcpy_s(this->isbn, strlen(isbn) + 1, isbn);
}

Book::Book(Book& book)
	:price(book.price)
{
	this->title = new char[strlen(book.title) + 1];
	this->isbn = new char[strlen(book.isbn) + 1];

	strcpy_s(this->title, strlen(book.title) + 1, book.title);
	strcpy_s(this->isbn, strlen(book.isbn) + 1, book.isbn);
}


Book::~Book()
{
	delete []title;
	delete []isbn;
}

void Book::ShowBookInfo()
{
	cout << "제목: " << title << endl;
	cout << "ISBN: " << isbn << endl;
	cout << "가격: " << price << endl;
}