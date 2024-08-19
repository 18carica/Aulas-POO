/* Programa 26 */
/*26. Escreva um programa que pergunte o nome e o preço de três produtos. O programa deve informar qual produto devera ser comprado, sabendo que a decisão e sempre pelo mais barato. O resultado deve aparecer o nome e o preço do produto mais barato.*/
// exercicio26.cpp

//Função principal
#include <iostream>
#include <string>

int main() {
    std::string produto1, produto2, produto3;
    float preco1, preco2, preco3;

    // Solicita o nome e o preço dos três produtos
    std::cout << "Digite o nome do primeiro produto: ";
    std::cin >> produto1;
    std::cout << "Digite o preço do primeiro produto: ";
    std::cin >> preco1;

    std::cout << "Digite o nome do segundo produto: ";
    std::cin >> produto2;
    std::cout << "Digite o preço do segundo produto: ";
    std::cin >> preco2;

    std::cout << "Digite o nome do terceiro produto: ";
    std::cin >> produto3;
    std::cout << "Digite o preço do terceiro produto: ";
    std::cin >> preco3;

    // Verifica qual é o produto mais barato
    if (preco1 < preco2 && preco1 < preco3) {
        std::cout << "Você deve comprar o " << produto1 << " que custa R$ " << preco1 << std::endl;
    } else if (preco2 < preco1 && preco2 < preco3) {
        std::cout << "Você deve comprar o " << produto2 << " que custa R$ " << preco2 << std::endl;
    } else {
        std::cout << "Você deve comprar o " << produto3 << " que custa R$ " << preco3 << std::endl;
    }

    return 0;
}
