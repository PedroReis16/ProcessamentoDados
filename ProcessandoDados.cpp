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

	int size = generalList.size() - 1;
	mergeSort(generalList, 0, size);

	for (int i : generalList) {
		std::cout << i << " ";
	}
}

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

