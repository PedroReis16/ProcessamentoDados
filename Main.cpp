#include <iostream>
#include "geraValores.hpp"

int main()
{
	std::vector<int> teste = GeraValores::geraAleatorios(50);

	for (int i : teste) {
		std::cout << i << " ";
	}

	std::cout << std::endl << "Lista encadeada simples" << std::endl;

	LinkedList testeLista;
	testeLista.addRange(teste);

	for (int i = 0; i < testeLista.size(); i++) {

		std::cout << testeLista.getValueAtPosition(i) << " ";
	}

	std::cout << std::endl << "Lista encadeada duplamente" << std::endl;

	DoublyLinkedList testeLista2;
	testeLista2.addRange(teste);

	for (int i = 0; i < testeLista2.size(); i++) {

		std::cout << testeLista2.getValueAtPosition(i) << " ";
	}

	return 0;
}

