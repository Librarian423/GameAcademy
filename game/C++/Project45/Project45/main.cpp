#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <fstream>
#include <conio.h>
#include <Windows.h>
#include "Maze.h"
#include "Menu.h"
using namespace std;

void CursorView()
{

}
int main()
{
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.dwSize = 10;
	cursorInfo.bVisible = false;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
	system("mode con cols=30 lines=20 | title ConsoleGame");
	Maze maze;
	maze.CreateMap("Game/Loby.txt");
	

	while ( _getch() != SPACE ){}
	system("cls");
	Menu menu;
	
	while ( true )
	{
		menu.SelectMenu();
	}
	
	

	return 0;
}