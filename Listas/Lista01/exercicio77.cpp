/* Programa 77 */
/*77. Escreva um programa que ultilize uma função para exibir o seguinte padrão:
        *
      * *
    * * *
  * * * *
* * * * *
*/
// exercicio77.cpp

#include <iostream> // Biblioteca padrão para entrada e saída

// Função que exibe o padrão de pirâmide alinhada à direita
void exibirPadrao() {
    int linhas = 5; // Define a quantidade fixa de linhas como 5
    for (int i = 1; i <= linhas; i++) {
        // Imprime os espaços para alinhar à direita
        for (int j = i; j < linhas; j++) {
            std::cout << " "; // Dois espaços para manter o alinhamento
        }
        // Imprime as estrelas com espaços entre elas
        for (int k = 1; k <= i; k++) {
            std::cout << "* "; // Espaço após cada estrela
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
