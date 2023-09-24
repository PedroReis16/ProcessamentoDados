#include "processandoDados.hpp"

long long ProcessandoDados::randomTimer() {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<>intDistribution(0, 10);

	return (long long)intDistribution(gen);
}
void ProcessandoDados::processaDevagar(std::vector<int>conjunto1, std::vector<int>conjunto2, std::vector<int>conjunto3, std::vector<int>conjunto4) {

	std::this_thread::sleep_for(std::chrono::seconds(2));
	std::cout << "Primeiro conjunto" << std::endl;
	for (int i : conjunto1)
	{
		std::cout << "Valor atual: " << i << " " << std::endl;

		std::this_thread::sleep_for(std::chrono::milliseconds(randomTimer()));

		std::cout << "Pagamento concluido" << std::endl;;

	}
	std::cout << "Segundo conjunto" << std::endl;
	for (int i : conjunto2)
	{
		std::cout << "Valor atual: " << i << " " << std::endl;

		std::this_thread::sleep_for(std::chrono::milliseconds(randomTimer()));

		std::cout << "Pagamento concluido" << std::endl;;

	}
	std::cout << "Terceiro conjunto" << std::endl;
	for (int i : conjunto3)
	{
		std::cout << "Valor atual: " << i << " " << std::endl;

		std::this_thread::sleep_for(std::chrono::milliseconds(randomTimer()));

		std::cout << "Pagamento concluido" << std::endl;;

	}
	std::cout << "Quarto conjunto" << std::endl;
	for (int i : conjunto4)
	{
		std::cout << "Valor atual: " << i << " " << std::endl;

		std::this_thread::sleep_for(std::chrono::milliseconds(randomTimer()));

		std::cout << "Pagamento concluido" << std::endl;;

	}

}
void ProcessandoDados::processaDevagar(LinkedList conjunto1, LinkedList conjunto2, LinkedList conjunto3, LinkedList conjunto4) {

	std::this_thread::sleep_for(std::chrono::seconds(2));
	std::vector<int> teste1;
	std::vector<int> teste2;
	std::vector<int> teste3;
	std::vector<int> teste4;
	
	std::cout << "Primeiro conjunto" << std::endl;
	for (int i = 0; i < conjunto1.size(); i++)
	{
		std::cout << "Valor atual: " << conjunto1.getValueAtPosition(i) << " " << std::endl;

		std::this_thread::sleep_for(std::chrono::milliseconds(randomTimer()));

		std::cout << "Pagamento concluido" << std::endl;

	}
	std::cout << "Segundo conjunto" << std::endl;
	for (int i = 0; i < conjunto2.size(); i++)
	{
		std::cout << "Valor atual: " << conjunto2.getValueAtPosition(i) << " " << std::endl;

		std::this_thread::sleep_for(std::chrono::milliseconds(randomTimer()));

		std::cout << "Pagamento concluido" << std::endl;

	}
	std::cout << "terceiro conjunto" << std::endl;
	for (int i = 0; i < conjunto3.size(); i++)
	{
		std::cout << "Valor atual: " << conjunto3.getValueAtPosition(i) << " " << std::endl;

		std::this_thread::sleep_for(std::chrono::milliseconds(randomTimer()));

		std::cout << "Pagamento concluido" << std::endl;

	}
	std::cout << "Quarto conjunto" << std::endl;
	for (int i = 0; i < conjunto4.size(); i++)
	{
		std::cout << "Valor atual: " << conjunto4.getValueAtPosition(i) << " " << std::endl;

		std::this_thread::sleep_for(std::chrono::milliseconds(randomTimer()));

		std::cout << "Pagamento concluido" << std::endl;

	}
}
void ProcessandoDados::processaDevagar(DoublyLinkedList conjunto1, DoublyLinkedList conjunto2, DoublyLinkedList conjunto3, DoublyLinkedList conjunto4) {

	std::this_thread::sleep_for(std::chrono::seconds(2));
	std::cout << "Primeiro conjunto" << std::endl;
	for (int i = 0; i < conjunto1.size(); i++)
	{
		std::cout << "Valor atual: " << conjunto1.getValueAtPosition(i) << " " << std::endl;

		std::this_thread::sleep_for(std::chrono::milliseconds(randomTimer()));

		std::cout << "Pagamento concluido" << std::endl;

	}
	std::cout << "Segundo conjunto" << std::endl;
	for (int i = 0; i < conjunto2.size(); i++)
	{
		std::cout << "Valor atual: " << conjunto2.getValueAtPosition(i) << " " << std::endl;

		std::this_thread::sleep_for(std::chrono::milliseconds(randomTimer()));

		std::cout << "Pagamento concluido" << std::endl;;

	}
	std::cout << "terceiro conjunto" << std::endl;
	for (int i = 0; i < conjunto3.size(); i++)
	{
		std::cout << "Valor atual: " << conjunto3.getValueAtPosition(i) << " " << std::endl;

		std::this_thread::sleep_for(std::chrono::milliseconds(randomTimer()));

		std::cout << "Pagamento concluido" << std::endl;;

	}
	std::cout << "Quarto conjunto" << std::endl;
	for (int i = 0; i < conjunto4.size(); i++)
	{
		std::cout << "Valor atual: " << conjunto4.getValueAtPosition(i) << " " << std::endl;

		std::this_thread::sleep_for(std::chrono::milliseconds(randomTimer()));

		std::cout << "Pagamento concluido" << std::endl;;

	}
}