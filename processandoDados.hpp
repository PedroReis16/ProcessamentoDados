#pragma once
#include <random>
#include "leitura.hpp"
#include "linkedList.hpp"
#include "doublyLinkedList.hpp"
#include "threadPool.hpp"
#include "pilha.hpp"

class ProcessandoDados
{
private:
	int randomTimer();
	/*void lendoDados(int value, std::string type);
	void lendoListaSimples();
	void lendoListaEncadeada();
	void lendoVetor();
	void lendoVetor2();
	void lendoPilha();*/
	/*void processaVetor();
	void processamento();*/
	int biggestValue;
	std::vector<int> vector;
	std::vector<int> vector2;
	std::vector<int> generalList;
	LinkedList linkedList;
	LinkedList generalLinkedList;
	DoublyLinkedList doublyLinkedList;
	Pilha pilha;
	void mergeSort(std::vector<int>& vector, int left, int right);
	void merge(std::vector<int>& vector, int left, int middle, int right);


public:
	void leituraNormal();
	/*void processandoDados();
	void processandoDadosParalelo();
	void processandoDadosParaleloPilha();*/
	void juntandoDados(std::vector<int>conjunto1, std::vector<int>conjunto2, std::vector<int>conjunto3, std::vector<int>conjunto4);
};

