#pragma once

class Book
{
public:
	void ShowBookInfo();

	Book();
	Book(const char* title, const char* isbn, const int price);
	Book(Book& book);
	~Book();
	
private:
	char* title;
	char* isbn;
	int price;
};