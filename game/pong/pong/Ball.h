#pragma once
#include <SFML/Graphics.hpp>
#include "Utils.h"
#include "Block.h"
#include <list>
using namespace sf;

class Ball
{
private:
	CircleShape shape;
	Vector2f position;
	float speed;
	Vector2f curDir;

	Vector2f batPos;

	float height;
	float width;
public:
	Ball();
	~Ball();

	void Fire(Vector2f dir, float speed);

	Vector2f GetPosition()const;
	void SetPosition(Vector2f pos);

	float GetSpeed()const;
	void SetSpeed(float speed);
	
	void SetOrigin(Origins origin);

	FloatRect GetBounds()const;

	void SetBallbatPos(Vector2f pos);

	void OnCollisionSides(int width);
	void OnCollisionTop();
	void OnCollisionBottom();
	void OnCollisionBat();
	
	void OnCollisionBlock(Vector2f pos);

	void Update(float dt);
	void Draw(RenderWindow& window);
};

