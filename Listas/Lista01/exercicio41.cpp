/* Programa 41 */
/*41. Supondo que a população de um país A seja da ordem de 80000 habitantes com uma taxa anual de crescimento de 3% e que a população de B seja 200000 habitantes com uma taxa de crescimento de 1.5%. Escreva um programa que calcule e informe o número de anos necessários para que a população do país A ultrapasse ou iguale a população do país B, mantidas as taxas de crescimento.*/
// exercicio41.cpp

#include <iostream>

//Função principal
int main() {
    // Inicializa a população dos países A e B
    double populacaoA = 80000;
    double populacaoB = 200000;
    int anos = 0;

    // Calcula o número de anos necessários para a população A ultrapassar ou igualar B
    while (populacaoA < populacaoB) {
        populacaoA += populacaoA * 0.03; // Aumenta a população A em 3%
        populacaoB += populacaoB * 0.015; // Aumenta a população B em 1,5%
        anos++;
    }

    // Exibe o resultado
    std::cout << "A população do país A irá ultrapassar ou igualar a população do país B em " << anos << " anos." << std::endl;
    return 0;
}
