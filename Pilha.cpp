#include "pilha.hpp"


void Pilha::empilhar(int elemento) {
    elementos.push_back(elemento);
    
}

void Pilha::desempilhar() {
    if (!vazia()) {
        elementos.pop_back();
    }
    else {
        std::cout << "A pilha est� vazia. N�o � poss�vel desempilhar.\n";
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
        std::cout << "A pilha est� vazia. N�o h� elemento no topo.\n";
        return -1;
    }
}
int Pilha::acessarPosicao(int posicao) {
    if (posicao >= 0 && posicao < elementos.size()) {
        return elementos[posicao];
    }
    else {
        std::cout << "Posi��o inv�lida.\n";
        return -1;
    }
}
int Pilha::size() {
    return elementos.size();
}