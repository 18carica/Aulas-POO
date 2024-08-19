/* Programa 28 */
/*28. Escreva um programa que leia um número e exiba o dia correspondente da semana: 1 – Domingo, 2 – Segunda, 3 – Terça, etc. O programa também deve exibir uma mensagem caso o usuário forneça um valor invalido.*/
// exercicio28.cpp

//Função principal
#include <iostream>

int main() {
    int dia;

    // Solicita a entrada de um número correspondente ao dia da semana
    std::cout << "Digite um número de 1 a 7 correspondente ao dia da semana: ";
    std::cin >> dia;

    // Exibe o dia correspondente ou uma mensagem de erro se o número for inválido
    switch (dia) {
        case 1:
            std::cout << "Domingo" << std::endl;
            break;
        case 2:
            std::cout << "Segunda-feira" << std::endl;
            break;
        case 3:
            std::cout << "Terça-feira" << std::endl;
            break;
        case 4:
            std::cout << "Quarta-feira" << std::endl;
            break;
        case 5:
            std::cout << "Quinta-feira" << std::endl;
            break;
        case 6:
            std::cout << "Sexta-feira" << std::endl;
            break;
        case 7:
            std::cout << "Sábado" << std::endl;
            break;
        default:
            std::cout << "Valor inválido!" << std::endl;
            break;
    }

    return 0;
}
