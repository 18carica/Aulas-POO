/* Programa 13 */
/*13. Escreva um programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada. Considere que a cobertura de tinta e de 1 litro para cada 3 metros quadrados e que a tinta e vendida em latas de 18 litros, que custam R$ 80,00. Informe ao usuário a quantidade de latas de tinta que deve ser comprada e o preço total que devera ser pago. Para apresentar o resultado, considere a utilização de duas casas decimais.*/
// exercicio13.cpp

//Função principal
#include <iostream>
#include <cmath>  // Necessário para a função ceil
#include <iomanip>  // Necessário para std::setprecision

int main() {
    double area, litrosNecessarios, quantidadeLatas, precoTotal;
    const double COBERTURA = 3.0;  // 1 litro para cada 3 metros quadrados
    const double LITROS_POR_LATA = 18.0;
    const double PRECO_POR_LATA = 80.0;

    // Solicita a entrada do tamanho da área em metros quadrados
    std::cout << "Digite o tamanho da área a ser pintada (em metros quadrados): ";
    std::cin >> area;

    // Calcula a quantidade de litros de tinta necessários
    litrosNecessarios = area / COBERTURA;

    // Calcula a quantidade de latas e o preço total
    quantidadeLatas = std::ceil(litrosNecessarios / LITROS_POR_LATA);
    precoTotal = quantidadeLatas * PRECO_POR_LATA;

    // Apresenta a quantidade de latas e o preço total
    std::cout << "Quantidade de latas de tinta: " << quantidadeLatas << std::endl;
    std::cout << "Preço total: R$ " << std::fixed << std::setprecision(2) << precoTotal << std::endl;

    return 0;
}
