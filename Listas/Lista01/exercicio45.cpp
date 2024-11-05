/* Programa 45 */
/*45. Escreva um programa que peça a entrada de 10 números inteiros. Em seguida, o programa deve exibir a quantidade de números pares e a quantidade de números ímpares.*/
// exercicio45.cpp

#include <iostream>

//Função principal
int main() {
    int numeros[10]; // Array para armazenar os números
    int pares = 0, impares = 0; // Variáveis para contar pares e ímpares

    // Loop para ler 10 números do usuário
    for (int i = 0; i < 10; i++) {
        std::cout << "Digite o número " << i + 1 << ": ";
        std::cin >> numeros[i];

        // Verifica se o número é par ou ímpar
        if (numeros[i] % 2 == 0) {
            pares++; // Incrementa o contador de pares
        } else {
            impares++; // Incrementa o contador de ímpares
        }
    }

    // Exibe a quantidade de pares e ímpares
    std::cout << "Quantidade de números pares: " << pares << std::endl;
    std::cout << "Quantidade de números ímpares: " << impares << std::endl;
    return 0;
}
