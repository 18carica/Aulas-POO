/* Programa 21 */
/*21. Escreva um programa que pergunte em que turno o usuário estuda. Peça para digitar M para Matutino, V para Vespertino ou N para Noturno. Em seguida, imprima a mensagem “Bom dia!”, “Boa tarde!”, “Boa noite!” ou “Valor Inválido!”, de acordo com a entrada do usuário.*/
// exercicio21.cpp

//Função principal
#include <iostream>

int main() {
    char turno;

    // Solicita ao usuário que digite o turno de estudo
    std::cout << "Em que turno você estuda? Digite M para Matutino, V para Vespertino ou N para Noturno: ";
    std::cin >> turno;

    // Verifica o turno e exibe a mensagem correspondente
    if (turno == 'M' || turno == 'm') {
        std::cout << "Bom dia!" << std::endl;
    } else if (turno == 'V' || turno == 'v') {
        std::cout << "Boa tarde!" << std::endl;
    } else if (turno == 'N' || turno == 'n') {
        std::cout << "Boa noite!" << std::endl;
    } else {
        std::cout << "Valor Inválido!" << std::endl;
    }

    return 0;
}
