// ProvaP1.cpp
/*1. Escreva um programa que receba um cojunto de valores inteiros. Em seguida, exiba um gráfico de barras horizontal, simulando o histograma referente aos valores que foram informados. O programa deve exibir o resultado conforme o exemplo abaixo:

exemplo de saida:
>> Início: Prova P1

Informe os dados: 3 5 2 1 

Dados: [3, 5, 2, 1]

* Total de linhas: 4
* Total de colunas: 5

Histograma Horizontal

* * *
* * * * *
* *
*
*/

#include <iostream>
#include <vector>
#include <iomanip>

//----------------------------------------------------------------------------------------------------------------------
// Função principal
//----------------------------------------------------------------------------------------------------------------------
int main() {
    std::cout << ">> Início: Prova P1\n\n";

    std::vector<int> dados;
    int valor;
    int quantidade;

    // Pergunta quantos números o usuário deseja inserir
    std::cout << "Quantos números deseja inserir? ";
    std::cin >> quantidade;

    // Recebendo os valores
    std::cout << "Informe os números:\n";
    for (int i = 0; i < quantidade; i++) {
        std::cin >> valor;
        dados.push_back(valor);
    }

    // Exibindo os dados
    std::cout << "\nDados: [";
    for (size_t i = 0; i < dados.size(); i++) {
        std::cout << dados[i];
        if (i < dados.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]\n";

    // Exibindo o total de linhas e colunas
    std::cout << "\n* Total de linhas: " << dados.size() << std::endl;

    int maior = 0;
    for (int valor : dados) {
        if (valor > maior) {
            maior = valor;
        }
    }
    std::cout << "* Total de colunas: " << maior << std::endl;

    // Exibindo o histograma horizontal com eixo 'y' e eixo 'x'
    std::cout << "\nHistograma Horizontal\n";
    for (size_t i = 0; i < dados.size(); i++) {
        std::cout << i + 1 << "| ";
        for (int j = 0; j < dados[i]; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    // Exibindo o eixo X (colunas)
    std::cout << " +";
    for (int i = 0; i < maior; i++) {
        std::cout << "--";
    }
    std::cout << std::endl << "  ";
    for (int i = 0; i < maior; i++) {
        std::cout << " " << i + 1;
    }
    std::cout << std::endl;

    return 0;
}
