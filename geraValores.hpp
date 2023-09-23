#pragma once
#include <random>
#include "LinkedList.hpp"
#include "DoublyLinkedList.hpp"

class GeraValores
{
private:
	static std::vector<int> geraAleatorios(int quantidade);
public:
	static std::vector<int> geraVetor(int quantidade);
	static LinkedList geraListaEncadeada(int quantidade);
	static DoublyLinkedList geraListaDuplamenteEncadeada(int quantidade);
};

