// Book Ŭ������ Ebook Ŭ������ �����϶�.
// Ebook is a Book
// 

#include <iostream>
#include "Book.h"
#include "Ebook.h"

int main(void)
{
    Book book("�G�� C++", "555-12345-890-0", 20000);
    book.ShowBookInfo();
    std::cout << std::endl;

    Ebook ebook("���� C++ ebook", "555-1234-890-1", 10000, "fdx9w0i8kiw");
    ebook.ShowEBookInfo();
    std::cout << std::endl;

    Ebook ebook2 = ebook;
    ebook2.ShowEBookInfo();
    std::cout << std::endl;

    ebook = ebook2;
    ebook.ShowEBookInfo();
    std::cout << std::endl;

    return 0;
}

// ���
// ����: ���� C++
// ISBN: 555-12345-890-0
// ����: 20000
//
// ����: �G�� C++ ebook
// ISBN: 555-12345-890-1
// ����: 10000
// ����Ű: fdx9w0i8kiw
// 