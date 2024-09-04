/* Programa 56 */
/* 56. A série de Fibonacci é formada pela sequência 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... Escreva um programa capaz de gerar a série de Fibonacci, até o n-ésimo termo. O programa deve solicitar ao usuário a entrada da quantidade de termos desejados.
*/
// exercicio56.cpp

#include <iostream>

//Função principal
int main() {
    int n, t1 = 1, t2 = 1, nextTerm = 0;

    std::cout << "Digite o número de termos: ";
    std::cin >> n;

    std::cout << "Série de Fibonacci: " << t1 << ", " << t2;

    for (int i = 3; i <= n; i++) {
        nextTerm = t1 + t2;
        std::cout << ", " << nextTerm;
        t1 = t2;
        t2 = nextTerm;
    }
    std::cout << "\n";
    return 0;
}
