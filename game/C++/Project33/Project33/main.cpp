#include <iostream>
#include <deque>
#include <list>
#include <fstream>
#include "Command.h"
#include "CommandManager.h"

using namespace std;

int main()
{
	deque<int> container;
	CommandManager cmdMgr(container);

	int select;
	int input;

	while ( true )
	{
		cout << "1. input(back) / 2.input(front) / 3 delete(back) / 4 delete(front) /"<<endl;
		cout << "5. undo / 6. redo / 7. Save / 8. Load / 9. quit:";
		cin >> select;
		
		switch ( select )
		{
		case 1:
		{
			//input(back)
			cout << "input number: ";
			cin >> input;
			auto cmd = cmdMgr.GetCmd(CmdTypes::PushBack);
			cmd->Set(&container, input);
			cmdMgr.Do(cmd);
		}
			break;
		case 2:
		{
			//input(front)
			cout << "input number: ";
			cin >> input;
			auto cmd = cmdMgr.GetCmd(CmdTypes::PushFront);
			cmd->Set(&container, input);
			cmdMgr.Do(cmd);
		}
			break;
		case 3:
		{
			//delete(back)
			auto cmd = cmdMgr.GetCmd(CmdTypes::PopBack);
			cmd->Set(&container);
			cmdMgr.Do(cmd);
		}
			break;
		case 4:
		{
			//delete(front)
			auto cmd = cmdMgr.GetCmd(CmdTypes::PopFront);
			cmd->Set(&container);
			cmdMgr.Do(cmd);
		}
			break;
		case 5:
			//undo
			cmdMgr.Undo();
			break;
		case 6:
			//redo
			cmdMgr.Redo();
			break;

		case 7:
			cmdMgr.Save("save.txt", false);
			break;
		case 8:
			cmdMgr.Load("save.txt", false);
			break;
		case 9:
			return false;
		}
		for ( auto& number: container )
		{
			cout << number << " ";
		}
		cout << endl;
	}
	return 0;
	
}