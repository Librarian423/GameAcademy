#pragma once

enum class PooledObjectTypes
{
	AType,
	BType,
	Count,
};

class PooledObject
{
public:
	PooledObject(PooledObjectTypes type= PooledObjectTypes::AType)
		: type(type) {}
	virtual ~PooledObject(){}
	
	//virtual void Create() = 0;
	//virtual void Release() = 0;

	virtual void Init() {}
	virtual void Reset() {}

	PooledObjectTypes GetType() { return type; }

protected:
	PooledObjectTypes type;
};

class PooledObjectAA: public PooledObject
{
public:
	PooledObjectAA() :PooledObject(PooledObjectTypes::AType) {}
};

class PooledObjectBB : public PooledObject
{
public:
	PooledObjectBB() :PooledObject(PooledObjectTypes::BType) {}
};
