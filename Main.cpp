#include <iostream>
#include <string>
#include <windows.h>
#include <cstring>
#include "geraValores.hpp"
#include "processandoDados.hpp"


std::string tipoDado = "";


int main()
{

	ProcessandoDados process;
	std::vector<int> random1;
	std::vector<int> random2;
	std::vector<int> random3;
	std::vector<int> random4;
	std::string confirm;

	std::cout << "Deseja realizar o processamento completo das informações ou de forma reduzida? (c/r)" << std::endl;
	std::cin >> confirm;

	if (confirm == "c" || confirm == "C") {
		random1 = GeraValores::geraVetor(1000);
		random2 = GeraValores::geraVetor(3000);
		random3 = GeraValores::geraVetor(5000);
		random4 = GeraValores::geraVetor(10000);
	}
	else if (confirm == "r" || confirm == "R") {
		random1 = GeraValores::geraVetor(100);
		random2 = GeraValores::geraVetor(300);
		random3 = GeraValores::geraVetor(500);
		random4 = GeraValores::geraVetor(1000);
	}
	system("clear||cls");

	std::cout << "Por favor, aguarde um instante que as informacoes ja irao ser processadas..." << std::endl;
	process.juntandoDados(random1, random2, random3, random4);
	std::this_thread::sleep_for(std::chrono::seconds(2));

	process.leituraNormal();


	std::cout << std::endl;
	std::cout << "Esse foi o processamento de dados de forma sincrona, deseja realizar o mesmo processamento de forma paralela? (s/n)" << std::endl;
	std::cin >> confirm;

	if (confirm == "s" || confirm == "S") {
		process.multiTask();
	}
	else {
		exit;
	}


	return 0;
}

