#ifndef NOME_HPP_INCLUDED
#define NOME_HPP_INCLUDED

#include <string>

class Nome {
private:
    std::string nome;
    std::string sobrenome;

public:
    void setNome(const std::string& n);
    void setSobrenome(const std::string& s);
    std::string getValor() const;
};

#endif
