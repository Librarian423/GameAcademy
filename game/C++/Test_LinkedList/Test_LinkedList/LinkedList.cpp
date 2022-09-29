#include "LinkedList.h"
#include <iostream>

using namespace std;

template<typename T>
inline LinkedList<T>::LinkedList()
	: head(nullptr), count(0)
{

}

template<typename T>
inline LinkedList<T>::~LinkedList()
{
}

template<typename T>
inline void LinkedList<T>::PushFront(T value)
{
	Node<T>* NewNode = new Node<T>(value, head);
	head = NewNode;
	count++;
}

template<typename T>
inline void LinkedList<T>::PopFront()
{
	if ( head->next == nullptr )
	{
		cout << "Empty list" << endl;
		return;
	}
	Node<T>* DelNode = head;
	head = head->next;
	count--;
	delete DelNode;
}

template<typename T>
void LinkedList<T>::Clear()
{
	for ( auto del : head )
	{
		delete head[del];
	}
	delete head;
}

template<typename T>
inline void LinkedList<T>::Insert(Node<T>* node, T v)
{
	Node<int>* current = head;
	Node<int>* prev = current;
	int isFirst = 0;
	while ( current != node )
	{
		prev = current;
		current = current->next;
		isFirst = 1;
	}
	if ( isFirst == 0 )
	{
		PushFront(v);
		return;
	}
	if ( current == node )
	{
		Node<T>* NewNode = new Node<T>(v, prev->next);
		prev->next = NewNode;
		count++;
	}
}

template<typename T>
inline void LinkedList<T>::Erase(Node<T>* node)
{
	Node<int>* current = head;
	Node<int>* prev = current;
	int isFirst = 0;
	while ( current != node )
	{
		prev = current;
		current = current->next;
		isFirst = 1;
	}
	if ( isFirst == 0 )
	{
		PopFront();
		return;
	}
	if ( current == node )
	{
		Node<T>* DelNode = current;
		prev->next = current->next;
		delete DelNode;
		count--;
	}
}

template<typename T>
inline Node<T>* LinkedList<T>::Find(T value)
{
	Node<int>* current = head;
	while ( current != nullptr )
	{
		current = current->next;
		if ( current->value == value )
		{
			return current;
		}
	}
	return nullptr;
}

template<typename T>
inline void LinkedList<T>::Print()
{
	Node<int>* current = head;
	while (current != nullptr)
	{
		std::cout << current->value << " ";
		current = current->next;
	}
	cout << endl;
}
