#pragma once
#include <SFML/Graphics.hpp>
#include "Utils.h"

using namespace sf;

class Bat
{
private:
	Vector2f position;

	RectangleShape shape;

	float speed;

	Vector2f curDir;
	
public:
	Bat();
	~Bat();

	float GetSpeed() const;
	void SetSpeed(float speed);

	Vector2f GetPosition() const;
	void SetPosition(Vector2f pos);

	FloatRect GetBounds() const;

	void SetOrigin(Origins origin);

	RectangleShape GetShape();
	
	void Update(float dt);
	void Draw(RenderWindow& window);

};
