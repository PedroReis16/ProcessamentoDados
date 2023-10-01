#pragma once
#include <random>
#include "leitura.hpp"
#include "linkedList.hpp"
#include "doublyLinkedList.hpp"
#include "stack.hpp"
#include "cronometro.hpp"

class ProcessandoDados
{
private:
	int randomTimer();
	int biggestValue;
	std::vector<int> vector;
	std::vector<int> generalList;
	Stack toProcess;
	LinkedList linkedList;
	LinkedList generalLinkedList;
	DoublyLinkedList doublyLinkedList;
	std::mutex stackMutex;
	void mergeSort(std::vector<int>& vector, int left, int right);
	void merge(std::vector<int>& vector, int left, int middle, int right);
	void processandoInfo();
	void stackProcess();
	void normalProcess(int value);
	void waitForCompletion();
	Cronometro* parciais = new Cronometro();
	std::condition_variable condition_;
	std::mutex listMutex;

public:
	void resultados();
	void leituraNormal();
	void multiTask();
	void juntandoDados(std::vector<int>conjunto1, std::vector<int>conjunto2, std::vector<int>conjunto3, std::vector<int>conjunto4);
};

