#include <iostream>

int main() {
    int numero;

    // Solicita um n�mero inteiro n�o-negativo
    do {
        std::cout << "Digite um n�mero inteiro n�o-negativo: ";
        std::cin >> numero;
    } while (numero < 0);

    // Inicializa o fatorial e calcula
    long long fatorial = 1;  // Utiliza long long para maior precis�o
    for (int i = 2; i <= numero; ++i) {
        fatorial *= i;
    }

    // Exibe o resultado
    std::cout << numero << "! = " << fatorial << std::endl;

    return 0;
}
