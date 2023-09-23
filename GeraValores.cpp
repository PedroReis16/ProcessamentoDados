#include "IGeraValores.hpp"

std::vector<int> GeraValores::geraAleatorios(int quantidade) {
	std::vector<int> saida;
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<>intDistribution(1, 10000);

	for (int i = 0; i < quantidade; i++) {
		int numero = intDistribution(gen);
		saida.push_back(numero);
	}

	return saida;
}

std::vector<int> GeraValores::geraVetor(std::vector<int> aleatorios) {
	std::vector<int>saida;

	for (int i : aleatorios) {
		saida.push_back(i);
	}
	return saida;
}
LinkedList GeraValores::geraListaEncadeada(std::vector<int> aleatorios) {
	LinkedList saida;
	
	for (int i : aleatorios) {
		saida.add(i);
	}
	return saida;
}
DoublyLinkedList GeraValores::geraListaDuplamenteEncadeada(std::vector<int> aleatorios) {
	DoublyLinkedList saida;

	for (int i : aleatorios) {
		saida.add(i);
	}
	return saida;
}
