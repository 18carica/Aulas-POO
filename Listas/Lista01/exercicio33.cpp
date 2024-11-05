/* Programa 33 */
/*33. Escreva um programa para um caixa eletrônico. O programa devera perguntar ao usuário o valor do saque e depois informar quantas notas de cada valor serão fornecidas. As notas disponíveis serão as de 1, 5, 10, 50 e 100 reais. O valor mínimo é de 10 reais e o valor máximo de 1000 reais. O programa não deve se preocupar coma quantidade de notas existentes na máquina. 
Exemplo:
a. Para sacar a quantia de 256 reais, o programa fornece duas notas de 100, uma nota de 50, uma nota de 5 e uma nota de 1;
b. Para sacar a quantia de 399 reais, o programa fornece três notas de 100, uma nota de 50, quatro notas de 10, uma nota de 5 e quatro notas de 1.*/
// exercicio33.cpp

//Função principal
#include <iostream>

int main() {
    int valor;
    std::cout << "Digite o valor do saque (entre 10 e 1000 reais): ";
    std::cin >> valor;

    if (valor < 10 || valor > 1000) {
        std::cout << "Valor fora do limite permitido!" << std::endl;
        return 0;
    }

    int notas100 = valor / 100;
    valor %= 100;
    int notas50 = valor / 50;
    valor %= 50;
    int notas10 = valor / 10;
    valor %= 10;
    int notas5 = valor / 5;
    valor %= 5;
    int notas1 = valor;

    std::cout << "Notas de 100: " << notas100 << std::endl;
    std::cout << "Notas de 50: " << notas50 << std::endl;
    std::cout << "Notas de 10: " << notas10 << std::endl;
    std::cout << "Notas de 5: " << notas5 << std::endl;
    std::cout << "Notas de 1: " << notas1 << std::endl;

    return 0;
}
