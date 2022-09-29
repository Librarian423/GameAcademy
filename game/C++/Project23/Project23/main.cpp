#include <iostream>
#include "MyString.h"
using namespace mine;

int main(void)
{
	string str1 = "I like ";
	string str2 = "string class";
	string str3 = str1 + str2;
	string str5;
	string str6;
	string str7 = str5 + str6;

	std::cout << str1 << std::endl;
	std::cout << str2 << std::endl;
	std::cout << str3 << std::endl;
	std::cout << str6;
	std::cout << str7 << std::endl;
	
	str1 += str2;
	if ( str1 == str3 )
		std::cout << "동일 문자열!" << std::endl;
	else
		std::cout << "동일하지 않은 문자열!" << std::endl;

	string str4;
	std::cout << "문자열 입력: ";
	std::cin >> str4;
	std::cout << "입력한 문자열: " << str4 << std::endl;

	return 0;
}