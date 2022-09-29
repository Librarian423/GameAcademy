#pragma once
#include <deque>
#include <fstream>
#include "Command.h"
#include "ObjectPool.h"
using namespace std;

class CommandManager
{
public:
	CommandManager(deque<int>& container);
	~CommandManager();

	Command* GetCmd(CmdTypes cmdType);

	void Do(Command* cmd);
	void Undo();
	void Redo();
	void Release(deque<Command*>& container);

	bool Save(string path, bool binaryMode);
	bool Load(string path, bool binaryMode);

	bool SaveText(string path);
	bool LoadText(string path);

	bool SaveBinary(string path);
	bool LoadBinary(string path);

	Command* Read(std::ifstream& ifs);


private:
	deque<int>& container;

	ObjectPool cmdPool;

	deque<Command*> history;
	deque<Command*> undoHistory;
	
	struct FileHeader
	{
		int count;
		int countHistory;
		int countUndoHistory;
	};

};

