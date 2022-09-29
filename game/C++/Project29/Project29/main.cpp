#include <iostream>
#include <list>
#include <vector>

using namespace std;

struct Item
{
	int itemId;
	int cost;
};

template <typename T>
class IsOver20Under30 :public unary_function<T, bool>
{
public:
	bool operator()(const T& elem)
	{
		return elem >= 20 && elem < 30;
	}

private:

};

template <typename T>
class CompareItem
{
public:
	bool operator()(const T& lhs, const T& rhs)
	{
		return lhs.itemId < rhs.itemId;
	}

private:

};



int main()
{
	list<int> intList;
	intList.push_back(10);
	intList.push_back(20);
	intList.push_back(30);

	intList.remove_if(IsOver20Under30<int>());
	for ( auto i: intList)
	{
		cout <<i << endl;
	}
	////////////////////////////////
	Item item1 = { 0,1 };
	Item item2 = { 2,3 };
	Item item3 = { 3,4 };

	list<Item> itemList;
	itemList.push_back(item1);
	itemList.push_back(item3);
	itemList.push_back(item2);

	itemList.sort(CompareItem<Item>());

	for ( auto& i : itemList )
	{
		cout << i.itemId << endl;
	}
}