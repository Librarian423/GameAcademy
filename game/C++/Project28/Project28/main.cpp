#include <iostream>
#include <list>
#include <vector>
using namespace std;

void print(list<int>& ref)
{
	for ( auto& i : ref )
	{
		cout << i << " ";

	}
	cout << endl;
}

void deleteNumber(list<int>& ref)
{
	for ( auto i = ref.begin(); i != ref.end(); )
	{
		if ( *i >= 100 )
		{
			i = ref.erase(i);
		}
		else
		{
			i++;
		}
	}
}

int main()
{
	

	list<int>intList;
	
	list<int>::iterator it;

	intList.push_back(10);
	intList.push_back(20);
	intList.push_back(30);

	// 1. [0]에 100을 삽입한다.	100 10 20 30
	it = intList.begin();
	it = intList.insert(it,100);
	it++;

	// 2. [1]에 200을 2개 삽입한다. 100 200 200 10 20 30 
	it = intList.insert(it, 2, 200);
	print(intList);

	// 3. [2]삭제 100 200 10 20 30 
	it = intList.erase(it);
	print(intList);

	// 4. list2를 만들어서 1, 2, 3으로 초기화하고 
	vector<int>vector1({ 1,2,3 });

	// 5. vector1을 list1 [1]에 삽입한다. 100 1 2 3 200 10 20 30
	it = intList.insert(it, vector1.begin(), vector1.end());
	print(intList);

	// 6. list1 100 이상인 정수 삭제 1 2 3 10 20 30
	deleteNumber(intList);
	print(intList);

	// 7. 마지막 요소 삭제 1 2 3 10 20
	intList.pop_back();
	print(intList);

	return 0;
}