#pragma once
#include <iostream>
#include <thread>
#include <chrono>
#include <string>

class Leitura
{
public:
	static void lendoVetor(int value,int pause);
	static void lendoListaSimples(int value, int pause);
	static void lendoListaDupla(int value, int pause);
	static void lendoPilha(int value, int pause);
};

