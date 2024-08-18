/* Programa 05 */
/*5. Escreva um programa para ler os valores de uma temperatura em graus Celsius e apresentá-la convertida para graus Fahrenheit e graus Kelvin. A fórmula de conversão para graus Fahrenheit e dada por F = (9 x C + 160)/5. A fórmula de conversão para grau Kelvin e dada por K = C + 273,15. Nessa fórmula, F corresponde a temperatura em graus Fahrenheit, K corresponde a temperatura em graus Kelvin e C corresponde a temperatura em graus Celsius. Para apresentar o resultado, considere a utilização de duas casas decimais.*/
// exercicio05.cpp

#include <iostream>
#include <iomanip>  // Necessário para std::setprecision

//Função principal
int main() {
    double celsius, fahrenheit, kelvin;

    // Solicita a entrada da temperatura em graus Celsius
    std::cout << "Digite a temperatura em graus Celsius: ";
    std::cin >> celsius;

    // Calcula a temperatura em Fahrenheit e Kelvin
    fahrenheit = (9 * celsius + 160) / 5;
    kelvin = celsius + 273.15;

    // Apresenta os resultados com duas casas decimais
    std::cout << "A temperatura em Fahrenheit é: " << std::fixed << std::setprecision(2) << fahrenheit << "°F" << std::endl;
    std::cout << "A temperatura em Kelvin é: " << std::fixed << std::setprecision(2) << kelvin << "K" << std::endl;

    return 0;
}
