/* Programa 39 */
/*39. Escreva um programa que recebera o valor de três ângulos de um triângulo. Em seguida, o programa deve informar se o triângulo é acutângulo, retângulo ou obtusângulo. Considere as seguintes informações:
a. Triangulo retângulo: possui um ângulo reto (igual a 90°);
b. Triangulo obtusângulo: possui um ângulo obtuso (maior que 90°);
c. Triangulo acutângulo: possui três ângulos agudos (menores que 90°);*/
// exercicio39.cpp

//Função principal
#include <iostream>

int main() {
    double ang1, ang2, ang3;

    std::cout << "Digite os três ângulos do triângulo: ";
    std::cin >> ang1 >> ang2 >> ang3;

    if (ang1 + ang2 + ang3 != 180) {
        std::cout << "Os ângulos não formam um triângulo válido." << std::endl;
    } else if (ang1 == 90 || ang2 == 90 || ang3 == 90) {
        std::cout << "Triângulo retângulo." << std::endl;
    } else if (ang1 > 90 || ang2 > 90 || ang3 > 90) {
        std::cout << "Triângulo obtusângulo." << std::endl;
    } else {
        std::cout << "Triângulo acutângulo." << std::endl;
    }

    return 0;
}
