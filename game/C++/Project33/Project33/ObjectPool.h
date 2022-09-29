#pragma once
#include <list>
#include <vector>
#include "Command.h"

using namespace std;

class ObjectPool
{
public:
	ObjectPool();
	~ObjectPool();

	void Init(int cacheSize = 100);
	void Release();

	void CreateObjects(CmdTypes type, int count);

	Command* Get(CmdTypes type);
	void Return(Command* obj);

private:
	vector<list<Command*>*> unuse;
	vector<list<Command*>*> use;
};

