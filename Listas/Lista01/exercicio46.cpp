/* Programa 46 */
/*46. Escreva um programa que calcule o fatorial de um número inteiro fornecido pelo usuário. Exemplo: 5! = 5 x 4 x 3 x 2 x 1 = 120.*/
// exercicio46.cpp

#include <iostream>

int main() {
    int numero;

    // Solicita um número inteiro não-negativo
    do {
        std::cout << "Digite um número inteiro não-negativo: ";
        std::cin >> numero;
    } while (numero < 0);

    // Inicializa o fatorial e calcula
    long long fatorial = 1;  // Utiliza long long para maior precisão
    for (int i = 2; i <= numero; ++i) {
        fatorial *= i;
    }

    // Exibe o resultado
    std::cout << numero << "! = " << fatorial << std::endl;

    return 0;
}
