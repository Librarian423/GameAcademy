#pragma once

class Rectangle
{
public:
	void ShowAreaInfo();
	int getWidth();
	int getHeight();


	Rectangle();
	Rectangle(int w, int h);

protected:
	int width;
	int height;

private:

};

