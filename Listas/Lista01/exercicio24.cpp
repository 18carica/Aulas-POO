/* Programa 24 */
/*24. Escreva um programa que peça a entrada de um número inteiro e determine se ele e par ou ímpar. O resultado deve apresentar o número fornecido e informar se ele e par ou ímpar.*/
// exercicio24.cpp

//Função principal
#include <iostream>

int main() {
    int numero;

    // Solicita a entrada de um número inteiro
    std::cout << "Digite um número inteiro: ";
    std::cin >> numero;

    // Verifica se o número é par ou ímpar
    if (numero % 2 == 0) {
        std::cout << numero << " é par." << std::endl;
    } else {
        std::cout << numero << " é ímpar." << std::endl;
    }

    return 0;
}
