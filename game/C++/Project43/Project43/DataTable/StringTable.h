#pragma once
#include "DataTable.h"
#include <map>
#include <vector>

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
	//const string& Get(Languages lang, const string& id);

	virtual void Release();
	virtual bool Load();

	vector<string> fileName;
	
private:
	map<string, string> tables;
	Languages currentLang;
};

