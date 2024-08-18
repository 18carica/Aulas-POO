/* Programa 02 */
/*2. Escreva um programa que peça pra o usurário informar um número inteiro e então mostre a mensagem: “O número informado foi <número>.”*/
// exercicio02.cpp

#include <iostream>

// Função principal
int main() {
    int num1;

    // Solicita a entrada de um número inteiro
    std::cout << "Digite um número inteiro: ";
    std::cin >> num1; 

    // Apresenta o número inserido com uma quebra de linha ao final
    std::cout << "O número informado foi: " << num1 << std::endl;

    return 0;
}