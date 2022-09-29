#pragma once

template <typename T>
struct Node
{
	Node(T value)
		:value(value), next(NULL)
	{
		
		this->value = value;
	}
	T value;
	Node<T>* next;
};

template <typename T>
class LinkedList
{
public:
	LinkedList();
	~LinkedList();

	void PushFront(T value);
	void PopFront();

	void Insert(Node<T>* pos, T value);
	void Erase(Node<T>* pos);

	Node<T>* Find(T value);

	void Print();

	bool GetPrevNode(Node<T>* node, Node<T>*& prev);

	int GetCount()
	{
		return count;
	}

	Node<T>* GetHead()
	{
		return head;
	}
	

private:
	Node<T>* head;
	int count;
};

