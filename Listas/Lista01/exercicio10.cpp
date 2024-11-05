/* Programa 10 */
/*10. Escreva um programa para realizar a leitura de dois valores inteiros e armazená-los nas variáveis A e B. Em seguida, efetuar a troca dos valores, de forma que a variável A passe a possuir o valor da variável B e a variável B passe a possuir o da variável A. Apresentar os valores antes e depois da troca.*/
// exercicio10.cpp

//Função principal
#include <iostream>

int main() {
    int A, B, temp;

    // Solicita a entrada dos valores de A e B
    std::cout << "Digite o valor de A: ";
    std::cin >> A;
    std::cout << "Digite o valor de B: ";
    std::cin >> B;

    // Apresenta os valores antes da troca
    std::cout << "Antes da troca:\n";
    std::cout << "A = " << A << "\nB = " << B << std::endl;

    // Efetua a troca dos valores
    temp = A;
    A = B;
    B = temp;

    // Apresenta os valores depois da troca
    std::cout << "Depois da troca:\n";
    std::cout << "A = " << A << "\nB = " << B << std::endl;

    return 0;
}
