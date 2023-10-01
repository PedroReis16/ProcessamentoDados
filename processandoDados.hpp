#pragma once
#include <iostream>
#include <random>
#include <chrono>
#include <thread>
#include <string>
#include "LinkedList.hpp"
#include "doublyLinkedList.hpp"
#include "threadPool.hpp"
#include "pilha.hpp"

class ProcessandoDados
{
private:
	static long long randomTimer();
	void lendoDados(int value, std::string type);
	void lendoListaSimples();
	void lendoListaEncadeada();
	void lendoVetor();
	void lendoVetor2();
	void processaVetor();
	void lendoPilha();
	void processamento();
	void mergeSort(std::vector<int>& vector, int left, int right);
	void merge(std::vector<int>& vector, int left, int middle, int right);
	int biggerValue;
	std::vector<int> vector;
	std::vector<int> vector2;
	std::vector<int> generalList;
	LinkedList linkedList;
	LinkedList generalLinkedList;
	DoublyLinkedList doublyLinkedList;
	Pilha pilha;


public:
	void processandoDados();
	void processandoDadosParalelo();
	void processandoDadosParaleloPilha();
	void juntandoDados(std::vector<int>conjunto1, std::vector<int>conjunto2, std::vector<int>conjunto3, std::vector<int>conjunto4);
};

