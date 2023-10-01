#pragma once
#include <vector>
#include <iostream>

class Pilha {
private:
    std::vector<int> elementos;

public:

    void empilhar(int elemento);
    void desempilhar();
    bool vazia();
    int topo();
    int acessarPosicao(int posicao);
    int size();
};
