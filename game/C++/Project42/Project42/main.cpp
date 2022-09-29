#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <list>
using namespace std;

struct PersonInfo
{
	string name;
	vector<string> phones;

};

ostream& operator<<(ostream& os, const PersonInfo& info)
{
	cout << info.name << " ";
	for ( const auto& phone : info.phones )
	{
		cout << phone << " ";
	}
	return os;
}

bool Valid(const string& ref)
{
	//11 숫자 채크
	if ( ref.size() != 11 )
	{
		return false;
	}
	for ( auto ch: ref)
	{
		if ( !isdigit(ch) )
		{
			return false;
		}
	}
	return true;
}

string Format(const string& ref)
{
	return ref.substr(0, 3) + "-" + ref.substr(3, 4) + "-" + ref.substr(7);
}

int main()
{
	string fileName;
	cout << "input file name: ";
	cin >> fileName;
	cout << endl;
	ifstream ifs(fileName);
	if ( !ifs )
	{
		return -1;
	}
	vector<PersonInfo> people;
	
	string line;
	while ( getline(ifs, line) )
	{
		PersonInfo info;
		istringstream iss(line);

		iss >> info.name;

		string phone;
		while ( iss >> phone )
		{
			info.phones.push_back(phone);
		}
		people.push_back(info);
	}
	list<string> WrongNumbers;
	for ( const auto& info : people )
	{
		ostringstream formmated;
		ostringstream wrongNumber;
		for ( const string& phone : info.phones )
		{
			if ( Valid(phone) )
			{
				formmated << " " << Format(phone);
			}
			else
			{
				wrongNumber << " " << phone;
			}
		}
		if ( formmated.str().size() > 0 )
		{
			cout << info.name << " " << formmated.str() << endl;
		}
		if ( wrongNumber.str().size() > 0 )
		{
			WrongNumbers.push_back(info.name + wrongNumber.str());
		}
		
	}
	cout << endl;
	cout << "=====Invalid Numbers=====" << endl;
	for ( const auto& info : WrongNumbers )
	{
		cout << info << endl;
		
	}
	//sstream2.txt
	return 0;
}