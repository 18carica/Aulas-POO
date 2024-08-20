/* Programa 35 */
/*35. Escreva um programa que leia 2 números e em seguida pergunte ao usuário qual operação ele deseja realizar. O resultado da operação deve ser acompanhado de uma frase que diga se o número e:
a. Par ou ímpar;
b. Positivo ou negativo;
c. Inteiro ou decimal.*/
// exercicio35.cpp

//Função principal
#include <iostream>
#include <cmath>

int main() {
    double num1, num2, resultado;
    char operacao;

    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;
    std::cout << "Digite o segundo número: ";
    std::cin >> num2;

    std::cout << "Digite a operação (+, -, *, /): ";
    std::cin >> operacao;

    switch (operacao) {
        case '+': resultado = num1 + num2; break;
        case '-': resultado = num1 - num2; break;
        case '*': resultado = num1 * num2; break;
        case '/': resultado = num1 / num2; break;
        default: std::cout << "Operação inválida!" << std::endl; return 1;
    }

    std::cout << "Resultado: " << resultado << std::endl;

    std::cout << "O resultado é " << (std::round(resultado) == resultado ? "inteiro" : "decimal") << ", "
              << (resultado > 0 ? "positivo" : "negativo") << ", e "
              << ((int)resultado % 2 == 0 ? "par." : "ímpar.") << std::endl;

    return 0;
}
