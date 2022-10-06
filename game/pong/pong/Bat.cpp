#include "Bat.h"
#include "InputMgr.h"

// This the constructor and it is called when we create an object
Bat::Bat()
	:speed(0.f)
{
	shape.setFillColor(Color::Red);
	shape.setSize({ 2000,5 });
	shape.setPosition(position);
}

Bat::~Bat()
{
}



float Bat::GetSpeed() const
{
	return speed;
}

void Bat::SetSpeed(float speed)
{
	this->speed = speed;
}



Vector2f Bat::GetPosition() const
{
	return position;
}

void Bat::SetPosition(Vector2f pos)
{
	position = pos;
}

FloatRect Bat::GetBounds() const
{
	return shape.getGlobalBounds();
}

void Bat::SetOrigin(Origins origin)
{
	Utils::SetOrigin(shape, origin);
}

RectangleShape Bat::GetShape()
{
	return shape;
}

void Bat::Update(float dt)
{
	// 키 입력 처리
	curDir.x = InputMgr::GetAxisRaw(Axis::Horizontal);
	position += curDir * speed * dt;
	shape.setPosition(position);
}

void Bat::Draw(RenderWindow& window)
{
	window.draw(shape);
}

