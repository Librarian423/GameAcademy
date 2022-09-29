#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int generateRandomNumber()
{
	srand((unsigned int)time(NULL));
	static int num = rand() % 10;
	return num;
}

template<typename T>
bool BinarySearch(const vector<T> binary, const T& data)
{
	int front = 0;
	int back = (int)binary.size() - 1;
	int mid;
	while ( front <= back )
	{
		mid = (front + back) / 2;
		if ( binary[mid] == data )
		{
			return true;
		}
		else if ( binary[mid] < data )
		{
			front = mid + 1;
		}
		else
		{
			back = mid - 1;
		}
	}
	return false;
}

//template<typename T>
int main()
{
	int searchData;
	
	vector<int> binary(5);
	generate(binary.begin(), binary.end(), rand);
	sort(binary.begin(), binary.end(), less<int>());
	
	for ( int number : binary )
	{
		cout << number << endl;
	}
	cout << endl;
	cout << "input Data: ";
	cin >> searchData;
	if ( BinarySearch(binary, searchData) )
	{
		cout << "Data found" << endl;
		//cout << "location: " << result << endl;
	}
	else
	{
		cout << "Data not found" << endl;
	}
	return 0;
}