#include <iostream>
#include "dominios.hpp"

using namespace std;

int main()
{ 
    // Criar objeto da classe domínio.
    Codigo codigo;
    Prioridade prioridade;

    // Ler valores a partir da entrada padrão
    int codigo;
    cout <<  "Digite o codigo: ";
    cin >> codigo;

    int valor;
    cout <<  "Digite o codigo: ";
    cin >> valor;

    // Armazenar valores nos objetos da classes domínio criados
    //bool resultado = codigo.setValor(valor);

    // Criar objeto da classe entidade.
    // Armazenar objetos das classes domínio no objeto da classe entidade criado.
    // Ler objetos armazenados na classe domínio e apresentar valor armazenado em cada um desses objetos.

    // Se o valor for válido, apresentar valor armazenado no objeto.
    if (resultado)
    {
        cout << "Valor armazenado: " << codigo.getValor() << endl;
    }
    
    // Se o valor for inválido, informar que o valor não foi armazenado.
    else
    {
        cout << "Valor invalido. Nao foi armazenado." << endl;
    }

    return 0;
}