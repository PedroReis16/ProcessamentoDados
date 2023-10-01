#include "leitura.hpp"

void Leitura::lendoVetor(int value, int pause) {
	std::string saida = "O pagamento de ";
	std::string saida2 = " foi processado com sucesso";

	std::this_thread::sleep_for(std::chrono::milliseconds(50));
	std::cout << "Valor atual: " << value << " " << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(pause));
	std::cout << saida << value << saida2 << std::endl;;
}
void Leitura::lendoPilha(int value, int pause) {
	std::this_thread::sleep_for(std::chrono::milliseconds(50));
	std::cout << "O pagamento no valor de " << value << " esta demorando mais que o normal para ser processado." << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(7));
	std::this_thread::sleep_for(std::chrono::milliseconds(pause));
	std::cout << "O pagamento de " << value << " foi processado com sucesso" << std::endl;
}