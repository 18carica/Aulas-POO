/* Programa 46 */
/*46. Escreva um programa que calcule o fatorial de um número inteiro fornecido pelo usuário. Exemplo: 5! = 5 x 4 x 3 x 2 x 1 = 120.*/
// exercicio46.cpp

#include <iostream>

int main() {
    int numero;
    std::cout << "Digite um número inteiro: ";
    std::cin >> numero;

    int fatorial = 1;
    // Loop para calcular o fatorial
    for (int i = 1; i <= numero; i++) {
        fatorial *= i; // Multiplica o fatorial pelo valor atual de i
    }

    // Exibe o resultado
    std::cout << numero << "! = " << fatorial << std::endl;
    return 0;
}
