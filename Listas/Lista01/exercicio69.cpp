/* Programa 69 */
/*69. Foi feita uma estatística em cinco cidades brasileiras para coletar dados sobre acidentes de trânsito. Foram obtidos os seguintes dados:   

     1. Código da cidade;
     2. Número de veículos de passeio;
     3. Número de acidentes de trânsito com vítimas.   

Escreva um programa que solicite a entrada desses dados. Em seguida, o programa deve calcular e apresentar um resultado que responda aos seguintes questionamentos:

     a. Qual o maior e o menor índice de acidentes de trânsito e a que cidade eles pertencem?
     b. Qual a média de veículos de passeio?
     c. Qual a média de acidentes de trânsito nas cidades com menos de 2000 veículos de passeio?*/
// exercicio69.cpp

#include <iostream>
#include <limits>  // Para definir valores máximo e mínimo

//Função principal
int main() {
    int codigoCidade, veiculos, acidentes;
    int somaVeiculos = 0, somaAcidentesMenos2000 = 0, contadorMenos2000 = 0;
    int maiorAcidentes = -std::numeric_limits<int>::infinity();
    int menorAcidentes = std::numeric_limits<int>::infinity();
    int cidadeMaiorAcidentes, cidadeMenorAcidentes;

    // Loop para coletar dados de 5 cidades
    for (int i = 0; i < 5; ++i) {
        std::cout << "Informe o codigo da cidade: ";
        std::cin >> codigoCidade;
        std::cout << "Informe o numero de veiculos de passeio: ";
        std::cin >> veiculos;
        std::cout << "Informe o numero de acidentes com vitimas: ";
        std::cin >> acidentes;

        // Soma o número de veículos para calcular a média
        somaVeiculos += veiculos;

        // Verifica o maior e menor índice de acidentes
        if (acidentes > maiorAcidentes) {
            maiorAcidentes = acidentes;
            cidadeMaiorAcidentes = codigoCidade;
        }
        if (acidentes < menorAcidentes) {
            menorAcidentes = acidentes;
            cidadeMenorAcidentes = codigoCidade;
        }

        // Se a cidade tem menos de 2000 veículos, soma os acidentes
        if (veiculos < 2000) {
            somaAcidentesMenos2000 += acidentes;
            contadorMenos2000++;
        }
    }

    // Calcula a média de veículos e acidentes nas cidades com menos de 2000 veículos
    double mediaVeiculos = somaVeiculos / 5.0;
    double mediaAcidentesMenos2000 = (contadorMenos2000 > 0) ? (somaAcidentesMenos2000 / (double)contadorMenos2000) : 0.0;

    // Exibe os resultados
    std::cout << "Maior indice de acidentes: Cidade " << cidadeMaiorAcidentes << " com " << maiorAcidentes << " acidentes.\n";
    std::cout << "Menor indice de acidentes: Cidade " << cidadeMenorAcidentes << " com " << menorAcidentes << " acidentes.\n";
    std::cout << "Media de veiculos de passeio: " << mediaVeiculos << std::endl;
    std::cout << "Media de acidentes em cidades com menos de 2000 veiculos: " << mediaAcidentesMenos2000 << std::endl;
    
    //Fim do Programa
    return 0;
}