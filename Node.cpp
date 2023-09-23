#include "node.hpp"

Node::Node(int value) {
	this->value = value;
	this->next = nullptr;
	this->prev = nullptr;
}

