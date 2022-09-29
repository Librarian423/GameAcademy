#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool recursiveBinarySearch(vector<int> binaryRef, int first, int last, int searchData)
{
	if ( first >= last )
	{
		return false;
	}
	int mid = (first + last) / 2;
	if ( binaryRef[mid] == searchData )
	{
		return true;
	}
	else if ( binaryRef[mid] <= searchData )
	{
		return recursiveBinarySearch(binaryRef, mid + 1, last, searchData);
	}
	else
	{
		return recursiveBinarySearch(binaryRef, first, mid - 1, searchData);
	}
	return false;
}

int main()
{
	vector<int> binary;
	srand((unsigned int)time(NULL));
	int search;
	for ( int i = 0; i < 10; i++ )
	{
		
		binary.push_back(rand() % 10);
	}
	sort(binary.begin(), binary.end(), less<>());
	for ( auto i : binary )
	{
		cout << i << " ";
	}
	cout << "input search data: ";
	cin >> search;
	if ( recursiveBinarySearch(binary, 0, binary.size(), search) )
	{
		cout << "Data found" << endl;
	}
	else
	{
		cout << "No Data found" << endl;
	}
	return 0;
}