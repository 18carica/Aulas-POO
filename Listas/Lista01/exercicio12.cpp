/* Programa 12 */
/*12. Utilizando como dados de entrada a altura e o sexo de uma pessoa, escreva um programa que calcule seu peso ideal e informe se ela está dentro, acima ou abaixo do peso. Considere as seguintes fórmulas:
	A. Para homens (72,7 x altura) – 58
	B. Para mulheres (62,1 x altura) – 44,7*/
// exercicio12.cpp

//Função principal
#include <iostream>

int main() {
    double altura, pesoAtual, pesoIdeal;
    char sexo;

    // Solicita a entrada da altura, do sexo e do peso atual
    std::cout << "Digite a sua altura (em metros): ";
    std::cin >> altura;
    
    if (altura <= 0) {
        std::cout << "Altura inválida." << std::endl;
        return 1;
    }

    std::cout << "Digite o seu sexo (M para masculino, F para feminino): ";
    std::cin >> sexo;

    std::cout << "Digite o seu peso atual (em kg): ";
    std::cin >> pesoAtual;

    // Calcula o peso ideal
    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = (62.1 * altura) - 44.7;
    } else {
        std::cout << "Sexo inválido." << std::endl;
        return 1;
    }

    // Apresenta o peso ideal e verifica a condição do peso
    std::cout << "Seu peso ideal é: " << pesoIdeal << " kg" << std::endl;

    if (pesoAtual < pesoIdeal) {
        std::cout << "Você está abaixo do peso ideal." << std::endl;
    } else if (pesoAtual > pesoIdeal) {
        std::cout << "Você está acima do peso ideal." << std::endl;
    } else {
        std::cout << "Você está dentro do peso ideal." << std::endl;
    }

    return 0;
}
