//----------------------------------------------------------------------------------------------------
// Exemplo 10: cálculo de fatorial utilizando FOR
//
// Progama que calcula o fatorial de um valor fornecido pelo usuário.
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

    // Entrada dos dados
    cout << "\n";
    cout << "Cálculo do fatorial utilizando o laço WHILE\n\n";
    cout << "* Informe o valor desejado: "; cin >> valor;

    // Laço para calcular o fatorial
    for (i = 1; i <= valor; i++) {
        // Calcula o fatorial
        fatorial *= i;
    }

    // Exibe o resultato
    cout << "\n=>Fatorial de " << valor << ": " << fatorial << "\n\n";

    // Fim do programa
    return 0;

}
