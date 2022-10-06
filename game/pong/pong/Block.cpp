#include "Block.h"
#include "InputMgr.h"
#include <iostream>

using namespace std;

Block::Block()
	//:x(0.f), y(0.f)
{
	shape.setFillColor(Color::Green);
	shape.setSize({ 50,50 });
	shape.setPosition(position);
}

Block::~Block()
{
}

void Block::SetPosition(Vector2f pos)
{
	position = pos;
	//shape.setPosition(pos);
}

void Block::CreateBlocks()
{
	
}

//void Block::Erase(FloatRect ballRect)
//{
//	for ( auto it = blocks.begin(); it != blocks.end(); )
//	{
//		if ( ballRect.intersects((*it)->GetBounds()) )
//		{
//			cout << "block" << endl;
//			it = blocks.erase(it);
//		}
//		else
//		{
//			it++;
//		}
//
//	}
//}



FloatRect Block::GetBounds() const
{
	
	return shape.getGlobalBounds();
}

Vector2f Block::GetPosition()
{
	return position;
}

//list<Block*> Block::GetBlocks()
//{
//	return blocks;
//}

//void Block::Init()
//{
//	for ( int i = 0; i < 13; i++ )
//	{
//		for ( int j = 0; j < 10; j++ )
//		{
//			Block* block = new Block();
//			block->SetPosition({ x, y });
//			blocks.push_back(block);
//			y += 60;
//
//		}
//		x += 100.f;
//		y = 0.f;
//	}
//}

void Block::Update(float dt)
{
	shape.setPosition(position);
}

void Block::Draw(RenderWindow& window)
{
	/*for ( auto it: blocks )
	{
		it->Draw(window);
	}*/
	window.draw(shape);
}
