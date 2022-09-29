#include <vector>
#include <string>
#include "StringTable.h"
#include "../3rd/rapidcsv.h"

using namespace std;

StringTable::StringTable()
	:DataTable(Types::String), currentLang(Languages::KOR)
{
	fileName.push_back("StringTable_Kor.csv");
	fileName.push_back("StringTable_Eng.csv"); 
	fileName.push_back("StringTable_Jpn.csv");
}

StringTable::~StringTable()
{
}

void StringTable::SetLanguage(Languages lang)
{
	Release();

	currentLang = lang;
	rapidcsv::Document doc(/*fileNames[i]*/fileName[(int)currentLang], rapidcsv::LabelParams(0, -1));
	vector<string> keys = doc.GetColumn<string>(0); //id
	vector<string> values = doc.GetColumn<string>(1); //string

	for ( int j = 0; j < doc.GetRowCount(); j++ )
	{
		if ( tables.find(keys[j]) != tables.end() )
		{
			return;
		}
		tables.insert({ keys[j],values[j] });
	}
}

const string& StringTable::Get(const string& id)
{
	auto find = tables.find(id);
		
	if ( find == tables.end() )
	{
		return "Undefined ID";
	}
	return find->second;
}

//const string& StringTable::Get(Languages lang, const string& id)
//{
//	auto table = tables[lang];
//	auto find = table->find(id);
//	
//	if ( find == table->end() )
//	{
//		return "Undefined ID";
//	}
//	return find->second;
//}


void StringTable::Release()
{
	tables.clear();
}

bool StringTable::Load()
{
	SetLanguage(currentLang);
	return true;
}

