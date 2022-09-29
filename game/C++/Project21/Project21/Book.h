#pragma once
#include <cstring>

class Book
{
private:
    char* title;
    char* isbn;
    int price;

public:
    Book(const char* title, const char* isbn, int price);
    Book(const Book& book);
    virtual ~Book();

    void ShowBookInfo();
    Book& operator=(const Book& ref)
    {
        delete[]title;
        delete[]isbn;

        title = new char[strlen(ref.title) + 1];
        isbn = new char[strlen(ref.isbn) + 1];

        strcpy_s(title, strlen(ref.title) + 1, ref.title);
        strcpy_s(isbn, strlen(ref.isbn) + 1, ref.isbn);
        price = ref.price;

        return *this;
    }
   
};
