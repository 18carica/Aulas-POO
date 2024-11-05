/* Programa 43 */
/*43. Escreva um programa que leia 5 números e informe a soma e a média dos números.*/
// exercicio43.cpp

#include <iostream>

//Função principal
int main() {
    int numeros[5]; // Array para armazenar os números
    int soma = 0; // Variável para armazenar a soma dos números

    // Loop para ler 5 números do usuário
    for (int i = 0; i < 5; i++) {
        std::cout << "Digite o número " << i + 1 << ": ";
        std::cin >> numeros[i];
        soma += numeros[i]; // Soma os números à medida que são inseridos
    }

    // Calcula a média dos números
    double media = static_cast<double>(soma) / 5;
    std::cout << "A soma dos números é: " << soma << std::endl;
    std::cout << "A média dos números é: " << media << std::endl;
    return 0;
}
