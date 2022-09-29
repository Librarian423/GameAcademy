#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"

using namespace std;

int main()
{
	LinkedList<int> list;
	//Node<int>* current = list.GetHead();

	list.PushFront(1);
	list.PushFront(2);
	list.PushFront(3);
	list.Print(); // 3 2 1

	list.PopFront();
	list.Print(); // 2 1

	auto node = list.GetHead();
	list.Insert(node, 10);
	list.Print(); // 10 2 1

	node = list.Find(1);
	list.Insert(node, 100);
	list.Print(); // 10 2 100 1 

	node = list.Find(3);
	list.Insert(node, 100);
	list.Print(); // 10 2 100 1 

	node = list.Find(100);
	list.Erase(node);
	list.Print(); // 10 2 1

	return 0;
}