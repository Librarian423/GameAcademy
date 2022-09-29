#include <iostream>
#include <list>

using namespace std;

struct Node
{
	int data;
	struct Node* link;
};

struct HeadNode
{
	Node* head;
};

//class NodeClass
//{
//public:
//	HeadNode* createList();
//	
//	void addNode(HeadNode* hNode, int data);
//	void addSearchNode();
//	void deleteNode();
//	void deleteSearchNode();
//	void searchNode();
//	void printAll();
//
//};

HeadNode* createList()
{
	HeadNode* headnode = new HeadNode;
	headnode->head = NULL;
	return headnode;
}

bool checkEmpty(HeadNode* HeadList)
{
	if ( HeadList->head == NULL )
	{
		cout << "Empty node" << endl;
		return true;
	}
	return false;
}

void addNode(HeadNode* HeadList, int data)
{
	Node* NewNode = new Node;
	Node* LastNode;
	NewNode->data = data;
	NewNode->link = NULL;

	if ( HeadList->head == NULL )
	{
		HeadList->head = NewNode;
		return;
	}
	else
	{
		LastNode = HeadList->head;
	}

	while ( LastNode->link != NULL )
	{
		LastNode = LastNode->link;
	}

	LastNode->link = NewNode;

	return;
}

void  addSearchNode(HeadNode* HeadList, int searchData, int data)
{
	if ( checkEmpty(HeadList) )
	{
		return;
	}

	Node* newNode = new Node;
	Node* prevNode = HeadList->head;


	while ( prevNode->data != searchData )
	{
		if ( prevNode->link == NULL )
		{
			cout << "Data not found" << endl;
			return;
		}
		prevNode = prevNode->link;

	}

	newNode->data = data;
	newNode->link = prevNode->link;
	prevNode->link = newNode;
	return;
}
void deleteNode(HeadNode* HeadList)
{
	Node* prevNode;
	Node* delNode;

	if ( checkEmpty(HeadList) )
	{
		return;
	}

	if ( HeadList->head->link == NULL )
	{
		delete HeadList->head;
		HeadList->head = NULL;
		cout << "delete complete";
		return;
	}
	else
	{
		prevNode = HeadList->head;
		delNode = HeadList->head->link;

		while ( delNode->link != NULL )
		{
			prevNode = delNode;
			delNode = prevNode->link;
		}
		free(delNode);
		prevNode->link = NULL;
	}
	cout << "delete complete";
	return;
}
void  deleteSearchNode(HeadNode* HeadList, int searchData)
{
	Node* prevNode = HeadList->head;
	Node* delNode;
	if ( checkEmpty(HeadList) )
	{
		return;
	}

	if ( prevNode->data == searchData )
	{
		delNode = prevNode;
		prevNode = prevNode->link;
		free(delNode);
	}
	else
	{
		while ( prevNode->link != NULL )
		{
			if ( prevNode->link->data == searchData )
			{
				delNode = prevNode->link;
				prevNode->link = prevNode->link->link;
				free(delNode);
				break;
			}
			else
			{
				prevNode = prevNode->link;
			}
		}
	}

	/*if ( HeadList->head->link == NULL )
	{
		if ( prevNode->data == searchData )
		{
			delete HeadList->head;
			HeadList->head = NULL;
			cout << "1delete complete";
			return;
		}
		else
		{
			cout << "Data not found" << endl;
			return;
		}

	}

	while ( prevNode->data != searchData )
	{
		if ( prevNode->link == NULL )
		{
			cout << "Data not found" << endl;
			return;
		}
		prevNode = prevNode->link;
	}

	cout << prevNode->data << endl;
	if ( prevNode->data == searchData )
	{
		delNode = prevNode->link;
		prevNode->link = prevNode->link->link;
		free(delNode);
		cout << "delete complete";
	}
	*/

	return;
}

void searchNode(HeadNode* HeadList, int searchData)
{
	Node* sNode = HeadList->head;
	if ( checkEmpty(HeadList) )
	{
		return;
	}

	if ( HeadList->head->link == NULL )
	{
		if ( sNode->data == searchData )
		{
			cout << "Data found: " << sNode->data << endl;
			return;
		}
		else
		{
			cout << "Data not found" << endl;
			return;
		}

	}
	while ( sNode->data != searchData )
	{
		sNode = sNode->link;
		if ( sNode->link == NULL )
		{
			break;
		}
	}
	if ( sNode->data == searchData )
	{
		cout << "Seached data: " << sNode->data << endl;
	}
	else
	{
		cout << "Data not found" << endl;
	}

	return;
}

void  printAll(HeadNode* HeadList)
{
	if ( checkEmpty(HeadList) )
	{
		return;
	}

	Node* printNode = HeadList->head;

	while ( printNode != NULL )
	{
		cout << printNode->data << " ";
		printNode = printNode->link;
	}
	cout << endl;
}

int main()
{
	//NodeClass nodeList;
	HeadNode* HeadList = createList();
	int num;
	int data;
	int searchData;

	while ( true )
	{
		cout << "1. Add   2. Search Add   3. Delete   4. Search Delete   5. Seach Data  6. Print All  7. Exit" << endl;
		cout << "input: ";
		cin >> num;
		switch ( num )
		{
		case 1:
			cout << "1. Add" << endl;
			cout << "input Add data: ";
			cin >> data;
			addNode(HeadList, data);
			break;
		case 2:
			cout << "2. Search Add" << endl;
			cout << "input Search data: ";
			cin >> searchData;
			cout << "input data: ";
			cin >> data;
			addSearchNode(HeadList, searchData, data);
			break;
		case 3:
			cout << "3. Delete" << endl;
			deleteNode(HeadList);
			break;
		case 4:
			cout << "4. Search Delete" << endl;
			cout << "input Search data: ";
			cin >> searchData;
			deleteSearchNode(HeadList, searchData);
			break;
		case 5:
			cout << "5. Seach Data" << endl;
			cout << "input Search data: ";
			cin >> searchData;
			searchNode(HeadList, searchData);
			break;
		case 6:
			cout << "6. Print All" << endl;
			printAll(HeadList);
			break;
		case 7:
			return false;
		default:
			break;
		}
		cout << endl;
	}

	return 0;
}