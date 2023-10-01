#pragma once
#include <vector>
#include <mutex>

class Stack
{
private:
	std::vector<int> elementos;
	std::mutex mutex;
public:

	void push(int elemento);
	void pop();
	bool empty();
	int top();
	int indexOf(int posicao);
	int size();

};

