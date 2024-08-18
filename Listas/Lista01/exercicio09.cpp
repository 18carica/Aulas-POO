/* Programa 09 */
/*9. Escreva um programa para calcular e apresentar o valor do peso de uma esfera. O valor do peso pode ser obtido pela fórmula P = D x 4 x 3.141516 x R x R x R/3, onde P representa o valor do peso, D representa o valor da densidade e R representa o valor do raio. O usuário devera fornecer os valores da densidade e do raio. Para apresentar o resultado, considere a utilização de duas casas decimais.*/
// exercicio09.cpp

#include <iostream>
#include <iomanip>  // Necessário para std::setprecision

//Função principal
int main() {
    const double PI = 3.141516;  // Definição da constante PI
    double densidade, raio, peso;

    // Solicita a entrada da densidade e do raio da esfera
    std::cout << "Digite o valor da densidade da esfera (em unidades de massa/volume): ";
    std::cin >> densidade;
    std::cout << "Digite o valor do raio da esfera (em unidades de comprimento): ";
    std::cin >> raio;

    // Calcula o peso da esfera usando a fórmula P = D x 4 x 3.141516 x R x R x R / 3
    peso = densidade * 4 * PI * raio * raio * raio / 3;

    // Apresenta o peso com duas casas decimais
    std::cout << "O peso da esfera é: " << std::fixed << std::setprecision(2) << peso << " unidades de peso" << std::endl;

    return 0;
}
