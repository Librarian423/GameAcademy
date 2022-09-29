#pragma once
#include "DataTable.h"
#include <map>
#include <string>

enum class ItemType
{
	Weapone,
	Armor,
	COUNT,
};

struct itemInfo
{
	string id;
	string nameId;
	string descId;
	ItemType type;
	int cost;

	string GetName() const;
	string GetDesc() const;
};

class ItemTable : public DataTable
{
public:
	ItemTable();
	virtual ~ItemTable();

	//void SetId(const string id);

	const itemInfo* Get(string id);

	virtual void Release() override;
	virtual bool Load() override;
private:
	map<string, itemInfo* > itemTables;
	//string currentId;
};

