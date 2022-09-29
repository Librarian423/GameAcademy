#pragma once
#include "Book.h"

class EBook :public Book
{
public:
	void ShowBookInfo();

	EBook();
	EBook(const char* title, const char* isbn, const int price, const char* DRMkey);
	EBook(Book &book, const char* DRMkey);
	~EBook();

private:
	char* DRMkey;
};
