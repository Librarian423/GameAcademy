#pragma once
#include "header.h"

using namespace std;

//typedef Account* ACCOUNT_PTR;

template <typename T>
class BoundCheckArray
{
private:
	T* arr;
	int arrlen;

	BoundCheckArray(const BoundCheckArray& arr) {}
	BoundCheckArray& operator=(const BoundCheckArray& arr) {}

public:
	//BoundCheckPointPtrArray();
	BoundCheckArray(int len);

	T& operator[] (int idx);
	T operator[] (int idx) const;

	int GetArrLen() const;
	
	~BoundCheckArray();
	
};

