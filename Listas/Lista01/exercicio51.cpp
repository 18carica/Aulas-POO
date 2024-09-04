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

// Função principal do programa
int main() {
    std::string nome;  // Variável para armazenar o nome do atleta
    double saltos[5];  // Vetor para armazenar as distâncias dos cinco saltos

    // Loop principal do programa, continua até o usuário digitar "sair"
    while (true) {
        // Solicita o nome do atleta ou a opção para encerrar o programa
        std::cout << "Nome do atleta (ou 'sair' para encerrar): ";
        std::getline(std::cin, nome);  // Lê o nome do atleta

        // Se o nome digitado for "sair", encerra o loop
        if (nome == "sair") break;

        // Loop para receber as distâncias dos 5 saltos
        for (int i = 0; i < 5; i++) {
            std::cout << "Digite a distância do salto " << (i + 1) << ": ";
            std::cin >> saltos[i];  // Lê a distância do salto
        }

        // Limpar o buffer de entrada após a leitura dos saltos
        std::cin.ignore();  // Evita problemas com o getline na próxima iteração

        // Encontra o melhor salto (maior valor) usando a função max_element
        double melhorSalto = *std::max_element(saltos, saltos + 5);

        // Encontra o pior salto (menor valor) usando a função min_element
        double piorSalto = *std::min_element(saltos, saltos + 5);

        // Variável para armazenar a soma total de todos os saltos
        double somaSaltos = 0.0;

        // Loop para somar todas as distâncias dos saltos
        for (int i = 0; i < 5; i++) {
            somaSaltos += saltos[i];
        }

        // Calcula a média dos três saltos restantes (excluindo o melhor e o pior)
        double mediaSaltos = (somaSaltos - melhorSalto - piorSalto) / 3.0;

        // Exibe o resultado do melhor salto
        std::cout << "\nMelhor salto: " << melhorSalto << " m\n";

        // Exibe o resultado do pior salto
        std::cout << "Pior salto: " << piorSalto << " m\n";

        // Exibe a média dos saltos restantes
        std::cout << "Média dos demais saltos: " << mediaSaltos << " m\n";

        // Exibe o resultado final do atleta
        std::cout << "Resultado final:\n";
        std::cout << nome << ": " << mediaSaltos << " m\n\n";
    }

    return 0;  // Finaliza o programa
}
