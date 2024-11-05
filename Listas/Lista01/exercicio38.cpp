/* Programa 38 */
/*38. O Armazém Paraíba está com uma promoção de carnes que é imperdível. Confira:
                Ate 5 kg           Acima de 5 kg
Contrafilé      R$ 40,50 por kg    R$ 35,50 por kg
Alcatra         R$ 41,80 por kg    R$ 36,25 por kg
Picanha         R$ 39,90 por kg    R$ 35,99 por kg
Para atender todo mundo, cada cliente somente poderá levar apenas um dos tipos de carne da promoção. Porém, não há limites para a quantidade de carne que cada cliente deseja comprar. Se a compra for paga com Cartão Paraíba, o cliente receberá um desconto de 5% sobre o valor total da compra. Escreva um programa que peça o tipo e a quantidade de carne que o cliente deseja compra. Em seguida, o programa deve gerar um cupom fiscal contendo as informações da compra: tipo e quantidade de carne, preço total de pagamento, valor do desconto e valor a pagar.*/
// exercicio38.cpp

//Função principal
#include <iostream>

int main() {
    char tipoCarne;
    double kgCarne, precoPorKg, precoTotal;
    char pagamentoCartao;

    std::cout << "Digite o tipo de carne (C para Contrafilé, A para Alcatra, P para Picanha): ";
    std::cin >> tipoCarne;
    std::cout << "Digite a quantidade (em kg) de carne: ";
    std::cin >> kgCarne;

    switch (tipoCarne) {
        case 'C': precoPorKg = (kgCarne <= 5) ? 40.50 : 35.50; break;
        case 'A': precoPorKg = (kgCarne <= 5) ? 41.80 : 36.25; break;
        case 'P': precoPorKg = (kgCarne <= 5) ? 39.90 : 35.99; break;
        default: std::cout << "Tipo de carne inválido!" << std::endl; return 1;
    }

    precoTotal = kgCarne * precoPorKg;

    std::cout << "Pagamento com cartão Paraíba? (S/N): ";
    std::cin >> pagamentoCartao;

    if (pagamentoCartao == 'S' || pagamentoCartao == 's') {
        precoTotal *= 0.95; // Desconto de 5%
    }

    std::cout << "Tipo de carne: " << tipoCarne << std::endl;
    std::cout << "Quantidade de carne: " << kgCarne << " kg" << std::endl;
    std::cout << "Preço total: R$ " << precoTotal << std::endl;

    return 0;
}
