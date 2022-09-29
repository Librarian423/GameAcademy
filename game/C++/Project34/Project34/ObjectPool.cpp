#include <iostream>
#include "ObjectPool.h"

using namespace std;

ObjectPool::ObjectPool()
{
	Init();
}
ObjectPool::~ObjectPool()
{
	Release();
}

void ObjectPool::Init(int cacheSize)
{
	int count = (int)PooledObjectTypes::Count;

	for ( int i = 0; i < count; i++ )
	{
		unuse.push_back(new list<PooledObject*>());
		use.push_back(new list<PooledObject*>());

		auto type = (PooledObjectTypes)i;
		auto& list = unuse[i];

		switch ( type )
		{
		case PooledObjectTypes::AType:
			for ( int j = 0; j < cacheSize; j++ )
			{
				list->push_back(new PooledObjectAA());
			}
			break;
		case PooledObjectTypes::BType:
			for ( int j = 0; j < cacheSize; j++ )
			{
				list->push_back(new PooledObjectBB());
			}
			break;
		default:
			break;
		}
		
	}
}

void ObjectPool::Release()
{
	int count = (int)PooledObjectTypes::Count;
	for ( int i = 0; i < count; i++ )
	{
		for ( auto obj : *unuse[i] )
		{
			delete obj;
		}
		unuse[i]->clear();
		delete unuse[i];

		for ( auto obj : *use[i] )
		{
			delete obj;
		}
		use[i]->clear();
		delete use[i];
	}
	unuse.clear();
	use.clear();
}


PooledObject* ObjectPool::Get(PooledObjectTypes type)
{
	int index = (int)type;
	auto& unuseList = *unuse[index];
	auto& useList = *use[index];

	if ( unuseList.empty() )
	{
		switch ( type )
		{
		case PooledObjectTypes::AType:
			for ( int j = 0; j < 10; j++ )
			{
				unuseList.push_back(new PooledObjectAA());
			}
			break;
		case PooledObjectTypes::BType:
			for ( int j = 0; j < 10; j++ )
			{
				unuseList.push_back(new PooledObjectBB());
			}
			break;
		default:
			break;
		}
	}

	auto obj = unuseList.front();
	unuseList.pop_front();
	useList.push_back(obj);
	obj->Init();

	return obj;
}
void ObjectPool::Return(PooledObject* obj)
{
	obj->Reset();
	int index = (int)obj->GetType();
	use[index]->remove(obj);
	unuse[index]->push_back(obj);
}