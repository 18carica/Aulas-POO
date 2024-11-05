/* Programa 31 */
/*31. Escreva um programa que peça um número correspondente a um determinado ano e em seguida informe se este ano é ou não bissexto.*/
// exercicio31.cpp

//Função principal
#include <iostream>

int main() {
    int ano;
    std::cout << "Digite um ano: ";
    std::cin >> ano;

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        std::cout << ano << " é um ano bissexto." << std::endl;
    } else {
        std::cout << ano << " não é um ano bissexto." << std::endl;
    }

    return 0;
}
