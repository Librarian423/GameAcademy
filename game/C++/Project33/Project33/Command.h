#pragma once
#include <deque>
#include <fstream>
using namespace std;

enum class CmdTypes
{
	None = -1,
	PushBack,
	PushFront,
	PopBack,
	PopFront,
	Count,
};

class Command
{
public:
	Command(CmdTypes type);
	virtual ~Command() {};

	virtual void Set(deque<int>* target, int number = 0);

	virtual bool Do() = 0;
	virtual bool UnDo() = 0;
	virtual bool ReDo() { return Do(); }

	virtual void Init();
	virtual void Reset();

	virtual void Write(std::ofstream& ofs);
	
	CmdTypes GetType() const;

	friend ostream& operator<<(ostream& os, const Command& cmd);
	friend istream& operator>>(istream& is, Command& cmd);

protected:
	CmdTypes cmdType;
	deque<int>* target;
	int number;
};

class CommandPushBack :public Command
{
public:
	CommandPushBack();

	virtual bool Do();
	virtual bool UnDo();

};

class CommandPushFront :public Command
{
public:
	CommandPushFront();

	virtual bool Do();
	virtual bool UnDo();

};

class CommandPopBack :public Command
{
public:
	CommandPopBack();

	virtual bool Do();
	virtual bool UnDo();


};

class CommandPopFront :public Command
{
public:
	CommandPopFront();
	
	virtual bool Do();
	virtual bool UnDo();

};

