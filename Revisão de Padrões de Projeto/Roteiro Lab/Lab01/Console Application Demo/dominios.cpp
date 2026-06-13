#include "dominios.hpp"

bool CodigoCliente::validar(int valor)
{
    if (valor > LIMITE)
        return false;
    return true;
}

bool CodigoCliente::setValor(int valor)
{
    if (!validar(valor))
        return false;
    this->valor = valor;
    return true;
}

bool Codigo::validar(int codigo)
{
    if (codigo > LIMITE)
        return false;
    return true;
}

bool Codigo::setValor(int valor)
{
    if (!validar(valor))
        return false;
    this->valor = valor;
    return true;
}

bool Prioridade::validar(int valor)
{
    if (valor == INVALIDO)
        return false;
    return true;
}

bool CodigoCliente::setValor(int valor)
{
    if (!validar(valor))
        return false;
    this->valor = valor;
    return true;
}