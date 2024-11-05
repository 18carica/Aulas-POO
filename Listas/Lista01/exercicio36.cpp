/* Programa 36 */
/*36. Um posto esta vendendo combustível com a seguinte tabela de descontos:
    • Álcool:
      a. Até 20 litros, desconto de 3% por litro;
      b. Acima de 20 litros, desconto de 5% por litro;
    • Gasolina:
      a. Até 20 litros, desconto de 4% por litro;
      b. Acima de 20 litros, desconto de 6% por litro;
Escreva um programa que leia o número de litros vendidos e o tipo de combustível (A: Álcool, G: Gasolina). Em seguida, calcule e imprima o valor a ser pago pelo cliente, sabendo-se que o preço do litro da gasolina é de R$ 5,70 o preço do litro do álcool é de R$ 3,78.*/
// exercicio36.cpp

//Função principal
#include <iostream>

int main() {
    char tipoCombustivel;
    double litros, precoPorLitro, desconto, precoTotal;

    std::cout << "Digite o tipo de combustível (A para Álcool, G para Gasolina): ";
    std::cin >> tipoCombustivel;
    std::cout << "Digite a quantidade de litros: ";
    std::cin >> litros;

    if (tipoCombustivel == 'A') {
        precoPorLitro = 3.78;
        desconto = (litros <= 20) ? 0.03 : 0.05;
    } else if (tipoCombustivel == 'G') {
        precoPorLitro = 5.70;
        desconto = (litros <= 20) ? 0.04 : 0.06;
    } else {
        std::cout << "Tipo de combustível inválido!" << std::endl;
        return 1;
    }

    precoTotal = litros * precoPorLitro * (1 - desconto);
    std::cout << "Valor a ser pago: R$ " << precoTotal << std::endl;

    return 0;
}
