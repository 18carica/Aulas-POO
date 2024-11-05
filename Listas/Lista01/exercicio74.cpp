/* Programa 74 */
/*74. Escreva um programa que utilize uma função para exibir o seguinte padrão:
1
2*
3**
4****
...*/
// exercicio74.cpp

#include <iostream> // Biblioteca padrão para entrada e saída

// Função para exibir o padrão solicitado
void exibirPadrao(int N) {
    // Loop para imprimir de 1 até N
    for (int i = 1; i <= N; i++) {
        std::cout << i; // Exibe o número atual
        // Loop para imprimir os asteriscos
        for (int j = 1; j < i; j++) {
            std::cout << "*"; // Exibe os asteriscos
        }
        std::cout << std::endl; // Pula para a próxima linha
    }
}

//Função principal
int main() {
    int N; // Variável para armazenar o valor de N

    // Solicita a entrada de um inteiro N ao usuário
    std::cout << "Informe um valor inteiro para N: ";
    std::cin >> N; // Lê o valor de N

    // Chama a função para exibir o padrão
    exibirPadrao(N);

    return 0; // Indica que o programa foi executado com sucesso
}