#include "Ebook.h"
#include <iostream>
#include <cstring>

using namespace std;

Ebook::Ebook(const char* title, const char* isbn, int price, const char* key)
    : Book(title, isbn, price)
{
    DRMKey = new char[strlen(key) + 1];
    strcpy_s(this->DRMKey, strlen(key) + 1, key);
}

Ebook::Ebook(const Book& book)
    :Book(book), DRMKey(nullptr) {}

Ebook::Ebook(const Ebook& ebook)
    :Book(ebook)
{
    DRMKey = new char[strlen(ebook.DRMKey) + 1];
    strcpy_s(this->DRMKey, strlen(ebook.DRMKey) + 1, ebook.DRMKey);
}

Ebook::~Ebook()
{
    delete[] DRMKey;
}
void Ebook::ShowEBookInfo()
{
    ShowBookInfo();
    if ( DRMKey == nullptr )
    {
        cout << "ÀÎÁõÅ°: " << DRMKey << endl;
    }
}

