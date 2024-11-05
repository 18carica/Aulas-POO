/* Programa 22 */
/*22. Escreva um programa que receba a entrada de duas notas parciais obtidas por um aluno em uma disciplina ao longo de um semestre e calcule a sua media. O programa deve exibir na tela as notas, a media, o conceito correspondente e a mensagem “Aprovado” se o conceito for A, B, C ou “REPROVADO” se o conceito for D ou E. A atribuição de conceitos obedece aos dados apresentados abaixo:

Média de Aproveitamento Conceito
Entre	9.0 e 10.0	A
Entre	7.5 e 9.0	B
Entre	6.0 e 7.5	C
Entre	4.0 e 6.0	D
Entre	4.0 e zero	E*/
// exercicio22.cpp

//Função principal
#include <iostream>
#include <iomanip>  // Necessário para std::setprecision

int main() {
    double nota1, nota2, media;
    char conceito;

    // Solicita a entrada das duas notas parciais
    std::cout << "Digite a primeira nota: ";
    std::cin >> nota1;
    std::cout << "Digite a segunda nota: ";
    std::cin >> nota2;

    // Calcula a média das notas
    media = (nota1 + nota2) / 2.0;

    // Determina o conceito com base na média
    if (media >= 9.0 && media <= 10.0) {
        conceito = 'A';
    } else if (media >= 7.5 && media < 9.0) {
        conceito = 'B';
    } else if (media >= 6.0 && media < 7.5) {
        conceito = 'C';
    } else if (media >= 4.0 && media < 6.0) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }

    // Exibe as notas, a média, o conceito e a mensagem de aprovação ou reprovação
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Nota 1: " << nota1 << std::endl;
    std::cout << "Nota 2: " << nota2 << std::endl;
    std::cout << "Média: " << media << std::endl;
    std::cout << "Conceito: " << conceito << std::endl;

    if (conceito == 'A' || conceito == 'B' || conceito == 'C') {
        std::cout << "Aprovado!" << std::endl;
    } else {
        std::cout << "Reprovado!" << std::endl;
    }

    return 0;
}
