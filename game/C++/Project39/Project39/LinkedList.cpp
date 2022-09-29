#include <iostream>
#include "LinkedList.h"

using namespace std;

template <typename T>
inline LinkedList<T>::LinkedList()
	:head(NULL), count(0)
{

}

template <typename T>
inline LinkedList<T>::~LinkedList()
{
	auto current = head;
	while ( head != head )
	{
		auto temp = current;
		current = current->next;
		delete current;
	}
	head = nullptr;
}

template <typename T>
inline void LinkedList<T>::PushFront(T value)
{
	Node<T>* NewNode = new Node<T>(value);

	NewNode->next = head;
	head = NewNode;
	count++;

	return;
}

template <typename T>
inline void LinkedList<T>::PopFront()
{
	auto DelNode = head;
	if ( head == NULL )
	{
		return;
	}
	else
	{
		head = DelNode->next;
		delete DelNode;
	}
	count--;
	return;
}

template <typename T>
inline void LinkedList<T>::Insert(Node<T>* pos, T value)
{
	if ( pos == nullptr )
	{
		return;
	}
	else if ( count <= 1 )
	{
		PushFront(value);
	}
	else
	{
		int num = 0;
		Node<T>* current = head;
		Node<T>* prev = current;
		while ( current != pos )
		{
			prev = current;
			current = current->next;
			num++;
		}
		if ( current != pos )
		{
			return;
		}
		else if ( current == pos && num == 0 )
		{
			PushFront(value);
		}
		else if ( current == pos && num != 0 )
		{
			Node<T>* NewNode = new Node<T>(value);
			NewNode->next = prev->next;
			prev->next = NewNode;
		}
	}
	count++;
}

template <typename T>
inline void LinkedList<T>::Erase(Node<T>* pos)
{
	if ( pos == nullptr )
	{
		return;
	}
	else if ( count <= 1 )
	{
		PopFront();
		return;
	}
	else
	{
		Node<T>* DelNode = head;
		Node<T>* prev = DelNode;
		int num = 0;

		while ( DelNode != pos )
		{
			prev = DelNode;
			DelNode = DelNode->next;
			num++;
		}
		if ( num == 0 )
		{
			PopFront();
		}
		else if ( DelNode != NULL )
		{
			prev->next = DelNode->next;
			delete DelNode;
		}
	}
	count--;
}

template <typename T>
inline Node<T>* LinkedList<T>::Find(T value)
{
	Node<T>* node = head;

	while ( node != nullptr )
	{
		if ( node->value == value )
		{
			return node;
		}
		node = node->next;
	}

	return nullptr;
}

template <typename T>
inline void LinkedList<T>::Print()
{
	//cout << "test " << count << endl;
	Node<T>* current = head;
	if ( count == 0 )
	{
		cout << "Empty list" << endl;
		return;
	}
	while ( current != nullptr )
	{
		std::cout << current->value << " ";
		current = current->next;
	}
	cout << endl;
}

template <typename T>
bool LinkedList<T>::GetPrevNode(Node<T>* node, Node<T>*& prev)
{
	prev = nullptr;
	Node<T>* current = head;

	for ( int i = 0; i < count; i++ )
	{
		if ( node == current )
		{
			return true;
		}
		prev = current;
		current = current->next;
	}
	return false;
}