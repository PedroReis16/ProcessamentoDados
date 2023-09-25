#pragma once
#include <iostream>
#include <random>
#include <chrono>
#include <thread>
#include <string>
#include "LinkedList.hpp"
#include "doublyLinkedList.hpp"
#include "threadPool.hpp"

class ProcessandoDados
{
private:
	static long long randomTimer();
	void lendoDados(int value,std::string type);
	void lendoListaSimples();
	void lendoListaEncadeada();
	void lendoVetor();
	std::vector<int> vector;
	LinkedList linkedList;
	DoublyLinkedList doublyLinkedList;

public:
	void processandoDados();
	void processandoDadosParalelo();
	void juntandoDados(std::vector<int>conjunto1, std::vector<int>conjunto2, std::vector<int>conjunto3, std::vector<int>conjunto4);
};

