#pragma once
#include <SFML/Graphics.hpp>
#include <map>
#include <list>
#include "Utils.h"

using namespace sf;
using namespace std;

class Block
{
private:
	RectangleShape shape;
	
	Vector2f position;
	//list<Block*> blocks;
	//float x;
	//float y;

public:
	Block();
	~Block();

	void SetPosition(Vector2f pos);

	void CreateBlocks();
	//void Erase(FloatRect ballRect);

	FloatRect GetBounds() const;
	Vector2f GetPosition();
	//list<Block*> GetBlocks();

	//void Init();
	void Update(float dt);
	void Draw(RenderWindow& window);
};

