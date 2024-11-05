/* Programa 66 */
/*66. Devido ao sucesso de seus negócios, Walter Paraíba expandiu a sua empresa. Agora, ele precisa que você desenvolva um programa que represente uma caixa registradora. O programa deve receber um número desconhecido de valores referentes aos preços das mercadorias. Um valor zero deve ser informado pelo operador para indicar o final da compra. O programa deve então calcular o total da compra e perguntar o valor em dinheiro que o cliente forneceu, para então calcular e mostrar o valor do troco. Após esta operação, o programa deverá voltar ao ponto inicial, para registrar a próxima compra. Considere a apresentação dos resultados utilizando duas casas decimais. A saída deve ser conforme o exemplo abaixo (observe o alinhamento dos valores):   

----- Armazém Paraíba -----

+ Produto 1:    R$ 12.20
+ Produto 2:    R$  5.80
+ Produto 3:    R$     0
=   Total...:   R$ 18.00
=>  Dinheiro:   R$ 20.00
-   Troco...:   R$  2.00
...
+ Produto 1: ...*/
// exercicio66.cpp

#include <iostream>
#include <iomanip> // Necessário para formatar a saída com duas casas decimais

//Função principal
#include <iostream>
#include <iomanip>  // Para manipular as casas decimais

int main() {
    double preco, total, dinheiro, troco;
    int produto;

    while (true) {
        total = 0.0;  // Reseta o total para a próxima compra
        produto = 1;  // Contador de produtos

        std::cout << "----- Armazem Paraiba -----" << std::endl;

        // Loop para inserir os preços dos produtos
        while (true) {
            std::cout << "+ Produto " << produto << ": R$ ";
            std::cin >> preco;

            if (preco == 0) {
                break;  // Se o valor for 0, encerra a inserção de produtos
            }

            total += preco;
            produto++;
        }

        // Exibe o total da compra
        std::cout << "=  Total...: R$ " << std::fixed << std::setprecision(2) << total << std::endl;

        // Solicita o valor em dinheiro fornecido pelo cliente
        std::cout << "=> Dinheiro: R$ ";
        std::cin >> dinheiro;

        // Calcula e exibe o troco
        troco = dinheiro - total;
        std::cout << "-  Troco...: R$ " << std::fixed << std::setprecision(2) << troco << std::endl;

        std::cout << std::endl;  // Nova linha para separar as compras
    }

    //Fim do Programa
    return 0;
}
