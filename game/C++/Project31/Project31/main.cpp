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
	
	Item item1 = { "��Į", 'A', 100};
	Item item2 = { "����", 'B', 100};
	Item item3 = { "�ظ�", 'C', 100};

	
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

	if ( itemMap.find("�ܵ�")!=itemMap.end() )
	{
		cout << "�ִ�" << endl;
	}
	else
	{
		cout << "����" << endl;
	}
	itemMap.erase("�ظ�");
	if ( itemMap.find("�ظ�") != itemMap.end() )
	{
		cout << "�ִ�" << endl;
	}
	else
	{
		cout << "����" << endl;
	}

	for ( auto pair : itemMap )
	{
		cout << pair.first << " ";
		cout << pair.second.name << " ";
		cout << pair.second.type << " ";
		cout << pair.second.cost << endl;
	}
	//����
	//umap.insert(unordered_map<int, string>::value_type(10, "ten"));
	////umap.insert(pair<int, string>(10, "ten"));
	//umap.insert(pair);
	//umap[1] = "one";

	////����
	//umap.erase(1);

	////�˻�
	//auto it = umap.find(10);
	//if ( it != umap.end() )
	//{
	//	cout << it->second << endl;
	//}


	return 0;
}