#include <iostream>
#include "geraValores.hpp"
#include "processandoDados.hpp"
#include <string>

std::string tipoDado = "";

void coletandoDados() {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<>intDistribution(1, 3);

	switch (intDistribution(gen))
	{
	case 1:
		tipoDado = "Vetor";
		std::this_thread::sleep_for(std::chrono::seconds(2));

		ProcessandoDados::processaDevagar(GeraValores::geraVetor(1000), GeraValores::geraVetor(3000), GeraValores::geraVetor(5000), GeraValores::geraVetor(10000));

		break;
	case 2:
		tipoDado = "Lista encadeada";
		std::this_thread::sleep_for(std::chrono::seconds(2));

		ProcessandoDados::processaDevagar(GeraValores::geraListaEncadeada(1000), GeraValores::geraListaEncadeada(3000), GeraValores::geraListaEncadeada(5000), GeraValores::geraListaEncadeada(10000));

		break;
	case 3:
		tipoDado = "Lista duplamente encadeada";
		std::this_thread::sleep_for(std::chrono::seconds(2));

		ProcessandoDados::processaDevagar(GeraValores::geraListaDuplamenteEncadeada(1000), GeraValores::geraListaDuplamenteEncadeada(3000), GeraValores::geraListaDuplamenteEncadeada(5000), GeraValores::geraListaDuplamenteEncadeada(10000));
		break;
	}
}

int main()
{
	std::cout << "Por favor, aguarde um instante que as informacoes ja irao ser processadas..." << std::endl;
	coletandoDados();
	std::cout << "A informacao processado(a) se trata de um(a): " << tipoDado << std::endl;

	return 0;
}

