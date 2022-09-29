#pragma once
#include <cstring>
#include "Book.h"

class Ebook : public Book
{
private:
    char* DRMKey;

public:
    Ebook(const char* title, const char* isbn, int price, const char* key);
    Ebook(const Book& book);
    Ebook(const Ebook& ebook);
    virtual ~Ebook();

    void ShowEBookInfo();
    Ebook& operator=(const Ebook& ref)
    {
        Book::operator=(ref);

        delete []DRMKey;

        DRMKey = new char[strlen(ref.DRMKey) + 1];
        strcpy_s(DRMKey, strlen(ref.DRMKey) + 1, ref.DRMKey);
        
        return *this;
    }
   
};
