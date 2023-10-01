#pragma once
#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include "cronometro.hpp"

class Leitura
{
public:
	static void lendoVetor(int value,int pause);
	static void lendoPilha(int value, int pause);
	static void resultados(Cronometro* parciais);
};

