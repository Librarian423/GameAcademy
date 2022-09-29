#include <iostream>
#include <deque>
#include <list>
#include "Command.h"

using namespace std;

Command::Command(CmdTypes type)
	:cmdType(type),target(nullptr),number(0) { }

void Command::Set(deque<int>* target, int number)
{
	this->target = target;
	this->number = number;
}

void Command::Init()
{
}

void Command::Reset()
{
	target = nullptr;
	number = 0;
}

void Command::Write(std::ofstream& ofs)
{
	int cmd = (int)cmdType;
	ofs.write((char*)&cmd, sizeof(cmd));
	ofs.write((char*)&number, sizeof(number));
}


CmdTypes Command::GetType() const
{
	return cmdType;
}

ostream& operator<<(ostream& os, const Command& cmd)
{
	os << (int)cmd.cmdType << " " << (int)cmd.number;

	return os;
}

istream& operator>>(istream& is, Command& cmd)
{
	int cmdType;
	is >> cmdType >> cmd.number;
	cmd.cmdType = (CmdTypes)cmdType;
	return is;
}

CommandPushBack::CommandPushBack()
	:Command(CmdTypes::PushBack) {}

bool CommandPushBack::Do()
{
	target->push_back(number);
	return true;
}

bool CommandPushBack::UnDo()
{
	target->pop_back();
	return true;
}

CommandPushFront::CommandPushFront()
	:Command(CmdTypes::PushFront){}

bool CommandPushFront::Do()
{
	target->push_front(number);
	return true;
}
bool CommandPushFront::UnDo()
{
	target->pop_front();
	return true;
}

CommandPopBack::CommandPopBack()
	:Command(CmdTypes::PopBack) {}



bool CommandPopBack::Do()
{
	if ( target->empty() )
	{
		cout << "삭제 불가" << endl;
		return false;
	}
	number = target->back();
	target->pop_back();

	return true;
}
bool CommandPopBack::UnDo()
{
	target->push_back(number);
	return true;
}

CommandPopFront::CommandPopFront()
	:Command(CmdTypes::PopFront){}

bool CommandPopFront::Do()
{
	if ( target->empty() )
	{
		cout << "삭제 불가" << endl;
		return false;
	}
	number = target->front();
	target->pop_front();

	return true;
}

bool CommandPopFront::UnDo()
{
	target->push_front(number);
	return true;
}