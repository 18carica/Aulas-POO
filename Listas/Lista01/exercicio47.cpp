/* Programa 47 */
/*47. Um número primo é aquele que é divisível somente por ele mesmo e por 1. Escreva um programa que peça a entrada de um número inteiro e determine se ele é ou não um número primo.*/
// exercicio47.cpp

#include <iostream>

//Função principal
int main() {
    int numero;
    bool primo = true;

    std::cout << "Digite um número inteiro: ";
    std::cin >> numero;

    // Verifica se o número é menor ou igual a 1
    if (numero <= 1) {
        primo = false; // Números menores ou iguais a 1 não são primos
    } else {
        // Loop para verificar se o número é divisível por qualquer valor entre 2 e a metade do número
        for (int i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                primo = false; // Se houver divisores, o número não é primo
                break;
            }
        }
    }

    // Exibe se o número é primo ou não
    if (primo) {
        std::cout << numero << " é um número primo." << std::endl;
    } else {
        std::cout << numero << " não é um número primo." << std::endl;
    }
    return 0;
}
