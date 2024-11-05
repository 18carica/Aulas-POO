/* Programa 08 */
/*8. Escreva um programa para calcular e apresentar o valor do volume de uma lata de óleo. O valor do volume pode ser obtido pela fórmula V = 3.141516 x R x R x A, onde V corresponde ao valor do volume, R corresponde ao valor do raio e A corresponde ao valor da altura. O usuário devera fornecer os valores de raio e da altura. Para apresentar o resultado, considere a utilização de duas casas decimais.*/
// exercicio08.cpp

#include <iostream>
#include <iomanip>  // Necessário para std::setprecision

//Função principal
int main() {
    const double PI = 3.141516;  // Definição da constante PI
    double raio, altura, volume;

    // Solicita a entrada do raio e da altura da lata de óleo
    std::cout << "Digite o valor do raio da lata de óleo (em unidades de comprimento): ";
    std::cin >> raio;
    std::cout << "Digite o valor da altura da lata de óleo (em unidades de comprimento): ";
    std::cin >> altura;

    // Calcula o volume da lata de óleo usando a fórmula V = 3.141516 x R x R x A
    volume = PI * raio * raio * altura;

    // Apresenta o volume com duas casas decimais
    std::cout << "O volume da lata de óleo é: " << std::fixed << std::setprecision(2) << volume << " unidades cúbicas" << std::endl;

    return 0;
}
