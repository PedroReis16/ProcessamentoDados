#include "processandoDados.hpp"

int ProcessandoDados::randomTimer() {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<>intDistribution(0, 10);

	return intDistribution(gen);
}
void ProcessandoDados::juntandoDados(std::vector<int>conjunto1, std::vector<int>conjunto2, std::vector<int>conjunto3, std::vector<int>conjunto4) {
	for (int i : conjunto1)
	{
		vector.push_back(i);
		linkedList.add(i);
		doublyLinkedList.add(i);
		generalList.push_back(i);
		generalLinkedList.add(i);
	}
	for (int i : conjunto2)
	{
		vector.push_back(i);
		doublyLinkedList.add(i);
		linkedList.add(i);
		generalList.push_back(i);
		generalLinkedList.add(i);
	}
	for (int i : conjunto3)
	{
		vector.push_back(i);
		doublyLinkedList.add(i);
		linkedList.add(i);
		generalList.push_back(i);
		generalLinkedList.add(i);
	}
	for (int i : conjunto4)
	{
		vector.push_back(i);
		doublyLinkedList.add(i);
		linkedList.add(i);
		generalList.push_back(i);
		generalLinkedList.add(i);
	}

	mergeSort(generalList, 0, generalList.size() - 1);
	biggestValue = generalList[generalList.size() - 1];
}
#pragma region Ordenação da lista
void ProcessandoDados::mergeSort(std::vector<int>& vector, int left, int right) {
	if (left < right) {
		int middle = left + (right - left) / 2;

		mergeSort(vector, left, middle);
		mergeSort(vector, middle + 1, right);
		merge(vector, left, middle, right);
	}
}
void ProcessandoDados::merge(std::vector<int>& vector, int left, int middle, int right) {
	int n1 = middle - left + 1;
	int n2 = right - middle;

	std::vector<int> leftSubarray(n1);
	std::vector<int> rightSubarray(n2);

	for (int i = 0; i < n1; i++) {
		leftSubarray[i] = vector[left + i];
	}
	for (int i = 0; i < n2; i++) {
		rightSubarray[i] = vector[middle + 1 + i];
	}

	int i = 0;
	int j = 0;
	int k = left;
	while (i < n1 && j < n2) {
		if (leftSubarray[i] <= rightSubarray[j]) {
			vector[k] = leftSubarray[i];
			i++;
		}
		else {
			vector[k] = rightSubarray[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		vector[k] = leftSubarray[i];
		i++;
		k++;
	}

	while (j < n2) {
		vector[k] = rightSubarray[j];
		j++;
		k++;
	}
}
#pragma endregion

void ProcessandoDados::leituraNormal() {
	std::chrono::steady_clock::time_point startTime;
	std::chrono::steady_clock::time_point endTime;
	//tempo para o vetor
	startTime = std::chrono::high_resolution_clock::now();
	for (int i : vector) {
		Leitura::lendoVetor(i, randomTimer());
	}
	endTime = std::chrono::high_resolution_clock::now();
	std::chrono::seconds vectorTime = std::chrono::duration_cast<std::chrono::seconds>(endTime - startTime);
	parciais->tempoVector = vectorTime.count();
	//tempo para a lista simplesmente encadeada
	startTime = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < linkedList.size(); i++) {
		Leitura::lendoVetor(linkedList.getValueAtPosition(i), randomTimer());
	}
	endTime = std::chrono::high_resolution_clock::now();
	std::chrono::seconds linkedTime = std::chrono::duration_cast<std::chrono::seconds>(endTime - startTime);
	parciais->tempoSimples = linkedTime.count();
	//tempo para a lista duplamente encadeada
	startTime = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < doublyLinkedList.size(); i++) {
		Leitura::lendoVetor(doublyLinkedList.getValueAtPosition(i), randomTimer());
	}
	endTime = std::chrono::high_resolution_clock::now();
	std::chrono::seconds doublyTime = std::chrono::duration_cast<std::chrono::seconds>(endTime - startTime);
	parciais->tempoDupla = doublyTime.count();
}
void ProcessandoDados::multiTask() {
	std::chrono::steady_clock::time_point startTime;
	std::chrono::steady_clock::time_point endTime;

	std::vector<std::thread> threads;

	startTime = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < 2; ++i) {
		threads.emplace_back(&ProcessandoDados::processandoInfo, this);
	}
	waitForCompletion();
	for (int i = 0; i < 2; ++i) {
		threads[i].join();
	}

	endTime = std::chrono::high_resolution_clock::now();
	std::chrono::seconds totalTime = std::chrono::duration_cast<std::chrono::seconds>(endTime - startTime);
	parciais->tempoParalelo = totalTime.count();
}
void ProcessandoDados::processandoInfo() {

	while (generalLinkedList.size() > 0 || toProcess.size() > 0)
	{
		if (generalLinkedList.size() == 0 && toProcess.size() == 0) {
			condition_.notify_all();
			break;
		}
		if (!toProcess.empty()) {
			stackMutex.lock();
			stackProcess();
			stackMutex.unlock();
		}
		else if (generalLinkedList.size() > 0) {

			int value = generalLinkedList.getValueAtPosition(0);
			if (value == 0) {
				continue;
			}

			if (value <= (2 * (biggestValue / 3))) {
				normalProcess(value);
			}
			else {
				toProcess.push(value);
				generalLinkedList.remove(value);
			}
		}
	}
}
void ProcessandoDados::waitForCompletion() {
	std::unique_lock<std::mutex> lock(listMutex);
	// Espere até que todas as threads tenham concluído
	condition_.wait(lock, [this] { return generalLinkedList.size() == 0 && toProcess.size() == 0; });
}
void ProcessandoDados::stackProcess() {
	int current = toProcess.top();
	toProcess.pop();
	if (current == 0) {
		return;
	}

	Leitura::lendoPilha(current, randomTimer());
}
void ProcessandoDados::normalProcess(int value) {
	generalLinkedList.remove(value);
	Leitura::lendoVetor(value, randomTimer());
}

void ProcessandoDados::resultados() {
	Leitura::resultados(parciais);
}
