#include <iostream>

int main() {
    int numero;

    // Solicita um número inteiro não-negativo
    do {
        std::cout << "Digite um número inteiro não-negativo: ";
        std::cin >> numero;
    } while (numero < 0);

    // Inicializa o fatorial e calcula
    long long fatorial = 1;  // Utiliza long long para maior precisão
    for (int i = 2; i <= numero; ++i) {
        fatorial *= i;
    }

    // Exibe o resultado
    std::cout << numero << "! = " << fatorial << std::endl;

    return 0;
}
