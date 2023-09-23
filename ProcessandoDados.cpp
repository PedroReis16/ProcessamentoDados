#include "processandoDados.hpp"

long long ProcessandoDados::randomTimer() {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<>intDistribution(1000, 10000);

	return (long long)intDistribution(gen);
}
void ProcessandoDados::processaDevagar(std::vector<int>conjunto1, std::vector<int>conjunto2, std::vector<int>conjunto3, std::vector<int>conjunto4) {

	std::cout << "Primeiro conjunto" << std::endl;
	for (int i : conjunto1)
	{
		std::cout << "Valor atual: " << i << " " << std::endl;

		

		std::cout << "Processamento concluido, o valor sera removido em instantes..." << std::endl;;

	}

}
void ProcessandoDados::processaDevagar(LinkedList conjunto1, LinkedList conjunto2, LinkedList conjunto3, LinkedList conjunto4) {


}
void ProcessandoDados::processaDevagar(DoublyLinkedList conjunto1, DoublyLinkedList conjunto2, DoublyLinkedList conjunto3, DoublyLinkedList conjunto4) {

}