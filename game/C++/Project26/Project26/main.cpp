#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vector1;
	vector1.push_back(20);
	vector1.push_back(30);

	for ( int n : vector1 )
	{
		cout << n << endl;
	}
	cout << endl;

	auto it = vector1.begin();
	vector1.insert(it, 10);

	for ( int n : vector1 )
	{
		cout << n << endl;
	}
	cout << endl;

	vector<int> vector2;
	vector2.push_back(1);
	vector2.push_back(2);
	vector2.push_back(3);

	vector1.insert(vector1.begin(), vector2.begin(), vector2.end());

	for ( int n : vector1 )
	{
		cout << n << endl;
	}
	cout << endl;

	vector1.erase(vector1.begin()+2);
	for ( int n : vector1 )
	{
		cout << n << endl;
	}
	cout << endl;

	vector1.erase(vector1.begin()+1, vector1.end()-1);
	for ( int n : vector1 )
	{
		cout << n << endl;
	}
	cout << endl;


	vector<int> vector3;
	vector3.assign(10, 0);
	for ( int n : vector3 )
	{
		cout << n << endl;
	}
	cout << endl;

	vector<int> vector4;
	vector4.push_back(10);
	vector4.push_back(20);
	vector4.push_back(30);
	vector4.push_back(40);
	vector4.push_back(50);

	//vector3.assign(vector4.begin(), vector4.end());
	vector3.swap(vector4);
	for ( int n : vector3 )
	{
		cout << n << endl;
	}
	cout << endl;
	for ( int n : vector4 )
	{
		cout << n << endl;
	}
	cout << endl;
	
	return 0;
}