#include <iostream>
#include <cstring>
#include <random>
#include <vector>

using namespace std;

void sort(vector<string>& ref)
{
	string temp;
	for ( int i = 0; i < ref.size(); i++ )
	{
		for ( int j = i; j < ref.size(); j++ )
		{
			if ( ref[i] > ref[j] )
			{
				ref[i].swap(ref[j]);
			}
		}
	}
}

template <typename T>
void printVector(const vector<T>& ref)
{
	for ( int i = 0; i < ref.size(); i++ )
	{
		cout << ref[i] << endl;
	}
}

void deleteEvenNumber(vector<int>& ref)
{
	for ( vector<int>::iterator it = ref.begin(); it != ref.end(); )
	{
		if ( *it % 2 == 0 )
		{
			it = ref.erase(it);
		}
		else
		{
			it++;
		}
	}
}

int main()
{
	//문제 1번
	vector<string> vec;
	string str;

	for ( int i = 0; i < 10; i++ )
	{
		cout << "문자열 입력: ";
		cin >> str;
		vec.push_back(str);
	}

	sort(vec);
	printVector(vec);
	

	//문제 2번
	vector<int>randomNumber;

	random_device rd;   // non-deterministic generator
	mt19937 gen(rd());  // to seed mersenne twister.
	uniform_int_distribution<> dist(-100, 100); // distribute results between 1 and 6 inclusive.

	for ( int i = 0; i < 100; ++i ) {
		randomNumber.push_back(dist(gen));
	}
	
	printVector(randomNumber);
	cout << endl << endl;
	deleteEvenNumber(randomNumber);
	printVector(randomNumber);
	
	return 0;
}