#include "leitura.hpp"

void Leitura::lendoVetor(int value, int pause) {
	std::string saida = "O pagamento de ";
	std::string saida2 = " foi processado com sucesso";

	std::this_thread::sleep_for(std::chrono::milliseconds(50));
	std::cout << "Valor atual: " << value << " " << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(pause));
	std::cout << saida << value << saida2 << std::endl;;
}
void Leitura::lendoListaSimples(int value, int pause) {
	std::string saida = "O pagamento de ";
	std::string saida2 = " foi processado com sucesso";

	std::this_thread::sleep_for(std::chrono::milliseconds(50));
	std::cout << "Valor atual: " << value << " " << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(pause));
	std::cout << saida << value << saida2 << std::endl;;
}
void Leitura::lendoListaDupla(int value, int pause) {
	std::string saida = "O pagamento de ";
	std::string saida2 = " foi processado com sucesso";

	std::this_thread::sleep_for(std::chrono::milliseconds(50));
	std::cout << "Valor atual: " << value << " " << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(pause));
	std::cout << saida << value << saida2 << std::endl;;
}
void Leitura::lendoPilha(int value, int pause) {
	std::string saida = "O pagamento de ";
	std::string saida2 = " foi processado com sucesso";

	std::this_thread::sleep_for(std::chrono::milliseconds(50));
	std::cout << "Valor atual: " << value << " " << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(pause));
	std::cout << saida << value << saida2 << std::endl;;
}