#pragma once
#include <random>
#include "leitura.hpp"
#include "linkedList.hpp"
#include "doublyLinkedList.hpp"
#include "threadPool.hpp"
#include <stack>

class ProcessandoDados
{
private:
	int randomTimer();
	int biggestValue;
	std::vector<int> vector;
	std::vector<int> generalList;
	std::stack<int> toProcess;
	LinkedList linkedList;
	LinkedList generalLinkedList;
	DoublyLinkedList doublyLinkedList;
	void mergeSort(std::vector<int>& vector, int left, int right);
	void merge(std::vector<int>& vector, int left, int middle, int right);
	void processandoInfo();
	void stackProcess();
	void normalProcess(int value);

public:
	void leituraNormal();
	void multiTask();
	void juntandoDados(std::vector<int>conjunto1, std::vector<int>conjunto2, std::vector<int>conjunto3, std::vector<int>conjunto4);
};

