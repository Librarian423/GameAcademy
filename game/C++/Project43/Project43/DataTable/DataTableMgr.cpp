#include "DataTableMgr.h"
#include "StringTable.h"
#include "ItemTable.h"

DataTableMgr::DataTableMgr()
{
	Init();
}

DataTableMgr::~DataTableMgr()
{
	Release();
}

void DataTableMgr::Init()
{
	DataTable* table = new StringTable();
	table->Load();
	tables.insert({ DataTable::Types::String, table });

	table = new ItemTable();
	table->Load();
	tables.insert({ DataTable::Types::Item, table });
}

void DataTableMgr::Release()
{
	for ( auto pair : tables )
	{
		delete pair.second;
	}
	tables.clear();
}

