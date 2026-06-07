#include "Prioridade.hpp"

void Prioridade::setNivelDePrioridade(int n) {
    if (n < 1) n = 1;
    if (n > 3) n = 3;
    nivelDePrioridade = n;
}

int Prioridade::getNivelDePrioridade() const {
    return nivelDePrioridade;
}

const char* Prioridade::getTexto() const {
    switch (nivelDePrioridade) {
        case 1: return "Minima";
        case 2: return "Media";
        case 3: return "Maxima";
        default: return "Desconhecida";
    }
}
