#pragma once
#include <iostream>
#include<random>
#include<chrono>
#include<thread>
#include "LinkedList.hpp"
#include "doublyLinkedList.hpp"

class ProcessandoDados
{
private:
	static long long randomTimer();
public:
	static void processaDevagar(std::vector<int>conjunto1,std::vector<int>conjunto2,std::vector<int>conjunto3,std::vector<int>conjunto4);
	static void processaDevagar(LinkedList conjunto1, LinkedList conjunto2, LinkedList conjunto3, LinkedList conjunto4);
	static void processaDevagar(DoublyLinkedList conjunto1, DoublyLinkedList conjunto2, DoublyLinkedList conjunto3, DoublyLinkedList conjunto4);
};

