/* Programa 25 */
/*25. Considere a cena de um crime. Escreva um programa que faça as seguintes perguntas para uma pessoa:
1. “Telefonou para a vítima?”
2. “Esteve no local do crime?”
3. “Mora perto da vítima?”
4. “Devia para a vítima?”
5. “já trabalhou com a vítima?”
O programa deve apresentar uma classificação sobre a participação da pessoa no crime. Se ela respondeu positivamente duas questões, deve ser classificada como “Suspeita”. Se ela respondeu positivamente entre três e quatro questões deve ser classificada como “Cúmplice”. Se ela respondeu positivamente todas as questões, deve ser classificada como “Assassino”. Caso contrário, deve ser classificada como “Inocente”.*/
// exercicio25.cpp

//Função principal
#include <iostream>

int main() {
    int respostas_positivas = 0;
    char resposta;

    // Faz as perguntas ao usuário
    std::cout << "Telefonou para a vítima? (S/N): ";
    std::cin >> resposta;
    if (resposta == 'S' || resposta == 's') respostas_positivas++;

    std::cout << "Esteve no local do crime? (S/N): ";
    std::cin >> resposta;
    if (resposta == 'S' || resposta == 's') respostas_positivas++;

    std::cout << "Mora perto da vítima? (S/N): ";
    std::cin >> resposta;
    if (resposta == 'S' || resposta == 's') respostas_positivas++;

    std::cout << "Devia para a vítima? (S/N): ";
    std::cin >> resposta;
    if (resposta == 'S' || resposta == 's') respostas_positivas++;

    std::cout << "Já trabalhou com a vítima? (S/N): ";
    std::cin >> resposta;
    if (resposta == 'S' || resposta == 's') respostas_positivas++;

    // Determina a classificação da pessoa com base nas respostas
    if (respostas_positivas == 5) {
        std::cout << "Classificação: Assassino." << std::endl;
    } else if (respostas_positivas >= 3) {
        std::cout << "Classificação: Cúmplice." << std::endl;
    } else if (respostas_positivas == 2) {
        std::cout << "Classificação: Suspeita." << std::endl;
    } else {
        std::cout << "Classificação: Inocente." << std::endl;
    }

    return 0;
}
