#pragma once
#include <random>
#include "LinkedList.hpp"
#include "DoublyLinkedList.hpp"

class GeraValores
{
public:
	static std::vector<int> geraAleatorios(int quantidade);
	std::vector<int> geraVetor(std::vector<int> aleatorios);
	LinkedList geraListaEncadeada(std::vector<int> aleatorios);
	DoublyLinkedList geraListaDuplamenteEncadeada(std::vector<int> aleatorios);
};

