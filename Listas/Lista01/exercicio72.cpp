/* Programa 72 */
/*72. Escreva um programa que solicite a entrada de um inteiro N e utilize uma função para exibir o seguinte padrão:
1
22
333
...
NNNNN...N*/
// exercicio72.cpp

#include <iostream> // Biblioteca padrão para entrada e saída

// Função para exibir o padrão solicitado com espaço entre os números
void exibirPadrao(int N) {
    // Loop externo para controlar o número da linha
    for (int i = 1; i <= N; i++) {
        // Loop interno para imprimir o número i, i vezes, com espaço entre eles
        for (int j = 1; j <= i; j++) {
            std::cout << i << " "; // Exibe o número correspondente à linha atual seguido por um espaço
        }
        std::cout << std::endl; // Pula para a próxima linha após terminar de exibir a linha atual
    }
}

//Função principal
int main() {
    int N; // Variável para armazenar o valor de N

    // Solicita a entrada de um inteiro N ao usuário
    std::cout << "Informe um valor inteiro para N: ";
    std::cin >> N; // Lê o valor de N

    // Chama a função para exibir o padrão de números com espaço entre eles
    exibirPadrao(N);

    return 0; // Indica que o programa foi executado com sucesso
}