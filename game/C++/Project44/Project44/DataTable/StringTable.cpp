#include <vector>
#include <string>
#include "StringTable.h"
#include "../3rd/rapidcsv.h"

using namespace std;

StringTable::StringTable()
	:DataTable(Types::String), currentLang(Languages::KOR) { }

StringTable::~StringTable()
{
}

void StringTable::SetLanguage(Languages lang)
{
	currentLang = lang;
}

const string& StringTable::Get(const string& id)
{
	return Get(currentLang, id);
}

const string& StringTable::Get(Languages lang, const string& id)
{
	auto table = tables[lang];
	auto find = table->find(id);
	if ( find == table->end() )
	{
		return "Undefined ID";
	}
	return find->second;
}


void StringTable::Release()
{
	for ( auto pair : tables )
	{
		delete pair.second;
	}
	tables.clear();
}

bool StringTable::Load(const string& path)
{
	Release();

	rapidcsv::Document doc(path, rapidcsv::LabelParams(0, -1));

	/*vector<string> row = doc.GetRow<string>(0);

	for ( const auto& str : row )
	{
		cout << str << " ";
	}*/

	for ( int i = 0; i < (int)Languages::COUNT; i++ )
	{
		auto table = new map<string, string>();
		tables.insert({ (Languages)i, table });
		
		auto keys = doc.GetColumn<string>(0);
		auto values = doc.GetColumn<string>(i + 1);

		for ( int j = 0; j < doc.GetRowCount(); j++ )
		{
			if ( table->find(keys[j]) != table->end() )
			{
				return false;
			}
			table->insert({ keys[j],values[j] });
		}
	}

	for ( auto pair : tables )
	{
		for ( auto pair2 : *pair.second )
		{
			cout << pair2.first << " " << pair2.second << endl;
		}
	}
	cout << endl;
	return false;

}
