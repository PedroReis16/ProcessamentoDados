#include "leitura.hpp"

void Leitura::lendoVetor(int value, int pause) {
	std::string saida = "O pagamento de ";
	std::string saida2 = " foi processado com sucesso";

	//std::this_thread::sleep_for(std::chrono::milliseconds(50));
	std::cout << "Valor atual: " << value << " " << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(pause));
	std::cout << saida << value << saida2 << std::endl;;
}
void Leitura::lendoPilha(int value, int pause) {
	//std::this_thread::sleep_for(std::chrono::milliseconds(50));
	std::cout << "Valor atual: " << value << " " << std::endl;
	std::cout << "O pagamento no valor de " << value << " esta demorando mais que o normal para ser processado." << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(7));
	std::this_thread::sleep_for(std::chrono::milliseconds(pause));
	std::cout << "O pagamento de " << value << " foi processado com sucesso" << std::endl;
}
void Leitura::resultados(double tempoVetor, double tempoSimples, double tempoDupla, double tempoParalelo) {
	std::cout << "Tempo total de medições para cada tipo de processamento em segundos: " << std::endl;

	std::cout << "Vetor: " << tempoVetor << std::endl;
	std::cout << "Simplesmente encadeado: " << tempoSimples << std::endl;
	std::cout << "Duplamente encadeado: " << tempoDupla << std::endl;
	std::cout << "Paralelo: " << tempoParalelo << std::endl;

}