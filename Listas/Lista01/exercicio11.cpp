/* Programa 11 */
/*11. Escreva um programa que peça 2 números inteiros e um número real. Calcule e mostre:
	A. O produto do dobro do primeiro com a metade do segundo;
	B. A soma do triplo do primeiro;
	C. O terceiro elevado ao cubo.*/
// exercicio11.cpp

//Função principal
#include <iostream>
#include <cmath>  // Necessário para a função pow

int main() {
    int num1, num2;
    double num3;

    // Solicita a entrada de dois números inteiros e um número real
    std::cout << "Digite o primeiro número inteiro: ";
    std::cin >> num1;
    std::cout << "Digite o segundo número inteiro: ";
    std::cin >> num2;
    std::cout << "Digite um número real: ";
    std::cin >> num3;

    // A. O produto do dobro do primeiro com a metade do segundo
    double resultadoA = (2 * num1) * (num2 / 2.0);
    std::cout << "Produto do dobro do primeiro com a metade do segundo: " << resultadoA << std::endl;

    // B. A soma do triplo do primeiro com o terceiro
    double resultadoB = (3 * num1) + num3;
    std::cout << "Soma do triplo do primeiro com o terceiro: " << resultadoB << std::endl;

    // C. O terceiro elevado ao cubo
    double resultadoC = pow(num3, 3);
    std::cout << "Terceiro número elevado ao cubo: " << resultadoC << std::endl;

    return 0;
}


