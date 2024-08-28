/* Programa 63 */
/*63. Escreva um programa que calcule o valor total investido por um colecionador em sua coleção de CDs e o valor médio gasto em cada um deles. O usuário deverá informar a quantidade de CDs e o valor de cada um. Como resultado, o programa deve exibir uma mensagem informando o total de CDs do colecionador, o valor total de sua coleção e o valor médio de cada CD. Considere a apresentação do resultado utilizando duas casas decimais.*/
// exercicio63.cpp

#include <iostream>
#include <iomanip> // Necessário para formatar a saída com duas casas decimais

//Função principal
int main() {
    int quantidade;
    double valor, total = 0.0;

    // Solicita ao usuário a quantidade de CDs
    std::cout << "Informe a quantidade de CDs: ";
    std::cin >> quantidade;

    // Verifica se a quantidade de CDs é válida
    if (quantidade <= 0) {
        std::cout << "A quantidade de CDs deve ser maior que zero." << std::endl;
        return 1; // Encerra o programa com código de erro
    }

    // Loop para ler o valor de cada CD
    for(int i = 0; i < quantidade; ++i) {
        std::cout << "Informe o valor do CD " << i + 1 << " (em reais): ";
        std::cin >> valor;

        // Verifica se o valor do CD é válido
        if (valor < 0) {
            std::cout << "O valor do CD não pode ser negativo." << std::endl;
            return 1; // Encerra o programa com código de erro
        }

        total += valor; // Acumula o valor total investido
    }

    // Calcula a média gasta por CD
    double media = total / quantidade;

    // Define a formatação para exibir duas casas decimais
    std::cout << std::fixed << std::setprecision(2);

    // Exibe os resultados
    std::cout << "\n--- Resumo da Coleção ---" << std::endl;
    std::cout << "Total de CDs: " << quantidade << std::endl;
    std::cout << "Valor total da coleção: R$ " << total << std::endl;
    std::cout << "Valor médio de cada CD: R$ " << media << std::endl;

    return 0; // Encerra o programa com sucesso
}
