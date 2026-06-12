#include "Nome.hpp"
#include <stdexcept>
#include <cctype>

void Nome::setNome(const std::string& n) 
{
    if (n.empty() || n.size() > 10)
    {
        throw std::invalid_argument("Nome invalido: tamanho");
    }
    
    if (n.front() == ' ' || n.back() == ' ')
    {
        throw std::invalid_argument("Nome invalido: espaco nas extremidades");
    }
    
    for (size_t i=0; i<n.size(); i++)
    {
        if (!isalpha(n[i]) && n[i]!=' ')
        {
            throw std::invalid_argument("Nome invalido: caractere nao permitido");            
        }

        if (n[i] == ' ' && (i+1 < n.size()) && !isalpha(n[i+1]))
        {
            throw std::invalid_argument("Nome invalido: espaco mal posicionado");
        }
    }
    nome = n;
}

std::string Nome::getNome() const 
{
    return nome;
}
