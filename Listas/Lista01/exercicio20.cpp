/* Programa 20 */
// exercicio20.cpp

#include <iostream>

//Função principal
int main() {
    int num1, num2, num3;

    // Solicita a entrada de três números inteiros
    std::cout << "Digite o primeiro numero: ";
    std::cin >> num1;
    std::cout << "Digite o segundo numero: ";
    std::cin >> num2;
    std::cout << "Digite o terceiro numero: ";
    std::cin >> num3;

    // Variáveis temporárias para ordenação
    int maior, medio, menor;

    // Determina o maior, médio e menor números
    if (num1 >= num2 && num1 >= num3) {
        maior = num1;
        if (num2 >= num3) {
            medio = num2;
            menor = num3;
        } else {
            medio = num3;
            menor = num2;
        }
    } else if (num2 >= num1 && num2 >= num3) {
        maior = num2;
        if (num1 >= num3) {
            medio = num1;
            menor = num3;
        } else {
            medio = num3;
            menor = num1;
        }
    } else {
        maior = num3;
        if (num1 >= num2) {
            medio = num1;
            menor = num2;
        } else {
            medio = num2;
            menor = num1;
        }
    }

    // Exibe os números em ordem decrescente
    std::cout << "Os números em ordem decrescente são: " << maior << ", " << medio << ", " << menor << std::endl;

    return 0;
}
