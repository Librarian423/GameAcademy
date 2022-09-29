#include <iostream>
#include "DataTable/DataTableMgr.h"
#include "DataTable/StringTable.h"
#include "DataTable/ItemTable.h"
using namespace std;

int main()
{
	auto mgr = DataTableMgr::GetInstance();
	auto stringTable = mgr->Get<StringTable>(DataTable::Types::String);
	auto itemgTable = mgr->Get<ItemTable>(DataTable::Types::Item);

	stringTable->SetLanguage(Languages::KOR);
	auto info = itemgTable->Get("AXE00");

	cout << info->GetName() << endl;
	cout << info->GetDesc() << endl;
	//cout << stringTable->Get("YOU DIE") << endl;
	
	/*stringTable->SetLanguage(Languages::ENG);
	cout << stringTable->Get("HELLO") << endl;
	cout << stringTable->Get("YOU DIE") << endl;
	cout << stringTable->Get("AXE00_NAME") << endl;

	stringTable->SetLanguage(Languages::JPN);
	cout << stringTable->Get("HELLO") << endl;
	cout << stringTable->Get("YOU DIE") << endl;
	cout << stringTable->Get("AXE00_NAME") << endl;*/

	return 0;
}