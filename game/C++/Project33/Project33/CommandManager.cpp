#include <iostream>
#include <deque>
#include <list>
#include <fstream>
#include <string>
#include <sstream>
#include "Command.h"
#include "CommandManager.h"

using namespace std;

CommandManager::CommandManager(deque<int>& container)
	:container(container) {}

CommandManager::~CommandManager()
{
	Release(history);
	Release(undoHistory);
}

Command* CommandManager::GetCmd(CmdTypes cmdType)
{
	return cmdPool.Get(cmdType);
}

void CommandManager::Do(Command* cmd)
{
	if ( cmd == nullptr )
	{
		return;
	}
	if ( cmd != nullptr && cmd->Do() )
	{
		history.push_back(cmd);
		Release(undoHistory);
	}
	else
	{
		cmdPool.Return(cmd);
	}
}

void CommandManager::Undo()
{
	if ( history.empty() )
	{
		cout << "Undo 불가" << endl;
		return;
	}
	auto undoCmd = history.back();
	undoCmd->UnDo();

	history.pop_back();
	undoHistory.push_back(undoCmd);
}

void CommandManager::Redo()
{
	if ( undoHistory.empty() )
	{
		cout << "Redo 불가" << endl;
		return;
	}
	auto redoCmd = undoHistory.back();
	redoCmd->ReDo();

	undoHistory.pop_back();
	history.push_back(redoCmd);
}

void CommandManager::Release(deque<Command*>& container)
{
	for ( auto cmd : container )
	{
		cmdPool.Return(cmd);
	}
	container.clear();
}

bool CommandManager::SaveBinary(string path)
{
	FileHeader header;
	header.count = container.size();
	header.countHistory = history.size();
	header.countUndoHistory = undoHistory.size();

	ofstream ofs(path, ios::binary);
	if ( !ofs )
	{
		return false;
	}

	ofs.write((char*)&header, sizeof(header));
	for ( int num : container )
	{
		ofs.write((char*)&num, sizeof(num));
	}
	for ( auto ptr : history )
	{
		ptr->Write(ofs);
	}
	for ( auto ptr : undoHistory )
	{
		ptr->Write(ofs);
	}
	return true;
}
bool CommandManager::LoadBinary(string path)
{
	ifstream ifs(path, ios::binary);
	if ( !ifs )
	{
		return false;
	}

	container.clear();
	Release(history);
	Release(undoHistory);

	FileHeader header;
	ifs.read((char*)&header, sizeof(header));
	for ( int i = 0; i < header.count; i++ )
	{
		int number;
		ifs.read((char*)&number, sizeof(number));
		container.push_back(number);
	}

	for ( int i = 0; i < header.countHistory; i++ )
	{
		int cmdType, number;
		ifs.read((char*)&cmdType, sizeof(cmdType));
		ifs.read((char*)&number, sizeof(number));
		Command* cmd = cmdPool.Get((CmdTypes)cmdType);
		cmd->Set(&container, number);
		history.push_back(cmd);
	}
	for ( int i = 0; i < header.countUndoHistory; i++ )
	{
		int cmdType, number;
		ifs.read((char*)&cmdType, sizeof(cmdType));
		ifs.read((char*)&number, sizeof(number));
		Command* cmd = cmdPool.Get((CmdTypes)cmdType);
		cmd->Set(&container, number);
		undoHistory.push_back(cmd);
	}
	return true;
}

bool CommandManager::Save(string path, bool binaryMode)
{
	if ( binaryMode )
	{
		return SaveBinary(path);
	}
	return SaveText(path);
}
bool CommandManager::Load(string path, bool binaryMode)
{
	if ( binaryMode )
	{
		return LoadBinary(path);
	}
	return LoadText(path);
}

bool CommandManager::SaveText(string path)
{
	ofstream ofs(path);
	if ( !ofs )
	{
		return false;
	}
	for ( int num : container )
	{
		ofs << num << " ";
	}
	ofs << endl;
	for ( auto cmd : history )
	{
		ofs << *cmd << " ";;
	}
	ofs << endl;
	for ( auto cmd : undoHistory )
	{
		ofs << *cmd << " ";
	}
	ofs << endl;

	return true;
}
bool CommandManager::LoadText(string path)
{
	ifstream ifs(path);
	if ( !ifs )
	{
		return false;
	}
	container.clear();
	history.clear();
	undoHistory.clear();

	string line[3];
	int buffer;
	getline(ifs, line[0]);
	stringstream strm(line[0]);
	while ( strm >> buffer )
	{
		container.push_back(buffer);
	}
	for ( int i = 1; i < 3; i++ )
	{
		getline(ifs, line[i]);
		stringstream strm(line[i]);
		int cmdType, number;
		while ( strm >> cmdType )
		{
			strm >> number;
			Command* cmd = cmdPool.Get((CmdTypes)cmdType);
			cmd->Set(&container, number);
			if ( i == 1 )
			{
				history.push_back(cmd);
			}
			else
			{
				undoHistory.push_back(cmd);
			}
		}
	}
	return true;
}


Command* CommandManager::Read(std::ifstream& ifs)
{
	int cmdType, number;
	ifs.read((char*)&cmdType, sizeof(cmdType));
	ifs.read((char*)&number, sizeof(number));
	Command* cmd = cmdPool.Get((CmdTypes)cmdType);
	cmd->Set(&container, number);
	return cmd;
}