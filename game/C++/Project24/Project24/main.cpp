#include <iostream>

using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{

	}

	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
	void Set(int x, int y)
	{
		xpos = x;
		ypos = y;
	}
	friend ostream& operator<<(ostream&, const Point&);

	Point& operator +=(const Point& ref)
	{
		this->xpos += ref.xpos;
		this->ypos += ref.ypos;
		return *this;
	}
};

ostream& operator<<(ostream& os, const Point& pos)
{
	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
	return os;
}

template <typename T>
void SwapData(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename ARR, typename LEN>
ARR SumArray(ARR arr[], LEN len) // 2. 함수 템플릿 변경
{
	ARR sum = 0;
	for ( int i = 0; i < len; ++i )
	{
		sum += arr[i];
	}
	return sum;
}

int main(void)
{
	int num1 = 1;
	int num2 = 2;
	SwapData(num1, num2);
	cout << num1 << endl; // 2
	cout << num2 << endl; // 1

	Point pos1(3, 4);
	Point pos2(10, 20);
	SwapData<Point>(pos1, pos2);
	pos1.ShowPosition();
	pos2.ShowPosition();

	int arr[100];
	srand((unsigned int)time(NULL));
	for ( int i = 0; i < 100; ++i )
	{
		arr[i] = rand() % 100;
	}
	cout << SumArray(arr, 100) << endl;

	Point arrPoint[100];
	for ( int i = 0; i < 100; ++i )
	{
		arrPoint[i].Set(rand() % 100, rand() % 100);
	}

	cout << SumArray(arrPoint, 100) << endl;	// [???, ???]

	return 0;
}