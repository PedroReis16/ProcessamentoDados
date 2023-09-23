#pragma once
#include <vector>
#include <random>
#include "LinkedList.cpp"
#include "DoublyLinkedList.cpp"

class GeraValores
{
public:
	static std::vector<int> geraAleatorios(int quantidade);
	std::vector<int> geraVetor(std::vector<int> aleatorios);
	LinkedList geraListaEncadeada(std::vector<int> aleatorios);
	DoublyLinkedList geraListaDuplamenteEncadeada(std::vector<int> aleatorios);
};

