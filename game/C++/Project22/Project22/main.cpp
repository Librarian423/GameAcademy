#include <iostream>
#include <cstdlib>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
	friend ostream& operator<<(ostream& os, const Point& pos);
	friend ostream& operator<<(ostream& os, const Point* pos);
};

ostream& operator<<(ostream& os, const Point& pos)
{
	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
	return os;
}

ostream& operator<<(ostream& os, const Point* pos)
{
	os << '[' << pos->xpos << ", " << pos->ypos << ']' << endl;
	return os;
}

typedef Point* POINT_PTR;

class BoundCheckPointPtrArray
{
private:
	POINT_PTR* arr;
	int arrlen;

	BoundCheckPointPtrArray(const BoundCheckPointPtrArray& arr) {}
	BoundCheckPointPtrArray& operator=(const BoundCheckPointPtrArray& arr) {}

public:
	BoundCheckPointPtrArray(int len) :arrlen(len)
	{
		arr = new POINT_PTR[len];
	}
	

	POINT_PTR& operator[] (int idx)
	{
		if ( idx < 0 || idx >= arrlen )
		{
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}

		return arr[idx];
	}
	POINT_PTR operator[] (int idx) const
	{
		if ( idx < 0 || idx >= arrlen )
		{
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}

		return arr[idx];
	}
	
	int GetArrLen() const
	{
		return arrlen;
	}
	~BoundCheckPointPtrArray()
	{
		delete[]arr;
	}
};

class BoundCheckIntArray
{
private:
	int* arr;
	int arrlen;

	BoundCheckIntArray(const BoundCheckIntArray& arr) {}
	BoundCheckIntArray& operator=(const BoundCheckIntArray& arr) {}

public:
	BoundCheckIntArray(int len) :arrlen(len)
	{
		arr = new int[len];
	}
	int& operator[] (int idx)
	{
		if ( idx < 0 || idx >= arrlen )
		{
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}

		return arr[idx];
	}
	~BoundCheckIntArray()
	{
		delete[]arr;
	}
};

class BoundCheck2dIntArray
{
public:
	BoundCheck2dIntArray(int a, int b)
		:row(a), col(b)
	{
		arr = new BoundCheckIntArray*[row];
		for ( int i = 0; i < row; i++ )
		{
			arr[i] = new BoundCheckIntArray(col);
		}
	}
	
	BoundCheckIntArray& operator[](int idx)
	{
		if ( idx < 0 || idx >= row )
		{
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}
		return *(arr[idx]);
	}
	~BoundCheck2dIntArray()
	{
		for ( int i = 0; i < row; i++ )
		{
			delete arr[i];
		}
		delete[]arr;
	}
private:
	BoundCheckIntArray** arr;
	int row;
	int col;
};


int main(void)
{
	BoundCheckPointPtrArray arr(3);
	arr[0] = new Point(3, 4);
	arr[1] = new Point(5, 6);
	arr[2] = new Point(7, 8);

	/*for(int i=0; i<arr.GetArrLen(); i++)
		cout<<*(arr[i]);*/

	for ( int i = 0; i < arr.GetArrLen(); i++ )
		cout << arr[i];

	delete arr[0];
	delete arr[1];
	delete arr[2];

	BoundCheck2dIntArray arr2d(3, 4);
	for ( int i = 0; i < 3; i++ )
	{
		for ( int j = 0; j < 4; j++ )
		{
			arr2d[i][j] = 4 * i + j;
		}
	}

	for ( int i = 0; i < 3; i++ )
	{
		for ( int j = 0; j < 4; j++ )
		{
			cout << arr2d[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}