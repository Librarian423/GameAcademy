#include <iostream>
#include "Rectangle.h"
#include "Square.h"
#include "Book.h"
#include "EBook.h"

using namespace std;

int main()
{
	/*Rectangle rec(4, 3);
	rec.ShowAreaInfo();

	Square sqr(7);
	sqr.ShowAreaInfo();

	Square sqr2(rec);
	sqr2.ShowAreaInfo();*/

	Book book("좋은 C++", "555-1234-890-0", 20000);
	book.ShowBookInfo();
	cout << endl;

	EBook ebook("좋은 C++ ebook", "555-1234-890-1", 10000, "fdx9w0i8kiw");
	ebook.ShowBookInfo();
	cout << endl;

	EBook ebook1(book, "fdx9w0i8kiw");
	ebook1.ShowBookInfo();
	cout << endl;

	return 0;
}