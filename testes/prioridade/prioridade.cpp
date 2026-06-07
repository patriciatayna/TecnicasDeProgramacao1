#ifndef PRIORIDADE_HPP_INCLUDED
#define PRIORIDADE_HPP_INCLUDED
#include <string>

class Prioridade {
    private:
        std::string prioridade;
    public:
        void setPrioridade(const std::string&);
        std::string getValor();
};

inline void Prioridade::setPrioridade(std::string novaPrioridade) {
    prioridade = novaPrioridade;
}

inline string Prioridade::getValor() {
    return prioridade;
}

#endif // PRIORIDADE_HPP_INCLUDED
