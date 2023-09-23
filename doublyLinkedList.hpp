#pragma once
#include "Node.hpp"
#include <vector>

class DoublyLinkedList
{
private:
	Node* head;
	Node* tail;
public:
	DoublyLinkedList();

	void add(int value);
	void addRange(std::vector<int>values);
	void remove(int value);
	int indexOf(int value);
	int getValueAtPosition(int value);
	int size();

private:

};

