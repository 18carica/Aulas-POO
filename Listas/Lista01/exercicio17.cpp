/* Programa 17 */
/*17. Escreva um programa que peça a entrada de dois números inteiros e imprima o maior deles.*/
// exercicio17.cpp

//Função principal
#include <iostream>

int main() {
    int num1, num2;

    // Solicita a entrada de dois números inteiros
    std::cout << "Digite o primeiro número inteiro: ";
    std::cin >> num1;
    std::cout << "Digite o segundo número inteiro: ";
    std::cin >> num2;

    // Determina e apresenta o maior número
    if (num1 > num2) {
        std::cout << "O maior número é: " << num1 << std::endl;
    } else if (num2 > num1) {
        std::cout << "O maior número é: " << num2 << std::endl;
    } else {
        std::cout << "Os dois números são iguais." << std::endl;
    }

    return 0;
}
