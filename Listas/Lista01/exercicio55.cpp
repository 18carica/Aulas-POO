/* Programa 55 */
/* 55. Escreva um programa que imprima na tela apenas os números ímpares entre 1 e 50.
*/
// exercicio55.cpp

#include <iostream>

// Função principal do programa
int main() {
    // Loop para exibir os números ímpares de 1 a 50
    for (int i = 1; i <= 50; i += 2) {  // Inicia o loop em 1 e incrementa de 2 em 2
        std::cout << i << " ";  // Exibe o valor atual de 'i' seguido de um espaço
    }
    
    std::cout << "\n";  // Quebra de linha após exibir todos os números
    return 0;  // Finaliza o programa
}
