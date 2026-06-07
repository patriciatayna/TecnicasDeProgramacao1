#ifndef PRIORIDADE_HPP_INCLUDED
#define PRIORIDADE_HPP_INCLUDED

class Prioridade {
private:
    int nivelDePrioridade=2; // 1 = min, 2 = media, 3 = max

public:
    void setNivelDePrioridade(int n);
    int getNivelDePrioridade() const;
    const char* getTexto() const;
};

#endif
