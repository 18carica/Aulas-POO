/* Programa 65 */
/*65. Devido ao sucesso de sua lojinha, Walter Paraíba adquiriu uma panificadora, onde também pretende implantar a metodologia da tabelinha de preços. Você foi contratado para desenvolver o programa que monte essa tabela de preços para no mínimo 1 e no máximo 50 pães. Em seguida, o programa deve exibir o resultado na tela do terminal, considerando valores com duas casas decimais. O programa deve solicitar o preço do pão e apresentar a tabela, conforme o exemplo abaixo:

=> Preço do pão: R$ 1.12

Quantidade - Valor R$
1  -  R$ 1.12
2  -  R$ 2.24
...
50  -  R$ 56.00
*/
// exercicio65.cpp

#include <iostream>
#include <iomanip> // Necessário para formatar a saída com duas casas decimais

//Função principal
int main() {
    double precoPao;
    int quantidadeMaxima = 50;

    // Solicita ao usuário o preço do pão
    std::cout << "Informe o preco do pao: R$ ";
    std::cin >> precoPao;

    // Exibe o cabeçalho da tabela
    std::cout << "Quantidade - Valor R$\n";

    // Loop para gerar a tabela de preços dos pães
    for (int i = 1; i <= quantidadeMaxima; ++i) {
        std::cout << std::fixed << std::setprecision(2);  // Configura a precisão
        std::cout << i << " - R$ " << i * precoPao << std::endl;
    }

    //Fim do Programa
    return 0;
}