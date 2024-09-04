/* Programa 55 */
/* 55. Escreva um programa que imprima na tela apenas os números ímpares entre 1 e 50.
*/
// exercicio55.cpp

#include <iostream>

//Função principal
int main() {
    for (int i = 1; i <= 50; i += 2) {
        std::cout << i << " ";
    }
    std::cout << "\n";
    return 0;
}
