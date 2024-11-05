/* Programa 56 */
/* 56. A série de Fibonacci é formada pela sequência 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... Escreva um programa capaz de gerar a série de Fibonacci, até o n-ésimo termo. O programa deve solicitar ao usuário a entrada da quantidade de termos desejados.
*/
// exercicio56.cpp

#include <iostream>

// Função principal do programa
int main() {
    int n, t1 = 1, t2 = 1, nextTerm = 0;  // Declaração de variáveis para a sequência de Fibonacci

    // Solicita ao usuário que insira o número de termos da sequência
    std::cout << "Digite o número de termos: ";
    std::cin >> n;  // Lê o valor de 'n' inserido pelo usuário

    // Exibe os dois primeiros termos da sequência de Fibonacci, que são sempre 1 e 1
    std::cout << "Série de Fibonacci: " << t1 << ", " << t2;

    // Loop para calcular e exibir os próximos termos da sequência, a partir do terceiro
    for (int i = 3; i <= n; i++) {
        nextTerm = t1 + t2;  // Calcula o próximo termo somando os dois anteriores
        std::cout << ", " << nextTerm;  // Exibe o próximo termo

        t1 = t2;  // Atualiza o valor de 't1' para o próximo ciclo
        t2 = nextTerm;  // Atualiza o valor de 't2' para o próximo ciclo
    }
    
    std::cout << "\n";  // Quebra de linha após exibir a sequência completa
    return 0;  // Finaliza o programa
}
