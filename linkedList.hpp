#pragma once
#include "Node.hpp"
#include <vector>
#include <Mutex>

class LinkedList {
private:
	Node* head;
	std::mutex mutex;
public:
	LinkedList();

	void add(int value);
	void addRange(std::vector<int> values);
	void remove(int value);
	int indexOf(int value);
	int getValueAtPosition(int value);
	int size();

};