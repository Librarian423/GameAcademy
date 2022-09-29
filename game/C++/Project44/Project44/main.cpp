#include <iostream>
#include "DataTable/DataTableMgr.h"
#include "DataTable/StringTable.h"

using namespace std;

int main()
{
	auto mgr = DataTableMgr::GetInstance();
	auto stringTable = mgr->Get<StringTable>(DataTable::Types::String);
	//StringTable stringTable;
	stringTable->Load("StringTable.csv");

	cout << stringTable->Get("HI") << endl;
	cout << stringTable->Get("YOU DIE") << endl;

	stringTable->SetLanguage(Languages::ENG);

	cout << stringTable->Get("HI") << endl;
	cout << stringTable->Get("YOU DIE") << endl;


	stringTable->SetLanguage(Languages::JPN);

	cout << stringTable->Get("HI") << endl;
	cout << stringTable->Get("YOU DIE") << endl;
	
	return 0;
}