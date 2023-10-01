#pragma once
#include <iostream>
#include <thread>
#include <chrono>
#include <string>

class Leitura
{
public:
	void lendoVetor(int value,int pause);
	void lendoListaSimples(int value, int pause);
	void lendoListaDupla(int value, int pause);
	void lendoPilha(int value, int pause);
};

