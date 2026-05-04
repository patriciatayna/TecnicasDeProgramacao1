#include "Papel.hpp"
#include <stdexcept>

void Papel::setPapel(const std::string& p) 
{
    if (p != "DESENVOLVEDOR" && 
        p != "MESTRE SCRUM" && 
        p != "PROPRIETARIO DE PRODUTO")
    {
        throw std::invalid_argument("Papel Invalido");
    } 
    
    papel = p;
}

std::string Papel::getPapel() const 
{
    return papel;
}
