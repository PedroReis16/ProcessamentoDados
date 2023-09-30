#include <iostream>
#include <string>
#include <windows.h>
#include <cstring>
#include "geraValores.hpp"
#include "processandoDados.hpp"


std::string tipoDado = "";


int main()
{
	std::cout << "Por favor, aguarde um instante que as informacoes ja irao ser processadas..." << std::endl;

	ProcessandoDados process;
	std::vector<int> random1 = GeraValores::geraVetor(10);
	std::vector<int> random2 = GeraValores::geraVetor(10);
	std::vector<int> random3 = GeraValores::geraVetor(10);
	std::vector<int> random4 = GeraValores::geraVetor(10);

	process.juntandoDados(random1, random2, random3, random4);
	std::this_thread::sleep_for(std::chrono::seconds(2));

	std::string confirm;

	std::cout << "Todos os dados foram devidamente coletados, continuar? (s/n)" << std::endl;
	std::cin >> confirm;

	if (confirm == "s" || confirm == "S") {
		process.processandoDados();
	}
	else {
		exit;
	}

	std::cout << std::endl;
	std::cout << "Esse foi o processamento de dados de forma sincrona, deseja realizar o mesmo processamento de forma paralela? (s/n)" << std::endl;
	std::cin >> confirm;

	if (confirm == "s" || confirm == "S") {
		process.processandoDadosParalelo();
	}
	else {
		exit;
	}
	
	std::cout << std::endl;
	std::cout << "Deseja continuar? (s/n)" << std::endl;
	std::cin >> confirm;

	/*if (confirm == "s" || confirm == "S") {
		process.processandoDadosParaleloPilha();
	}
	else {
		exit;
	}*/

	return 0;
}

