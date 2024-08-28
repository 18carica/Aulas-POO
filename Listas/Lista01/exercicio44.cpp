/* Programa 44 */
/*44. Escreva um programa que peça a entrada de dois números: base e expoente. Em seguida, o programa deve calcular e exibir o primeiro número elevado ao segundo número. Não utilize a função de potência da linguagem.*/
// exercicio44.cpp

#include <iostream>

//Função principal
int main() {
    int base, expoente;
    std::cout << "Digite a base: ";
    std::cin >> base;
    std::cout << "Digite o expoente: ";
    std::cin >> expoente;

    int resultado = 1;
    // Loop para calcular a potência manualmente
    for (int i = 0; i < expoente; i++) {
        resultado *= base; // Multiplica a base por ela mesma 'expoente' vezes
    }

    // Exibe o resultado
    std::cout << base << " elevado a " << expoente << " é igual a " << resultado << std::endl;
    return 0;
}
