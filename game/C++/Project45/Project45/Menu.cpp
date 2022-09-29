#include "Menu.h"
#include "Maze.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <conio.h>
#include <Windows.h>
using namespace std;

Menu::Menu()
{
}

Menu::~Menu()
{
}

void Menu::SelectMenu()
{
	ifstream ifs("Game/Menu.txt");
	if ( !ifs )
	{
		cout << "error";
		return;
	}
	Maze maze;
	vector<string> menu;
	string temp;
	int row = 1;
	bool menuRun = true;

	while ( getline(ifs, temp) )
	{
		menu.push_back(temp);
		cout << menu.back() << endl;
	}
	system("cls");
	

	while ( true )
	{
		while ( menuRun )
		{
			for ( auto it = menu.begin(); it < menu.end(); it++ )
			{
				cout << *it << endl;
			}

			int cmd = _getch();

			switch ( cmd )
			{
			case UP:
				if ( row <= 1 )
				{
					break;
				}
				menu[row][12] = ' ';
				menu[--row][12] = '*';
				
				break;
			case DOWN:
				if ( row > 4 )
				{
					break;
				}
				menu[row][12] = ' ';
				menu[++row][12] = '*';
				break;
			case SPACE:
				menuRun = false;
				break;
			}
			system("cls");
		}
		cout << row << endl;
		maze.ChooseStage(row);
		system("cls");
		menuRun = true;
	}

}
