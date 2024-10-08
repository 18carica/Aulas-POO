/* Programa 76 */
/*76. Escreva um programa com uma função chamada somaImposto, que possui dois parâmetros: taxaImposto, que representa a porcentagem de imposto que deve ser cobrado em relação ao valor de um item, e custo, que representa o custo de um item antes da aplicação da taxa de imposto.
A função retorna o valor do custo do item, incluindo o calor do imposto. O programa deve solicitar ao usuário a entrada do nome de um produto, do seu valor bruto e da taxa de imposto que deve ser aplicada. Ele deve exibir uma mensagem informando o nome do produto, seu valor sem os impostos, a taxa de imposto e o valor do produto com a aplicação da taxa de imposto*/
// exercicio76.cpp

#include <iostream> // Biblioteca padrão para entrada e saída
#include <iomanip>  // Biblioteca usada para manipulação de saída (como definir casas decimais)

// Função que calcula o valor do item com a aplicação da taxa de imposto
double somaImposto(double taxaImposto, double custo) {
    double valorComImposto = custo + (custo * (taxaImposto / 100.0)); // Aplica a taxa de imposto
    return valorComImposto; // Retorna o valor final do item com o imposto
}

//Função principal
int main() {
    std::string nomeProduto; // Variável para armazenar o nome do produto
    double valorBruto;       // Variável para armazenar o valor bruto do produto (sem imposto)
    double taxaImposto;      // Variável para armazenar a taxa de imposto

    // Solicita ao usuário as informações do produto
    std::cout << "Informe o nome do produto: ";
    std::getline(std::cin, nomeProduto); // Lê o nome completo do produto

    std::cout << "Informe o valor bruto do produto (sem imposto): R$ ";
    std::cin >> valorBruto; // Lê o valor bruto

    std::cout << "Informe a taxa de imposto (%): ";
    std::cin >> taxaImposto; // Lê a taxa de imposto

    // Chama a função somaImposto para calcular o valor com o imposto
    double valorComImposto = somaImposto(taxaImposto, valorBruto);

    // Exibe o resultado formatado com duas casas decimais
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n----- Resumo do Produto -----\n";
    std::cout << "Produto: " << nomeProduto << "\n";
    std::cout << "Valor sem imposto: R$ " << valorBruto << "\n";
    std::cout << "Taxa de imposto: " << taxaImposto << "%\n";
    std::cout << "Valor com imposto: R$ " << valorComImposto << "\n";

    return 0; // Indica que o programa foi executado com sucesso
}