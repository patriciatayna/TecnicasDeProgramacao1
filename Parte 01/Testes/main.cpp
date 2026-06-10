#include <iostream>
#include <string>

#include "Nome.hpp"
#include "Papel.hpp"
#include "Prioridade.hpp"

using namespace std;

int main() {
    Nome nome;
    Papel papel;
    Prioridade prioridade;

    string entrada;
    int nivel;

    cout << "=== Cadastro de Tarefa ===\n\n";

    // Nome
    cout << "Nome: ";
    getline(cin, entrada);
    nome.setNome(entrada);

    cout << "Sobrenome: ";
    getline(cin, entrada);
    nome.setSobrenome(entrada);

    // Papel
    cout << "Papel da tarefa (ex: Trabalho, Estudo, Pessoal): ";
    getline(cin, entrada);
    papel.setPapel(entrada);

    // Prioridade
    cout << "Prioridade (1 = Minima, 2 = Media, 3 = Maxima): ";
    cin >> nivel;
    prioridade.setNivelDePrioridade(nivel);

    // Saída
    cout << "\n=== Resultado ===\n";
    cout << "Responsavel: " << nome.getValor() << endl;
    cout << "Papel: " << papel.getPapel() << endl;
    cout << "Prioridade: " << prioridade.getTexto() << endl;

    return 0;
}
