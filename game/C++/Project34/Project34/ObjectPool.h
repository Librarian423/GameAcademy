#pragma once
#include <list>
#include <vector>
#include "PooledObject.h"

using namespace std;

class ObjectPool
{
public:
	ObjectPool();
	~ObjectPool();

	void Init(int cacheSize = 100);
	void Release();

	PooledObject* Get(PooledObjectTypes type);
	void Return(PooledObject* obj);

private:
	vector<list<PooledObject*>*> unuse;
	vector<list<PooledObject*>*> use;
};

