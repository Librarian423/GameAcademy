#include <iostream>
#include <unordered_map>
#include <map>

using namespace std;

struct Item
{
	string name;
	char type;
	int cost;
};

int main()
{
	map<string, Item> itemMap;
	
	Item item1 = { "긴칼", 'A', 100};
	Item item2 = { "방패", 'B', 100};
	Item item3 = { "해머", 'C', 100};

	
	itemMap.insert({ item1.name, item1 });
	itemMap.insert(pair<string, Item>(item2.name, item2));
	itemMap[item3.name] = item3;
	itemMap[item3.name] = item1;

	for ( auto pair : itemMap )
	{
		cout << pair.first << " ";
		cout << pair.second.name << " ";
		cout << pair.second.type << " ";
		cout << pair.second.cost << endl;
	}

	if ( itemMap.find("단도")!=itemMap.end() )
	{
		cout << "있다" << endl;
	}
	else
	{
		cout << "없다" << endl;
	}
	itemMap.erase("해머");
	if ( itemMap.find("해머") != itemMap.end() )
	{
		cout << "있다" << endl;
	}
	else
	{
		cout << "없다" << endl;
	}

	for ( auto pair : itemMap )
	{
		cout << pair.first << " ";
		cout << pair.second.name << " ";
		cout << pair.second.type << " ";
		cout << pair.second.cost << endl;
	}
	//산입
	//umap.insert(unordered_map<int, string>::value_type(10, "ten"));
	////umap.insert(pair<int, string>(10, "ten"));
	//umap.insert(pair);
	//umap[1] = "one";

	////삭제
	//umap.erase(1);

	////검색
	//auto it = umap.find(10);
	//if ( it != umap.end() )
	//{
	//	cout << it->second << endl;
	//}


	return 0;
}