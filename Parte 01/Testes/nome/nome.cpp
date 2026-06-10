#ifndef NOME_HPP_INCLUDED
#define NOME_HPP_INCLUDED
#include <string>

class Nome {
    private:
        std::string nome;
        std::string sobrenome;
    public:
        void setNome(const std::string&);
        std::string getValor();
};

inline void Nome::setNome(std::string novoNome) {
    nome = novoNome;
}

inline string Nome::getValor() {
    return nome;
}

#endif // NOME_HPP_INCLUDED
