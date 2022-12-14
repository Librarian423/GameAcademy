#pragma once
#include <map>
#include "../Singleton.h"
#include "DataTable.h"

using namespace std;

class DataTableMgr :public Singleton<DataTableMgr>
{
public:
	DataTableMgr();
	~DataTableMgr();

	void Init();
	void Release();

	template<typename T>
	T* Get(DataTable::Types type);

private:
	map<DataTable::Types, DataTable*> tables;

	DataTableMgr(const DataTableMgr& ref);
	DataTableMgr& operator=(const DataTableMgr& ref);
};

template<typename T>
inline T* DataTableMgr::Get(DataTable::Types type)
{
	auto find = tables.find(type);
	if ( find == tables.end() )
	{
		return nullptr;
	}
	return dynamic_cast<T*>(find->second);
}