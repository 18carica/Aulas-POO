/* Programa 53 */
/* 53. Escreva um programa que peça a entrada de uma nota, entre zero e dez. O programa deve exibir uma mensagem se o valor for inválido e continuar solicitando a entrada de uma nova até que o usuário informe um valor válido. Se o valor for válido, exibir uma mensagem informando a nota digitada pelo usuário.
*/
// exercicio53.cpp

#include <iostream>

//Função principal
int main() {
    double nota;

    do {
        std::cout << "Digite uma nota entre 0 e 10: ";
        std::cin >> nota;

        if (nota < 0.0 || nota > 10.0) {
            std::cout << "Nota inválida. ";
        }
    } while (nota < 0.0 || nota > 10.0);

    std::cout << "Nota válida: " << nota << "\n";
    return 0;
}
