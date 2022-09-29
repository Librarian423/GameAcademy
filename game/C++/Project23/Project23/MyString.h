#pragma once
#include <cstring>
#include <iostream>

namespace mine
{
	class string
	{
	public:
		string();
		string(const char* str);
		string(const string& str);
		~string();

		string& operator=(const string& str)
		{
			if ( buffer != NULL )
			{
				delete[]buffer;
			}
			length = str.length;
			buffer = new char[length];

			strcpy_s(buffer, length, str.buffer);

			return *this;
		}

		string operator+(const string& str)
		{
			char* temp;
			temp = new char[length + str.length - 1];
			strcpy_s(temp, length, buffer);
			strcat_s(temp, length + str.length - 1, str.buffer);

			string strTemp(temp);
			delete[]temp;

			return strTemp;
		}

		string& operator +=(const string& str)
		{
			length += (str.length - 1);
			char* temp = new char[length];

			strcpy_s(temp, length, buffer);
			strcat_s(temp, length, str.buffer);

			if ( buffer != NULL )
			{
				delete []buffer;
			}

			buffer = temp;

			return *this;
		}

		bool operator==(const string& str)
		{
			if ( strcmp(buffer, str.buffer) )
			{
				return false;
			}
			else
			{
				return true;
			}
		}

		friend std::ostream& operator<<(std::ostream& os, const string& str);
		friend std::istream& operator>>(std::istream& is, string& str);
		
	private:
		char* buffer;
		int length;
	};
}