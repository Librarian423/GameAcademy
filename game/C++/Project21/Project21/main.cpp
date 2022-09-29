// Book 클래스와 Ebook 클래스를 정의하라.
// Ebook is a Book
// 

#include <iostream>
#include "Book.h"
#include "Ebook.h"

int main(void)
{
    Book book("줗은 C++", "555-12345-890-0", 20000);
    book.ShowBookInfo();
    std::cout << std::endl;

    Ebook ebook("좋은 C++ ebook", "555-1234-890-1", 10000, "fdx9w0i8kiw");
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

// 결과
// 제목: 좋은 C++
// ISBN: 555-12345-890-0
// 가격: 20000
//
// 제목: 줗은 C++ ebook
// ISBN: 555-12345-890-1
// 가격: 10000
// 인증키: fdx9w0i8kiw
// 