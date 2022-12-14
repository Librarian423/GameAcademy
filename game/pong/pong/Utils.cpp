#include "Utils.h"

std::random_device Utils::rd;
std::mt19937 Utils::gen(Utils::rd());

void Utils::SetOrigin(Text& obj, Origins origin)
{
	SetOrigin(obj, origin, obj.getLocalBounds());
}

void Utils::SetOrigin(Sprite& obj, Origins origin)
{
	SetOrigin(obj, origin, obj.getLocalBounds());
}

void Utils::SetOrigin(Shape& obj, Origins origin)
{
	SetOrigin(obj, origin, obj.getLocalBounds());
}

void Utils::SetOrigin(Transformable& obj, Origins origin, FloatRect rect)
{
	Vector2f originPos(rect.width, rect.height);
	originPos.x *= ((int)origin % 3) * 0.5f;
	originPos.y *= ((int)origin / 3) * 0.5f;
	obj.setOrigin(originPos);
}

int Utils::Range(int min, int maxInclude)
{
	return (gen() % (maxInclude - min + 1)) + min;
}

float Utils::Range(float min, float maxInclude)
{
	float div = maxInclude - min + 1.0f;
	// 부동소수점 생성
	std::uniform_real_distribution<> dist(min, maxInclude);
	return dist(gen);
}

float Utils::SqrMagnitude(const Vector2f& vec)
{
	return ((vec.x * vec.x) + (vec.y * vec.y));
}

float Utils::Magnitude(const Vector2f& vec)
{
	return sqrt((vec.x * vec.x) + (vec.y * vec.y));
}

Vector2f Utils::Normalize(const Vector2f& vec)
{
	float mag = Magnitude(vec);
	if ( mag == 0 )
	{
		return vec;
	}
	return vec / mag;
}


