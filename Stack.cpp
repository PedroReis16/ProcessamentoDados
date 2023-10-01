#include "stack.hpp"

void Stack::push(int elemento) {
    std::lock_guard<std::mutex>lock(mutex);
    elementos.push_back(elemento);
}

void Stack::pop() {
    std::lock_guard<std::mutex>lock(mutex);
    if (!empty()) {
        elementos.pop_back();
    }
    return;
}

bool Stack::empty() {

    return elementos.empty();
}

int Stack::top() {
    std::lock_guard<std::mutex>lock(mutex);
    if (!empty()) {
        return elementos.back();
    }
    else {
        return -1;
    }
}
int Stack::indexOf(int posicao) {
    std::lock_guard<std::mutex>lock(mutex);
    if (posicao >= 0 && posicao < elementos.size()) {
        return elementos[posicao];
    }
    else {
        return -1;
    }
}
int Stack::size() {
    std::lock_guard<std::mutex>lock(mutex);
    return elementos.size();
}