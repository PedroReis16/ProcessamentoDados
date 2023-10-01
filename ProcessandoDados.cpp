#include "processandoDados.hpp"

long long ProcessandoDados::randomTimer() {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<>intDistribution(0, 10);

	return (long long)intDistribution(gen);
}
void ProcessandoDados::juntandoDados(std::vector<int>conjunto1, std::vector<int>conjunto2, std::vector<int>conjunto3, std::vector<int>conjunto4) {
	for (int i : conjunto1)
	{
		vector.push_back(i);
		linkedList.add(i);
		doublyLinkedList.add(i);
	}
	for (int i : conjunto2)
	{
		vector.push_back(i);
		doublyLinkedList.add(i);
		linkedList.add(i);
	}
	for (int i : conjunto3)
	{
		vector.push_back(i);
		doublyLinkedList.add(i);
		linkedList.add(i);
	}
	for (int i : conjunto4)
	{
		vector.push_back(i);
		doublyLinkedList.add(i);
		linkedList.add(i);
	}

}

void ProcessandoDados::processandoDados() {
	lendoVetor();
	lendoListaSimples();
	lendoListaEncadeada();
}
void ProcessandoDados::processandoDadosParalelo() {
	ThreadPool pool(2);


	pool.enqueueTask([=] {lendoVetor(); });
	pool.enqueueTask([=] {lendoListaSimples(); });
	pool.enqueueTask([=] {lendoListaEncadeada(); });
}
void ProcessandoDados::lendoVetor() {
	for (int i : vector) {
		lendoDados(i, "V");
	}
}
void ProcessandoDados::lendoListaSimples() {
	for (int i = 0; i < linkedList.size(); i++) {
		lendoDados(linkedList.getValueAtPosition(i), "S");
	}
}
void ProcessandoDados::lendoListaEncadeada() {
	for (int i = 0; i < doublyLinkedList.size(); i++) {
		lendoDados(doublyLinkedList.getValueAtPosition(i), "D");
	}
}
void ProcessandoDados::lendoDados(int value, std::string type) {

	std::string saida;
	std::string saida2;

	if (type == "V") {
		saida = "O pagamento de ";
		saida2 = " foi processado com sucesso";
	}
	else if (type == "S") {
		saida = "O valor de ";
		saida2 = " foi processado com sucesso";
	}
	else if (type == "D") {
		saida = "A cobranca no valor de ";
		saida2 = " foi processada com sucesso";
	}
	else {
		saida = "A quantia de ";
		saida2 = " foi processada com sucesso";
	}

	std::this_thread::sleep_for(std::chrono::milliseconds(50));
	std::cout << "Valor atual: " << value << " " << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(randomTimer()));
	std::cout << saida << value << saida2 << std::endl;;
}
void ProcessandoDados::processaVetor()
{
	int maiorValor = vector[0];
	for (int valor : vector) {
		if (valor > maiorValor) {
			maiorValor = valor;
		}
	}
	for (int valor : vector) {
		if (valor <= (2 * maiorValor / 3)) {
			vector2.push_back(valor);
		}
		else {
			pilha.empilhar(valor);
		}
	}
	std::cout << "Maior Valor: " << maiorValor << " " << std::endl;
	std::cout << std::endl;
}
void ProcessandoDados::processandoDadosParaleloPilha() {

	processaVetor();

	
	ThreadPool pool(2);


	pool.enqueueTask([=] {lendoVetor2(); });
	std::this_thread::sleep_for(std::chrono::milliseconds(7));
	pool.enqueueTask([=] {lendoPilha(); });
}
void ProcessandoDados::lendoVetor2() {
	for (int i : vector2) {
		lendoDados(i, "V");
	}
}
void ProcessandoDados::lendoPilha() {
	for (int i = 0; i < pilha.size(); i++) {
		lendoDados(pilha.acessarPosicao(i), "P");
	}
}
