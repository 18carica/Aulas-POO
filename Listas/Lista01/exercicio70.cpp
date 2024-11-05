/* Programa 70 */
/*70. Escreva um programa que receba o valor de uma dívida e mostre uma tabela com os seguintes dados: valor da dívida, valor dos juros, quantidade de parcelas e valor da parcela. Os juros e a quantidade de parcelas correspondem à tabela abaixo:   

Quantidade de parcelas     % de juros sobre o valor inicial da dívida
        1                                     0
        3                                     10
        6                                     15
        9                                     20
        12                                    25

Considere a apresentação do resultado utilizando duas casas decimais e o alinhamento dos valores. Observe um exemplo de saída do programa:

Valor da Dívida      Valor dos Juros      Parcelas       Valor Final
R$ 1.000,00	         R$      0	          1	             R$ 1.000,00
R$ 1.100,00	         R$ 100,00	          3	             R$   366,67
R$ 1.150,00	         R$ 150,00	          6	             R$   191,67
*/
// exercicio70.cpp

#include <iostream>
#include <iomanip> // Necessário para formatar a saída com duas casas decimais

//Função principal
int main() {
    double valorDivida, valorFinal, valorJuros;
    int parcelas;

    // Solicita o valor inicial da dívida
    std::cout << "Informe o valor da divida: R$ ";
    std::cin >> valorDivida;

    // Exibe o cabeçalho da tabela
    std::cout << "Valor da Divida     Valor dos Juros     Parcelas     Valor Final" << std::endl;

    // Tabela de parcelas e juros
    int parcelasOpcoes[] = {1, 3, 6, 9, 12};
    double jurosOpcoes[] = {0, 10, 15, 20, 25};

    for (int i = 0; i < 5; ++i) {
        parcelas = parcelasOpcoes[i];
        valorJuros = valorDivida * (jurosOpcoes[i] / 100.0);
        valorFinal = valorDivida + valorJuros;

        // Exibe os valores formatados
        std::cout << "R$ " << std::fixed << std::setprecision(2) << valorDivida + valorJuros
                  << "          R$ " << std::fixed << std::setprecision(2) << valorJuros
                  << "          " << parcelas
                  << "          R$ " << std::fixed << std::setprecision(2) << valorFinal / parcelas << std::endl;
    }

    //Fim do Programa
    return 0;
}