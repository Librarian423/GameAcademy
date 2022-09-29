#pragma once

template<typename T>
struct Node
{
	T value;
	Node<T>* next;

	Node<T>(T value, Node<T>* next = nullptr)
		: value(value), next(next) {}
};

template<typename T>
class LinkedList
{
private:
	Node<T>* head;
	int count;

	LinkedList(const LinkedList& ref) {}
	LinkedList& operator=(const LinkedList& ref) {}

public:
	LinkedList();
	~LinkedList();

	void PushFront(T value);
	void PopFront();

	void Clear();
	void Insert(Node<T>* node, T v);
	void Erase(Node<T>* node);;

	Node<T>* Find(T value);

	void Print();

	int GetCount()
	{
		return count;
	}

	Node<T>* GetHead()
	{
		return head;
	}
};
