#pragma once
#include "Node.hpp"
#include <vector>

class LinkedList {
private:
	Node* head;
public:
	LinkedList();

	void add(int value);
	void addRange(std::vector<int> values);
	void remove(int value);
	int indexOf(int value);
	int getValueAtPosition(int value);
	int size();

};