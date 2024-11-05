/* Programa 52 */
/* 52. Escreva um programa que mostre os N termos da série a seguir:
    

    Observe que os cinco primeiros termos correspondem à seguinte saída:
    

*/
// exercicio52.cpp

#include <iostream>

// Função principal do programa
int main() {
    int n;               // Variável para armazenar o valor de N (número de termos)
    double S = 0.0;      // Variável que armazena a soma da série

    // Solicita ao usuário que insira o valor de N
    std::cout << "Digite o valor de N: ";
    std::cin >> n;  // Lê o valor de N inserido pelo usuário

    // Loop para calcular a soma da série
    for (int i = 1, j = 1; i <= n; i++, j += 2) {
        // Adiciona o termo i/j à soma total (conversão para double para evitar divisão de inteiros)
        S += static_cast<double>(i) / j;

        // Exibe o termo atual na forma i/j
        std::cout << i << "/" << j;

        // Adiciona um símbolo de " + " entre os termos, exceto após o último termo
        if (i < n) std::cout << " + ";
    }

    // Exibe o resultado da soma total da série
    std::cout << " = " << S << "\n";
    
    return 0;  // Finaliza o programa
}
