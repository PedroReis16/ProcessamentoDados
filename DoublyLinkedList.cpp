#pragma once
#include "Node.cpp"

class DoublyLinkedList {
private:
	Node* head;
	Node* tail;

public:
	DoublyLinkedList() {
		this->head = nullptr;
		this->tail = nullptr;
	}

	void add(int value) {
		Node* newNode = new Node(value);

		if (!head) {
			head = newNode;
			tail = newNode;
		}
		else {
			tail->next = newNode;
			newNode->prev = tail;
			tail = newNode;
		}
	}
	void remove(int value) {
		Node* current = head;

		while (current)
		{
			if (current->value == value) {
				if (current == head) {
					head = current->next;

					if (head) {
						head->prev = nullptr;
					}
					else {
						tail = nullptr;
					}
				}
				else if (current == tail) {
					tail = current->prev;
					tail->next = nullptr;
				}
				else {
					current->prev->next = current->next;
					current->next->prev = current->prev;
				}
				delete current;
				return;
			}
			current = current->next;
		}
		return;
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

