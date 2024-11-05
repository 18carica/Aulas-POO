//----------------------------------------------------------------------------------------------------
// Exemplo 08: cálculo de fatorial utilizando o WHILE
//
// Programa que calcula o factorial de um valor fornecido pelo usuário
//----------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

//----------------------------------------------------------------------------------------------------
// Função principal
//----------------------------------------------------------------------------------------------------
int main() {

    // Declaração das variáveis
    int i, valor;
    long int fatorial = 1;

    // Entrada de dados
    cout << "\n";
    cout << "Cálculo do fatorial utilizando o laço WHILE\n\n";
    cout << "* Informe o valor desejado: "; cin >> valor;

    // Inicializa o contador
    i = 1;

    // Laço para calcular o fatorial
    while (i <= valor) {

        // Calcule o fatorial
        fatorial *=i;

        // Incrementa o contador
        i++;

    }

     // Exibe o resultado
     cout << "\n=>Fatorial de " << valor << ": " << fatorial << "\n\n";

     //Fim do programa
     return 0;

}
