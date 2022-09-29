#include <iostream>
#include <list>
#include <vector>
using namespace std;

struct Item
{
	int itemId;
	int cost;
};

int main()
{
	Item item1 = { 0,1 };
	Item item2 = { 2,3 };
	Item item3 = { 3,4 };

	list<Item> itemList;
	itemList.push_back(item1);
	itemList.push_back(item2);
	itemList.push_back(item3);

	for ( auto& item : itemList )
	{
		cout << item.itemId << " ";
		cout << item.cost << endl;
	}
	cout << endl;

	itemList.pop_front();
	for ( auto& item : itemList )
	{
		cout << item.itemId << " ";
		cout << item.cost << endl;
	}
	cout << endl;
	itemList.clear();
	if ( itemList.empty() )
	{

	}
}

