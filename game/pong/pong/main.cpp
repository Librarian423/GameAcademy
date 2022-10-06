#include "Bat.h"
#include "InputMgr.h"
#include "Ball.h"
#include "Utils.h"
#include "Block.h"
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <SFML/Graphics.hpp>
#include <map>
#include <list>

using namespace sf;

int main()
{
	int width = 1280;
	int height = 720;
	int life = 3;
	int score = 0;
	bool ballActive = false;

	RenderWindow window(VideoMode(width, height), "Pong", Style::Default);

	Vector2f initPos(width * 0.5f, height - 25.f);

	Bat bat;
	bat.SetOrigin(Origins::TC);
	bat.SetPosition(initPos);
	bat.SetSpeed(1000);

	Ball ball;
	ball.SetOrigin(Origins::BC);
	ball.SetPosition(initPos);
	
	Block block;
	//block.Init();
	//list<Block*> blocks;
	//blocks = block.GetBlocks();
	list<Block*> blocks;
	float x = 0.f;
	float y = 0.f;
	for ( int i = 0; i < 13; i++ )
	{
		for ( int j = 0; j < 10; j++ )
		{
			Block* block = new Block();
			block->SetPosition({ x, y });
			blocks.push_back(block);
			y += 60;
			
		}
		x += 100.f;
		y = 0.f;
	}
	

	Font font;
	font.loadFromFile("font/DS-DIGI.ttf");

	Text hud;
	hud.setFont(font);
	hud.setCharacterSize(60);
	hud.setFillColor(Color::White);
	hud.setPosition(20, 20);

	InputMgr::Init();
	Clock clock;

	while ( window.isOpen() )
	{
		Time dt = clock.restart();
		InputMgr::ClearInput();
		Event event;
		
		while ( window.pollEvent(event) )
		{
			if ( event.type == Event::Closed )
				window.close();
			InputMgr::UpdateInput(event);
		}

		if ( !ballActive && InputMgr::GetKeyDown(Keyboard::Space) )
		{
			ball.Fire(Utils::Normalize(Vector2f(1, -1)), 500);
			ballActive = true;
		}
		if ( InputMgr::GetKeyDown(Keyboard::Escape))
		{
			window.close();
		}

		//Update
		ball.Update(dt.asSeconds());
		if ( !ballActive )
		{
			ball.SetPosition(bat.GetPosition());
		}
		bat.Update(dt.asSeconds());
		//block.Init();
		//block.Update(dt.asSeconds());
		for ( auto it : blocks)
		{
			it->Update(dt.asSeconds());
		}

		//Collison Check
		if ( ballActive )
		{			
			ball.SetBallbatPos(bat.GetPosition());
			FloatRect ballRect = ball.GetBounds();
			if ( ballRect.top < 0.f )
			{
				ball.OnCollisionTop();		//Up
			}

			if ( ballRect.left < 0.f || ballRect.left + ballRect.width > width )
			{
				ball.OnCollisionSides(width);	//Side
			}

			if ( ballRect.top + ballRect.height > height )
			{
				ball.OnCollisionBottom();	//Down
				ball.SetPosition(bat.GetPosition());
				ball.Fire({ 0,0 }, 0);

				ballActive = false;
				life--;

				if ( life <= 0 )
				{
					score = 0;
					life = 3;
					bat.SetPosition(initPos);
					ball.SetPosition(initPos);
				}
			}
			
			if ( ballRect.intersects(bat.GetBounds()) )
			{
				ball.OnCollisionBat();		//Bat
				
			}
			//block.Erase(ballRect);
			for ( auto it = blocks.begin(); it != blocks.end(); )
			{
				if ( ballRect.intersects((*it)->GetBounds()) )
				{
					cout << "block" << endl;
					ball.OnCollisionBlock((*it)->GetPosition());
					it = blocks.erase(it);
					
					score++;
				}
				else
				{
					it++;
				}

			}
		}
		
		
		string hudText = "Score: " + to_string(score) + "\tLife: " + to_string(life);
		hud.setString(hudText);

		//Clear
		window.clear();

		//Draw
		ball.Draw(window);
		bat.Draw(window);
		for ( auto it : blocks )
		{
			it->Draw(window);
		}
		//block.Draw(window);
		window.draw(hud);
		//Display
		window.display();
	}
	
	return 0;
}

