#include <iostream>
#include "ObjectPool.h"
#include "PooledObject.h"

using namespace std;

int main()
{
	ObjectPool pool;

	//auto objA = new PooledObjectAA();
	auto objA = pool.Get(PooledObjectTypes::AType);
	auto objB = pool.Get(PooledObjectTypes::BType);

	pool.Return(objA);
	pool.Return(objB);

	return 0;
}