#ifndef NOME_HPP_INCLUDED
#define NOME_HPP_INCLUDED

#include <string>

class Nome 
{
private:
    std::string nome;

public:
    void setNome(const std::string& n);
    std::string getNome() const;
};

#endif
