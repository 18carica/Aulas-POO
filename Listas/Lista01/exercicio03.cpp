/* Programa 03 */
// exercicio03.cpp

#include <iostream>
#include <iomanip>  // Necessário para std::setprecision

// Função principal
int main() {
    double nota1, nota2, nota3, nota4, media;

    // Solicita a entrada de quatro notas
    std::cout << "Digite a primeira nota: ";
    std::cin >> nota1;
    std::cout << "Digite a segunda nota: ";
    std::cin >> nota2;
    std::cout << "Digite a terceira nota: ";
    std::cin >> nota3;
    std::cout << "Digite a quarta nota: ";
    std::cin >> nota4;

    // Calcula a média das quatro notas
    media = (nota1 + nota2 + nota3 + nota4) / 4.0;  // Divisão por 4.0 para resultado em double

    // Apresenta a média final com duas casas decimais
    std::cout << "A média final é: " << std::fixed << std::setprecision(2) << media << std::endl;

    return 0;
}