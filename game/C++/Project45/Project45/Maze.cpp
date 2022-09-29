#include "Maze.h"
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <fstream>
#include <conio.h>
#include <Windows.h>
using namespace std;

Maze::~Maze()
{
}

void Maze::CreateMap(string file)
{
	ifstream ifs(file);
	if ( !ifs )
	{
		cout << "error";
		return;
	}
	string temp;
	int i = 0;
	//col = 0;
	while ( getline(ifs, temp) )
	{
		map.push_back(temp);
		cout << map.back() << endl;
		row += 1;
	}
	col = temp.size();
	ifs.close();
}

void Maze::PrintMap()
{
	string temp;
	system("cls");
	for ( auto it = map.begin(); it != map.end(); it++ )
	{
		cout << *it << endl;
	}
}

void Maze::DeleteMap()
{
	for ( auto& it : map )
	{
		it.clear();
	}
	map.clear();
	row = 0;
	col = 0;
	x = 0;
	y = 0;
	goalCount = 0;
	goalX = 0;
	goalY = 0;
	ballX = 0;
	ballY = 0;
	stepOn = true;
}

void Maze::RunGame()
{
	bool run = true;
	stepOn = true;
	while ( run )
	{
		CheckGoal();
		int cmd = _getch();
		switch ( cmd )
		{

		case UP:
			if ( x < 0 || map[x - 1][y] == '#' )
			{
				break;
			}
			CheckNext(-1, 0);
			break;
		case DOWN:
			if ( x > row || map[x + 1][y] == '#' )
			{
				break;
			}
			CheckNext(1, 0);
			
			break;
		case LEFT:
			if ( y < 0 || map[x][y - 1] == '#' )
			{
				break;
			}
			CheckNext(0, -1);
			break;
		case RIGHT:
			if ( y > col || map[x][y + 1] == '#' )
			{
				break;
			}
			CheckNext(0, 1);
			break;
		case EXIT:
			run = false;
			break;
		}
		PrintMap();
	}
	return;
}

void Maze::SetPosInfo()
{
	string temp;
	int i = 0;

	for ( int i = 0; i < row; i++ )
	{
		for ( int j = 0; j < col; j++ )
		{
			if ( map[i][j] == 'P' )
			{
				x = i;
				y = j;
			}
			else if ( map[i][j] == 'O' )
			{
				goalX = i;
				goalY = j;
				goalCount++;
			}
		}
	} 
}


void Maze::CheckGoal()
{
	if ( goalX == ballX && goalY == ballY )
	{
		DeleteMap();
		ChooseStage(++stageNum);
	}
}

void Maze::PushBall()
{
	 
}

void Maze::CheckNext(int xNum, int yNum)
{
	if ( map[x + xNum][y + yNum] == 'O' )
	{
		stepOn = false;
		map[x][y] = ' ';
		x += xNum;
		y += yNum;
		map[x][y] = 'P';
		
		return;
	}
	else if ( map[x + xNum][y + yNum] == 'B' )
	{
		if ( map[x + (2 * xNum)][y + (2 * yNum)] == '#' )
		{
			return;
		}
		else if ( map[x + (2 * xNum)][y + (2 * yNum)] == 'B' )
		{
			CheckNext(2 * xNum, 2 * yNum);

		}
		
		map[x][y] = ' ';
		x += xNum;
		y += yNum;
		map[x][y] = 'P';
		map[x + xNum][y + yNum] = 'B';
		ballX = x + xNum;
		ballY = y + yNum;
		if ( goalX == ballX && goalY == ballY )
		{
			map[x + xNum][y + yNum] = '@';
		}
	}
	else
	{
		if ( !stepOn )
		{
			map[x][y] = 'O';
			x += xNum;
			y += yNum;
			map[x][y] = 'P';
			stepOn = true;
		}
		else
		{
			map[x][y] = ' ';
			x += xNum;
			y += yNum;
			map[x][y] = 'P';
		}
	}
	return;
}

void Maze::ChooseStage(int num)
{
	string file[6] = { "Stage/Stage01.txt","Stage/Stage02.txt","Stage/Stage03.txt","Stage/Stage04.txt" ,"Stage/Stage05.txt","Game/Ending.txt" };
	bool run = true;
	system("cls");
	while ( run )
	{
		switch ( num )
		{
		case 1:
			stageNum = 1;
			system("cls");
			CreateMap(file[0]);
			SetPosInfo();
			RunGame();
			DeleteMap();
			run = false;
			break;
		case 2:
			stageNum = 2;
			system("cls");
			CreateMap(file[1]);
			SetPosInfo();
			RunGame();
			DeleteMap();
			run = false;
			break;
		case 3:
			stageNum = 3;
			system("cls");
			CreateMap(file[2]);
			SetPosInfo();
			RunGame();
			DeleteMap();
			run = false;
			break;
		case 4:
			stageNum = 4;
			system("cls");
			CreateMap(file[3]);
			SetPosInfo();
			RunGame();
			DeleteMap();
			run = false;
			break;
		case 5:
			stageNum = 5;
			system("cls");
			CreateMap(file[4]);
			SetPosInfo();
			RunGame();
			DeleteMap();
			run = false;
			break;
		
		default:
			break;
		}
	}
	DeleteMap();
	return;
}
