/* Programa 18 */
/*18. Escreva um programa que peça a entrada de um valor inteiro e mostre na tela se esse valor e positivo ou negativo.*/
// exercicio18.cpp

//Função principal
#include <iostream>

int main() {
    int num;

    // Solicita a entrada de um valor inteiro
    std::cout << "Digite um valor inteiro: ";
    std::cin >> num;

    // Verifica se o valor é positivo ou negativo
    if (num > 0) {
        std::cout << "O valor é positivo." << std::endl;
    } else if (num < 0) {
        std::cout << "O valor é negativo." << std::endl;
    } else {
        std::cout << "O valor é zero." << std::endl;
    }

    return 0;
}
