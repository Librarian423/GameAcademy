#pragma once
#include "SFML/Graphics.hpp"
#include <random>
#include <vector>

using namespace sf;

enum class Origins
{
	TL, TC, TR,
	ML, MC, MR,
	BL, BC, BR,
};

class Utils
{
private:
	static std::random_device rd;
	static std::mt19937 gen;

public:
	static void SetOrigin(Text& obj, Origins origin);
	static void SetOrigin(Sprite& obj, Origins origin);
	static void SetOrigin(Shape& obj, Origins origin);
	static void SetOrigin(Transformable& obj, Origins origin, FloatRect rect);


	static int Range(int min, int maxInclude);
	static float Range(float min, float maxInclude);

	static float SqrMagnitude(const Vector2f& vec);
	static float Magnitude(const Vector2f& vec);

	static Vector2f Normalize(const Vector2f& vec);
};