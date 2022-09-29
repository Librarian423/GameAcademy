#pragma once
#include "DataTable.h"
#include <map>

using namespace std;

//map<언어, map<...>>
	//map<아이디, 문자열>

enum class Languages
{
	KOR,
	ENG,
	JPN,
	COUNT,
};

class StringTable : public DataTable
{
public:
	StringTable();
	virtual ~StringTable();

	void SetLanguage(Languages lang);

	const string& Get(const string& id);
	const string& Get(Languages lang, const string& id);

	virtual void Release();
	virtual bool Load(const string& path);

private:
	map<Languages, map<string, string>*> tables;
	Languages currentLang;
};

