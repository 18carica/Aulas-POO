/* Programa 29 */
/*29. Escreva um programa que peça a entrada doa valores correspondentes aos lados de um triângulo. Em seguida, o programa deve verificar o tipo de triângulo que esses valores forma: equilátero, isósceles ou escaleno. O programa também deve exibir uma mensagem, caso esses valores não formem um triângulo. Considere as seguintes informações:
a. Três Lados foram um triângulo quando a soma de dois lados for maior que o terceiro lado;
b. O triângulo equilátero possui três lados iguais;
c. O triângulo isósceles possui dois lados iguais;
d. O triângulo escaleno possui três lados diferentes.*/
// exercicio29.cpp

//Função principal
#include <iostream>

int main() {
    float lado1, lado2, lado3;

    // Solicita os valores dos lados do triângulo
    std::cout << "Digite o valor do primeiro lado: ";
    std::cin >> lado1;
    std::cout << "Digite o valor do segundo lado: ";
    std::cin >> lado2;
    std::cout << "Digite o valor do terceiro lado: ";
    std::cin >> lado3;

    // Verifica se os lados formam um triângulo
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        // Determina o tipo de triângulo
        if (lado1 == lado2 && lado2 == lado3) {
            std::cout << "Triângulo Equilátero: todos os lados iguais." << std::endl;
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            std::cout << "Triângulo Isósceles: dois lados iguais." << std::endl;
        } else {
            std::cout << "Triângulo Escaleno: todos os lados diferentes." << std::endl;
        }
    } else {
        std::cout << "Os valores fornecidos não formam um triângulo." << std::endl;
    }

    return 0;
}
