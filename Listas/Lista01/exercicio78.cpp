/* Programa 78 */
/*78. Escreva um programa que ultilize uma função para exibir o seguinte padrão:
* * * * *
* * * *
* * *
* *
*
*/
// exercicio78.cpp

#include <iostream> // Biblioteca padrão para entrada e saída

// Função que exibe o padrão de estrelas decrescente
void exibirPadrao() {
    int linhas = 5; // Define a quantidade fixa de linhas como 5
    for (int i = linhas; i >= 1; i--) {
        // Imprime as estrelas com espaços entre elas
        for (int j = 1; j <= i; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl; // Quebra de linha após cada linha do padrão
    }
}

// Função principal
int main() {
    // Chama a função para exibir o padrão fixo de 5 linhas
    exibirPadrao();

    return 0; // Indica que o programa foi executado com sucesso
}
