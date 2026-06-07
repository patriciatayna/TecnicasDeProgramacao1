#include "Nome.hpp"

void Nome::setNome(const std::string& novoNome) {
    nome = novoNome;
}

void Nome::setSobrenome(const std::string& novoSobrenome) {
    sobrenome = novoSobrenome;
}

std::string Nome::getValor() const {
    return nome + " " + sobrenome;
}
