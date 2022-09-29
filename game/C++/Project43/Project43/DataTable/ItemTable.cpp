#include "ItemTable.h"
#include "../3rd/rapidcsv.h"
#include "DataTableMgr.h"
#include "DataTable.h"
#include "StringTable.h"

ItemTable::ItemTable()
	:DataTable(Types::Item){}

ItemTable::~ItemTable()
{
	Release();
}

const itemInfo* ItemTable::Get(string id)
{
	auto it = itemTables.find(id);
	if ( it == itemTables.end() )
	{
		return nullptr;
	}
	return it->second;
}

void ItemTable::Release()
{
	for ( auto pair : itemTables )
	{
		delete pair.second;
	}
	itemTables.clear();
}

bool ItemTable::Load()
{
	Release();

	rapidcsv::Document doc("ItemTable.csv", rapidcsv::LabelParams(0, -1));
	auto ids = doc.GetColumn<string>(0);
	auto names = doc.GetColumn<string>(1);
	auto decs = doc.GetColumn<string>(2);
	auto types = doc.GetColumn<int>(3);
	auto costs = doc.GetColumn<int>(4);

	for ( int i = 0; i < doc.GetRowCount(); i++ )
	{
		auto info = new itemInfo
		{
			ids[i],
			names[i],
			decs[i],
			(ItemType)types[i],
			costs[i],
		};
		if ( itemTables.find(info->id) != itemTables.end() )
		{
			return false;
		}
		itemTables[info->id] = info;
	}
	return true;
}

string itemInfo::GetName() const
{
	auto mgr = DataTableMgr::GetInstance();
	auto table = mgr->Get<StringTable>(DataTable::Types::String);
	return table->Get(nameId);
}

string itemInfo::GetDesc() const
{
	auto mgr = DataTableMgr::GetInstance();
	auto table = mgr->Get<StringTable>(DataTable::Types::String);
	return table->Get(descId);
}
