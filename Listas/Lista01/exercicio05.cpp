/* Programa 05 */
// exercicio05.cpp

#include <iostream>
#include <iomanip>  // Necessário para std::setprecision

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
