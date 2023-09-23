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

		if (head->number == value) {
			Node* temp = head;
			head = head->next;
			delete temp;
			return;
		}

		Node* current = head;
		while (current->next != nullptr && current->next->number != value)
		{
			current = current->next;
		}
		if (current->next != nullptr) {
			Node* temp = current->next;
			current->next = current->next->next;
			delete temp;
		}
	}
};

