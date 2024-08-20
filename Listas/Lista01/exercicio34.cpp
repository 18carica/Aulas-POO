/* Programa 34 */
/*34. Escreva um programa que peça um número e informe se ele e inteiro ou decimal. Dica: utilize uma função de arrendondamento.*/
// exercicio34.cpp

//Função principal
#include <iostream>
#include <cmath>

int main() {
    double num;
    std::cout << "Digite um número: ";
    std::cin >> num;

    if (num == std::round(num)) {
        std::cout << num << " é um número inteiro." << std::endl;
    } else {
        std::cout << num << " é um número decimal." << std::endl;
    }

    return 0;
}
