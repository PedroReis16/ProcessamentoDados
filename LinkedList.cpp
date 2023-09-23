#include "linkedList.hpp"

LinkedList::LinkedList() {
	head = nullptr;
}

void LinkedList::add(int value) {
	Node* newNode = new Node(value);
	if (head == nullptr) {
		head = newNode;
	}
	else {
		Node* current = head;
		while (current->next != nullptr) {
			current = current->next;
		}
		current->next = newNode;
	}
}
void LinkedList::addRange(std::vector<int> values) {
	for (int i : values) {
		add(i);
	}
}
void LinkedList::remove(int value) {
	if (head == nullptr) {
		return;
	}

	if (head->value == value) {
		Node* temp = head;
		head = head->next;
		delete temp;
		return;
	}

	Node* current = head;
	while (current->next != nullptr && current->next->value != value)
	{
		current = current->next;
	}
	if (current->next != nullptr) {
		Node* temp = current->next;
		current->next = current->next->next;
		delete temp;
	}
}
int LinkedList::indexOf(int value) {
	Node* current = head;
	int index = 0;

	while (current) {
		if (current->value == value) {
			return index;
		}
		current = current->next;
		index++;
	}
	return -1;
}
int LinkedList::getValueAtPosition(int value) {
	Node* current = head;
	int currentPosition = 0;

	while (current)
	{
		if (currentPosition == value) {
			return current->value;
		}
		current = current->next;
		currentPosition++;
	}
	return -1;
}
int LinkedList::size() {
	int size = 0;
	Node* current = head;

	while (current)
	{
		size++;
		current = current->next;
	}
	return size;
}


