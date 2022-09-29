#include <iostream>
#include <cstring>
#include "NameCard.h"

using namespace std;

void NameCard::ShowNameCardInfo()
{
	cout << "이름: " << name << endl;
	cout << "회사: " << compName << endl;
	cout << "전화번호: " << phoneNum << endl;
	cout << "직급: " << GetPosition(position) << endl;
	cout << endl;
}

const char* NameCard::GetPosition(COMP_POS num)
{
	const char* ptr = "";
	switch ( num )
	{
	case COMP_POS::CLERK:
		ptr = "사원";
		break;
	case COMP_POS::SENIOR:
		ptr = "주임";
		break;
	case COMP_POS::ASSIST:
		ptr = "대리";
		break;
	case COMP_POS::MANAGER:
		ptr = "과장";
		break;
	default:
		break;
	}
	return ptr;
}

NameCard::NameCard()
	:name(nullptr), compName(nullptr), phoneNum(nullptr), position(COMP_POS::CLERK){}

NameCard::NameCard(NameCard& namcard)
	:position(namcard.position)
{
	name = new char[strlen(namcard.name) + 1];
	strcpy_s(name, strlen(namcard.name) + 1, namcard.name);

	compName = new char[strlen(namcard.compName) + 1];
	strcpy_s(compName, strlen(namcard.compName) + 1, namcard.compName);

	phoneNum = new char[strlen(namcard.phoneNum) + 1];
	strcpy_s(phoneNum, strlen(namcard.phoneNum) + 1, namcard.phoneNum);
}

NameCard::NameCard(const char* n, const char* cn, const char* pn, COMP_POS pos)
	:name(nullptr), compName(nullptr), phoneNum(nullptr)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n)+1, n);
	
	compName = new char[strlen(cn) + 1];
	strcpy_s(compName, strlen(cn) + 1, cn);

	phoneNum = new char[strlen(pn) + 1];
	strcpy_s(phoneNum, strlen(pn) + 1, pn);

	position = pos;
}

NameCard::~NameCard()
{
	if ( name != nullptr )
	{
		delete[]name;
	}
	if ( compName != nullptr )
	{
		delete[]compName;
	}
	if ( phoneNum != nullptr )
	{
		delete[]phoneNum;
	}
}