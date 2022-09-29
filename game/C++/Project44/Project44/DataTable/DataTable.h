#pragma once
#include <string>
using namespace std;

class DataTable
{
public:
	enum class Types
	{
		String
	};
public:
	static int TotalTypes;

	DataTable(Types t);
	virtual ~DataTable();

	virtual void Release() = 0;
	virtual bool Load(const string& path) = 0;

private:
	Types type;
	DataTable(const DataTable& ref);
	DataTable& operator=(const DataTable& ref);
};
