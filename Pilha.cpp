#include "pilha.hpp"
#include <iostream>


Pilha::Pilha() {
}

void Pilha::empilhar(int elemento) {
    elementos.push_back(elemento);
    
}

void Pilha::desempilhar() {
    if (!vazia()) {
        elementos.pop_back();
    }
    else {
        std::cout << "A pilha está vazia. Não é possível desempilhar.\n";
    }
}

bool Pilha::vazia() {
    return elementos.empty();
}

int Pilha::topo() {
    if (!vazia()) {
        return elementos.back();
    }
    else {
        std::cout << "A pilha está vazia. Não há elemento no topo.\n";
        return -1;
    }
}
int Pilha::acessarPosicao(int posicao) {
    if (posicao >= 0 && posicao < elementos.size()) {
        return elementos[posicao];
    }
    else {
        std::cout << "Posição inválida.\n";
        return -1;
    }
}
int Pilha::size() {
    return elementos.size();
}