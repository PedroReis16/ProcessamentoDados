#pragma once
#include <vector>


class Pilha {
private:
    std::vector<int> elementos;

public:
    Pilha();

    void empilhar(int elemento);
    void desempilhar();
    bool vazia();
    int topo();
    int acessarPosicao(int posicao);
    int size();
};
