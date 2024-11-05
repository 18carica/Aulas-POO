/* Programa 07 */
/*7. Escreva um programa para ler os valores de uma temperatura em graus Fahrenheit e apresentá-la convertida para graus Kelvin. A fórmula de conversão de graus Fahrenheit para graus Kelvin é dada por K = (F – 32) x 5/9 + 273,15. Nessa fórmula, F corresponde à temperatura em graus Fahrenheit e K corresponde à temperatura em graus Kelvin. Para apresentar o resultado, considere a utilização de duas casas decimais.*/
// exercicio07.cpp

#include <iostream>
#include <iomanip>  // Necessário para std::setprecision

//Função principal
int main() {
    double fahrenheit, kelvin;

    // Solicita a entrada da temperatura em graus Fahrenheit
    std::cout << "Digite a temperatura em graus Fahrenheit: ";
    std::cin >> fahrenheit;

    // Converte a temperatura para Kelvin usando a fórmula K = (F – 32) x 5/9 + 273,15
    kelvin = (fahrenheit - 32) * 5.0 / 9.0 + 273.15;

    // Apresenta a temperatura em Kelvin com duas casas decimais
    std::cout << "A temperatura em Kelvin é: " << std::fixed << std::setprecision(2) << kelvin << " K" << std::endl;

    return 0;
}
