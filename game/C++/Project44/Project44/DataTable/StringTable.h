#pragma once
#include "DataTable.h"
#include <map>

using namespace std;

//map<���, map<...>>
	//map<���̵�, ���ڿ�>

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

