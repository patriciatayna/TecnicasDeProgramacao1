#include "Prioridade.hpp"
#include <stdexcept>

void Prioridade::setPrioridade(const std::string& p) 
{
    if (p!="ALTA" && p!= "MEDIA" && p!="BAIXA") 
    {
        throw std::invalid_argument("Prioridade invalida");
    }
    valor = p;
}

std::string Prioridade::getPrioridade() const 
{
    return valor;
}
