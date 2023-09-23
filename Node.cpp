class Node {
public:
	int number;
	Node* next;
	Node* prev;

	Node(int number) {
		this->number = number;
		this->next = nullptr;
		this->prev = nullptr;
	}
};
