#include "BoundCheckPointPtrArray.h"

template <typename T>
BoundCheckArray<T>::BoundCheckArray(int len)
	:arrlen(len), arr(nullptr)
{
	arr = new T[len];
	for ( int i = 0; i < len; i++ )
	{
		arr[i] = nullptr;
	}
}
template <typename T>
T& BoundCheckArray<T>::operator[] (int idx)
{
	if ( (idx < 0) || idx >= arrlen )
	{
		cout << "Array index out of bound exception" << endl;
		exit(1);
	}

	return arr[idx];
}
template <typename T>
T BoundCheckArray<T>::operator[] (int idx) const
{
	if ( (idx < 0) || idx >= arrlen )
	{
		cout << "Array index out of bound exception" << endl;
		exit(1);
	}

	return arr[idx];
}

template <typename T>
int BoundCheckArray<T>::BoundCheckArray::GetArrLen() const
{
	return arrlen;
}

template <typename T>
BoundCheckArray<T>::BoundCheckArray::~BoundCheckArray()
{
	delete[]arr;
}