/* Programa 42 */
/*42. Escreva um programa que imprima na tela os números de 1 a 20, um abaixo do outro. Depois modifique o programa para que ele mostre os números um ao lado do outro.*/
// exercicio42.cpp

#include <iostream>
// Parte 1: Um abaixo do outro
//Função principal
int main() {
    // Loop para imprimir os números de 1 a 20, um abaixo do outro
    for (int i = 1; i <= 20; i++) {
        std::cout << i << std::endl;
    }
    return 0;
}

// -------------------------------------------------------------------------------------------------------------------------------------

/* Parte 2: Um ao lado do outro
//Função principal
int main() {
    // Loop para imprimir os números de 1 a 20, um ao lado do outro
    for (int i = 1; i <= 20; i++) {
        std::cout << i << " "; // Imprime o número seguido de um espaço
    }
    std::cout << std::endl; // Adiciona uma linha após o loop
    return 0;
}
*/