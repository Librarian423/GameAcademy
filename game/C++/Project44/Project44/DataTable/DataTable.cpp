#include "DataTable.h"

int DataTable::TotalTypes = 1;

DataTable::DataTable(Types t)
	:type(t){}

DataTable::DataTable(const DataTable& ref)
{

}

DataTable::~DataTable()
{

}

DataTable& DataTable::operator=(const DataTable& ref)
{
	return *this;
}