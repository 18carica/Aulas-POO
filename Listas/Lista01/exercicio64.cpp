/* Programa 64 */
/*64. Walter Paraíba possui uma lojinha de artigos de R$ 1,99. Essa lojinha possui diversas caixas de produtos. Quando um cliente realiza uma compra, podem ser comprados diversos produtos de uma única vez. Para agilizar o cálculo de quanto cada cliente deve pagar, Walter Paraíba desenvolveu uma tabela no Excel que contém o número de itens que o cliente comprou e o valor que ele deve pagar. Dessa maneira, a atendente do caixa precisa apenas contar quantos itens o cliente está levando e olhar na tabela de preços. Você foi contratado para desenvolver um programa que monte essa tabela de preços e exiba na tela do terminal, considerando valores com duas casas decimais. O programa deve solicitar o total de produtos e apresentar a tabela, conforme o exemplo abaixo:   

Quantidade - Valor R$
1  - R$ 1.99
2  - R$ 3.98
...
50  - R$ 99.50
*/
// exercicio64.cpp

#include <iostream>
#include <iomanip> // Necessário para formatar a saída com duas casas decimais

//Função principal
int main() {
    int quantidadeProdutos;
    double precoProduto = 1.99;

    // Solicita ao usuário a quantidade de produtos
    std::cout << "Informe a quantidade total de produtos: ";
    std::cin >> quantidadeProdutos;

    // Exibe o cabeçalho da tabela
    std::cout << "Quantidade - Valor R$\n";

    // Loop para gerar a tabela de preços
    for (int i = 1; i <= quantidadeProdutos; ++i) {
        std::cout << std::fixed << std::setprecision(2);  // Configura a precisão
        std::cout << i << " - R$ " << i * precoProduto << std::endl;
    }

    //Fim do Programa
    return 0;
}