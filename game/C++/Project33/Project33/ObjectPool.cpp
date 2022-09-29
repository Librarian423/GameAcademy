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
	int count = (int)CmdTypes::Count;

	for ( int i = 0; i < count; i++ )
	{
		unuse.push_back(new list<Command*>());
		CreateObjects((CmdTypes)i, cacheSize);

		use.push_back(new list<Command*>());
	}
}

void ObjectPool::Release()
{
	int count = (int)CmdTypes::Count;
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

void ObjectPool::CreateObjects(CmdTypes type, int count)
{
	int index = (int)type;
	for ( int i = 0; i < count; i++ )
	{
		Command* cmd;
		switch ( type )
		{
		case CmdTypes::PushBack:
			cmd = new CommandPushBack();
			break;
		case CmdTypes::PushFront:
			cmd = new CommandPushFront();
			break;
		case CmdTypes::PopBack:
			cmd = new CommandPopBack();
			break;
		case CmdTypes::PopFront:
			cmd = new CommandPopFront();
			break;
		default:
			return;
		}
		unuse[index]->push_back(cmd);
	}
}
Command* ObjectPool::Get(CmdTypes type)
{
	int index = (int)type;
	auto& unuseList = *unuse[index];
	auto& useList = *use[index];

	if ( unuseList.empty() )
	{
		CreateObjects(type, 10);
	}

	auto obj = unuseList.front();
	unuseList.pop_front();
	useList.push_back(obj);
	obj->Init();

	return obj;
}
void ObjectPool::Return(Command* obj)
{
	obj->Reset();
	int index = (int)obj->GetType();
	use[index]->remove(obj);
	unuse[index]->push_back(obj);
}