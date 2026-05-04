#include <iostream>
#include <string>

#include "Nome.hpp"
#include "Papel.hpp"
#include "Prioridade.hpp"

using namespace std;

int main () 
{
    Nome nome;
    Papel papel;
    Prioridade prioridade;
    
    string entrada;
    
    cout << "Cadastro\n" << endl;
    
    bool perguntarNome = true;
    while(perguntarNome) 
    {
        try
        {
            cout << "Nome (ate 10 caracteres): ";
            getline(cin, entrada);
            
            nome.setNome(entrada);
            perguntarNome = false;
        } 
        
        catch (const invalid_argument& erro)
        {
            cout << "Erro: " << erro.what() << endl;
        }
    }
    
    bool perguntarPrioridade = true; 
    while (perguntarPrioridade)
    {
        try
        {
            cout << "Prioridade (ALTA, MEDIA, BAIXA): ";
            getline(cin, entrada);
            
            prioridade.setPrioridade(entrada);
            perguntarPrioridade = false;
        }
        catch(const invalid_argument& erro)
        {
            cout << "Erro: " << erro.what() << endl;
        }
    }
    
    bool perguntarPapel = true;
    while (perguntarPapel)
    {
        try
        {
            cout << "Papel (DESENVOLVEDOR, MESTRE SCRUM, PROPRIETARIO DE PRODUTO): ";
            getline(cin, entrada);
            papel.setPapel(entrada);
            perguntarPapel = false;
        }
        catch(const invalid_argument& erro)
        {
            cout << "Erro: " << erro.what() << endl;
        }
    }
    
    cout << "Resultado:\n" << endl;
    cout << "Nome: " << nome.getNome() << endl;
    cout << "Papel: " << papel.getPapel() << endl;
    cout << "Prioridade: " << prioridade.getPrioridade() << endl;
    
    return 0;
}
