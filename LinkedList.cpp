#pragma once
#include "Node.cpp"

class LinkedList
{
private:
	Node* head;
public:
	
	LinkedList() {
		head = nullptr;
	}

	void add(int value) {
		Node* newNode = new Node(value);
		newNode->next = head;
		head = newNode;
	}
	void remove(int value) {
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
	int indexOf(int value) {
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
	int getValueAtPosition(int value) {
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
	int sizeOf() {
		int size = 0;
		Node* current = head;

		while (current)
		{
			size++;
			current = current->next;
		}
	}
};

