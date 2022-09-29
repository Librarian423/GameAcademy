#include "MyString.h"
#include <iostream>
#include <cstring>

using namespace mine;

string::string()
	:buffer(nullptr), length(1)
{
	buffer = new char[1];
	buffer[0] = '\0';
}

string::string(const char* str)
	:buffer(nullptr), length(0)
{
	if ( str == nullptr )
	{
		return;
	}
	length = strlen(str) + 1;
	buffer = new char[length];
	strcpy_s(buffer, length, str);
}

string::string(const string& str)
	:buffer(nullptr), length(0)
{
	if ( str.buffer == nullptr )
	{
		return;
	}
	length = str.length;
	buffer = new char[length];
	strcpy_s(buffer, length, str.buffer);
}

string::~string()
{
	if ( buffer != NULL )
	{
		delete[]buffer;
	}
}

std::ostream& mine::operator<<(std::ostream& os, const string& str)
{
	return os << str.buffer;
}

std::istream& mine::operator>>(std::istream& is, string& str)
{
	char temp[1024];

	is >> temp;
	str = string(temp);

	return is;

}

