#ifndef PRIORIDADE_HPP_INCLUDED
#define PRIORIDADE_HPP_INCLUDED

#include <string>

class Prioridade 
{
private:
    std::string valor;

public:
    void setPrioridade(const std::string& p);
    std::string getPrioridade() const;
};

#endif
