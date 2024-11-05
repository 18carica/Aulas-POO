/* Programa 71 */
/*71. Durante a expansão de seus negócios, Walter Paraíba também montou uma lanchonete, com o seguinte cardápio de lanches:
Descrição           Código      Preço
Cachorro Quente	    100	        R$ 7,50
Bauru Simples	    101	        R$ 10,30
Bauru com ovo	    102	        R$ 12,50
Hambúrguer	        103	        R$ 12,20
Cheeseburguer	    104	        R$ 10,30
X-Calango	        105	        R$ 18,10
Refrigerante	    106	        R$ 11,00

Escreva um programa que leia o código dos itens pedidos e as quantidades desejadas. O programa deve calcular e exibir o valor a ser pago por item e o total geral do pedido. Considere que o cliente deve informar quando o pedido deve ser encerrado. Apresente o resultado utilizando duas casas decimais.*/
// exercicio71.cpp

#include <iostream>
#include <iomanip> // Necessário para formatar a saída com duas casas decimais

//Função principal
int main() {
    int codigo, quantidade;
    double preco, totalGeral = 0.0;

    std::cout << "----- Lanchonete Walter Paraiba -----\n";
    std::cout << "Cardápio:\n";
    std::cout << "100 - Cachorro Quente (R$ 7.50)\n";
    std::cout << "101 - Bauru Simples (R$ 10.30)\n";
    std::cout << "102 - Bauru com Ovo (R$ 12.50)\n";
    std::cout << "103 - Hamburguer (R$ 12.20)\n";
    std::cout << "104 - Cheeseburguer (R$ 10.30)\n";
    std::cout << "105 - X-Calango (R$ 18.10)\n";
    std::cout << "106 - Refrigerante (R$ 11.00)\n";
    std::cout << "Digite 0 para encerrar o pedido.\n\n";

    while (true) {
        std::cout << "Informe o código do item (ou 0 para finalizar): ";
        std::cin >> codigo;

        // Encerra o pedido se o código for 0
        if (codigo == 0) {
            break;
        }

        std::cout << "Informe a quantidade desejada: ";
        std::cin >> quantidade;

        // Determina o preço do item com base no código informado
        switch (codigo) {
            case 100:
                preco = 7.50;
                break;
            case 101:
                preco = 10.30;
                break;
            case 102:
                preco = 12.50;
                break;
            case 103:
                preco = 12.20;
                break;
            case 104:
                preco = 10.30;
                break;
            case 105:
                preco = 18.10;
                break;
            case 106:
                preco = 11.00;
                break;
            default:
                std::cout << "Código inválido! Tente novamente.\n";
                continue;  // Volta ao início do loop
        }

        // Calcula o total por item e exibe o valor
        double totalItem = preco * quantidade;
        std::cout << "Valor por item: R$ " << std::fixed << std::setprecision(2) << totalItem << "\n";

        // Adiciona ao total geral
        totalGeral += totalItem;
    }

    // Exibe o total geral do pedido
    std::cout << "\nTotal geral do pedido: R$ " << std::fixed << std::setprecision(2) << totalGeral << "\n";

    return 0;
}