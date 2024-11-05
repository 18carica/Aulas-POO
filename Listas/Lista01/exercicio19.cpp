/* Programa 19 */
/*19. Escreva um programa que peça a entrada de uma letra e verifique se ela e vogal ou consoante.*/
// exercicio19.cpp

//Função principal
#include <iostream>

int main() {
    char letra;

    // Solicita a entrada de uma letra
    std::cout << "Digite uma letra: ";
    std::cin >> letra;

    // Converte a letra para minúscula para facilitar a verificação
    letra = std::tolower(letra);

    // Verifica se a letra é uma vogal ou consoante
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        std::cout << "A letra é uma vogal." << std::endl;
    } else if ((letra >= 'a' && letra <= 'z')) {
        std::cout << "A letra é uma consoante." << std::endl;
    } else {
        std::cout << "Caractere inválido." << std::endl;
    }

    return 0;
}
