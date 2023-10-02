#pragma once
#include <chrono>

class Cronometro
{
public:
	double tempoVector;
	double tempoSimples;
	double tempoDupla;
	double tempoParalelo;
	double tempoSemThread;

	Cronometro();
};

