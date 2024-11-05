/* Programa 53 */
/* 53. Escreva um programa que peça a entrada de uma nota, entre zero e dez. O programa deve exibir uma mensagem se o valor for inválido e continuar solicitando a entrada de uma nova até que o usuário informe um valor válido. Se o valor for válido, exibir uma mensagem informando a nota digitada pelo usuário.
*/
// exercicio53.cpp

#include <iostream>

// Função principal do programa
int main() {
    double nota;  // Variável para armazenar a nota inserida pelo usuário

    // Loop 'do-while' para garantir que o usuário insira uma nota válida entre 0 e 10
    do {
        // Solicita ao usuário que insira uma nota
        std::cout << "Digite uma nota entre 0 e 10: ";
        std::cin >> nota;  // Lê a nota inserida

        // Verifica se a nota está fora do intervalo válido (menor que 0 ou maior que 10)
        if (nota < 0.0 || nota > 10.0) {
            std::cout << "Nota inválida. ";  // Exibe mensagem de erro se a nota for inválida
        }
    } while (nota < 0.0 || nota > 10.0);  // Repete o loop até que uma nota válida seja inserida

    // Exibe a nota válida inserida pelo usuário
    std::cout << "Nota válida: " << nota << "\n";
    
    return 0;  // Finaliza o programa
}
