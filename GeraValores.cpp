#include "geraValores.hpp"

std::vector<int> GeraValores::geraAleatorios(int quantidade) {
	std::vector<int> saida;
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<>intDistribution(1, 1000000);

	for (int i = 0; i < quantidade; i++) {
		int numero = intDistribution(gen);
		saida.push_back(numero);
	}

	return saida;
}

std::vector<int> GeraValores::geraVetor(int quantidade) {

	std::vector<int>saida;

	for (int i : geraAleatorios(quantidade)) {
		saida.push_back(i);
	}
	return saida;
}
