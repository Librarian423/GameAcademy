#include "Ball.h"
#include <iostream>

using namespace std;

Ball::Ball()
{
	shape.setRadius(10);
	shape.setPosition(0.f, 0.f);
}

Ball::~Ball()
{
}

void Ball::Fire(Vector2f dir, float speed)
{
	curDir = dir;
	this->speed = speed;
}

Vector2f Ball::GetPosition() const
{
	return position;
}

void Ball::SetPosition(Vector2f pos)
{
	position = pos;
}

float Ball::GetSpeed() const
{
	return speed;
}

void Ball::SetSpeed(float speed)
{
	this->speed = speed;
}

void Ball::SetOrigin(Origins origin)
{
	Utils::SetOrigin(shape, origin);
}

FloatRect Ball::GetBounds() const
{
	return shape.getGlobalBounds();
}

void Ball::SetBallbatPos(Vector2f pos)
{
	batPos = pos;
}

void Ball::OnCollisionSides(int width)
{
	curDir.x *= -1;
	if ( position.x > width * 0.5f )
	{
		SetPosition({ width - shape.getLocalBounds().width * 0.5f, position.y });
	}
	else
	{
		SetPosition({ shape.getLocalBounds().width * 0.5f, position.y });
	}
	
}

void Ball::OnCollisionTop()
{
	curDir.y *= -1;
	SetPosition({ position.x, shape.getLocalBounds().height });
}

void Ball::OnCollisionBottom()
{
	cout << "Die" << endl;
	//curDir.y = -fabs(curDir.y);
}

void Ball::OnCollisionBat()
{
	cout << "Bat" << endl;

	curDir.y *= -1;
	
	SetPosition({ position.x, batPos.y });
	//
	
}

void Ball::OnCollisionBlock(Vector2f pos)
{
	float ballSize = shape.getLocalBounds().width * 0.5f;
	if ( (position.x >= pos.x + 25 + ballSize )|| (position.x < pos.x - 25 - ballSize) )
	{
		curDir.x *= -1;
	}
	if ( (position.y >= pos.y + 25 + ballSize) || (position.y < pos.y - 25 - ballSize) )
	{
		curDir.y *= -1;
	}
}

void Ball::Update(float dt)
{
	position += curDir * speed * dt;
	shape.setPosition(position);
}

void Ball::Draw(RenderWindow& window)
{
	window.draw(shape);
}
