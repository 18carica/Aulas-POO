/* Programa 51 */
/* 51. Em uma competição de salto em distância, cada atleta tem direito a cinco saltos. No final da série de saltos de cada atleta, o melhor e o pior resultados são eliminados. O seu resultado fica sendo a média dos três valores restantes. Escreva um programa que receba o nome e as cinco distâncias alcançadas pelo atleta em seus saltos e depois informe a média dos saltos conforme a descrição informada anteriormente (retirar o melhor e o pior salto e depois calcular a média). Os saltos são informados na ordem da execução, portanto não são ordenados. O programa deve ser encerrado quando não for informado o nome do atleta. O resultado do programa deve ser apresentado conforme o exemplo abaixo:

Atleta: Paulo Giovani

Primeiro Salto: 7.0
Segundo Salto: 7.4
Terceiro Salto: 10.2
Quarto Salto: 9.4
Quinto Salto: 18.5

Melhor salto: 18.5 m
Pior salto: 7.0 m
Média dos demais saltos: 9 m

Resultado final:
Paulo Giovani: 9 m
*/
// exercicio51.cpp

#include <iostream>
#include <string>
#include <algorithm>

//Função principal
int main() {
    std::string nome;
    double saltos[5];
    
    while (true) {
        std::cout << "Nome do atleta (ou 'sair' para encerrar): ";
        std::getline(std::cin, nome);
        if (nome == "sair") break;

        for (int i = 0; i < 5; i++) {
            std::cout << "Digite a distância do salto " << (i + 1) << ": ";
            std::cin >> saltos[i];
        }
        std::cin.ignore();  // Limpar o buffer de entrada

        double melhorSalto = *std::max_element(saltos, saltos + 5);
        double piorSalto = *std::min_element(saltos, saltos + 5);
        double somaSaltos = 0.0;

        for (int i = 0; i < 5; i++) {
            somaSaltos += saltos[i];
        }

        double mediaSaltos = (somaSaltos - melhorSalto - piorSalto) / 3.0;

        std::cout << "\nMelhor salto: " << melhorSalto << " m\n";
        std::cout << "Pior salto: " << piorSalto << " m\n";
        std::cout << "Média dos demais saltos: " << mediaSaltos << " m\n";
        std::cout << "Resultado final:\n";
        std::cout << nome << ": " << mediaSaltos << " m\n\n";
    }

    return 0;
}
