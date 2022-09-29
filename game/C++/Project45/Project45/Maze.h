#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <map>

#define UP      72
#define DOWN    80      
#define LEFT    75     
#define RIGHT   77 
#define SPACE	32
#define EXIT    27 

using namespace std;

class Maze
{
public:
	Maze() :x(0), y(0), stepOn(true) {}
	~Maze();
	void CreateMap(string file);
	void PrintMap();
	void DeleteMap();
	void RunGame();
	void SetPosInfo();
	void CheckGoal();
	void PushBall();
	void CheckNext(int xNum, int yNum);
	void ChooseStage(int num);
	

private:
	vector<string> map;
	int x;
	int y;
	int row;
	int col;
	int goalX;
	int goalY;
	int ballX;
	int ballY;
	int goalCount;
	int stageNum;
	bool stepOn;
};

