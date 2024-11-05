/* Programa 30 */
/*30. Escreva um programa que calcule as raízes de uma equação do segundo grau, na forma ax² + bx + c. O programa devera solicitar a entrada dos valores de a, b e c, verificando as seguintes situações:
1. Se o usuário informar o calor de a igual a zero, a equação não e do segundo grau. O programa deve informar essa situação para o usuário a ser finalizado;
2. Se o valor calculado para delta for negativo, a equação não possui raízes reais. O programa deve informar essa situação para o usuário e ser finalizado;
3. Se o valor calculado para delta for igual a zero a equação possui apenas uma rais real. O programa deve informar essa situação e exibir o valor dessa rais, antes de ser finalizado.
4. Se o valor calculado para o delta for positivo, a equação possui duas raiz reais. O programa deve informar essa situação para o usuário e exibir os valores dessas raízes, antes de ser finalizado.*/
// exercicio30.cpp

//Função principal
#include <iostream>
#include <cmath>

int main() {
    double a, b, c, delta, raiz1, raiz2;

    // Solicita a entrada dos coeficientes da equação
    std::cout << "Digite o valor de a: ";
    std::cin >> a;

    // Verifica se a equação é de segundo grau
    if (a == 0) {
        std::cout << "O valor de a é igual a zero, portanto, a equação não é de segundo grau." << std::endl;
        return 0;
    }

    std::cout << "Digite o valor de b: ";
    std::cin >> b;

    std::cout << "Digite o valor de c: ";
    std::cin >> c;

    // Calcula o delta (b^2 - 4ac)
    delta = b * b - 4 * a * c;

    // Verifica as situações possíveis com base no valor de delta
    if (delta < 0) {
        std::cout << "Delta é negativo, portanto, a equação não possui raízes reais." << std::endl;
    } else if (delta == 0) {
        raiz1 = -b / (2 * a);
        std::cout << "Delta é igual a zero, a equação possui uma única raiz real: " << raiz1 << std::endl;
    } else {
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        std::cout << "Delta é positivo, a equação possui duas raízes reais: " << std::endl;
        std::cout << "Raiz 1: " << raiz1 << std::endl;
        std::cout << "Raiz 2: " << raiz2 << std::endl;
    }

    return 0;
}
