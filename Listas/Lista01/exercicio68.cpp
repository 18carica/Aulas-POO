/* Programa 68 */
/*68. Um funcionário de uma empresa foi contratado em 1995, com um salário inicial de R$ 520,00. Em 1996, ele recebeu um aumento salarial de 1,5%. A partir de 1997, os aumentos salariais desse funcionário passaram a corresponder ao dobro do percentual aplicado no ano anterior. Escreva um programa que determine o valor atual do salário desse funcionário. O programa deve exibir o ano (a partir de 1995) e o valor do salário do funcionário durante esse ano.*/
// exercicio68.cpp

#include <iostream>
#include <iomanip> // Necessário para formatar a saída com duas casas decimais

//Função principal
int main() {
    double salario = 520.00;
    double percentualAumento = 1.5;
    int ano = 1995;

    // Exibe o salário de 1995
    std::cout << "Ano: " << ano << " - Salario: R$ " << std::fixed << std::setprecision(2) << salario << std::endl;

    // Loop para calcular o salário de 1996 em diante
    for (ano = 1996; ano <= 2024; ++ano) {
        salario += salario * (percentualAumento / 100);  // Aplica o aumento
        std::cout << "Ano: " << ano << " - Salario: R$ " << std::fixed << std::setprecision(2) << salario << std::endl;
        percentualAumento *= 2;  // Dobra o percentual de aumento para o próximo ano
    }

    //Fim do Programa
    return 0;
}