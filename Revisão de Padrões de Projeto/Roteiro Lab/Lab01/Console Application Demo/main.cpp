#include <iostream>
#include "dominios.hpp"

using namespace std;

int main()
{
    // Main Parte 1:
    
    // Criar objeto da classe domínio.
    CodigoCliente codigo;

    // Ler valor a partir da entrada padrão.
    int valor;
    cout <<  "Digite o codigo do cliente: ";
    cin >> valor;

    // Armazenar valor no objeto.
    bool resultado = codigo.setValor(valor);

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

// // Main Parte 2:

// #include <iostream>  
// #include "dominios.hpp" 

// using namespace std; int main() 
// { 
//     // Criar ponteiro para objeto da classe domínio. 
//     // Criar objeto e armazenar o seu identificador no ponteiro. 
//     // Ler valor a partir da entrada padrão. 
//     // Armazenar valor no objeto. 
//     // Se o valor for válido, apresentar valor armazenado no objeto. 
//     // Se o valor for inválido, informar que o valor não foi armazenado
//     // Destruir objeto apontado

//     return 0;
// }

// // Codificar uma das classes domínio presentes na especificação do trabalho.