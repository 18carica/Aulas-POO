/* Programa 49 */
/*49. Escreva um programa que leia dez conjuntos de dois valores, o primeiro representando o número do aluno e o segundo representando a sua altura em centímetros. Encontre o aluno mais alto e o aluno mais baixo. O programa deve exibir o número do aluno mais alto e o número do aluno mais baixo, juntamente com suas alturas.*/
// exercicio49.cpp

#include <iostream>

//Função principal
int main() {
    int numero, numeroAlto = 0, numeroBaixo = 0;
    double altura, alturaAlto = 0, alturaBaixo = 10000;

    // Loop para coletar informações de dois alunos
    for (int i = 0; i < 10; i++) {
        std::cout << "Digite o número do aluno: ";
        std::cin >> numero;
        std::cout << "Digite a altura do aluno (em cm): ";
        std::cin >> altura;

        // Verifica o aluno mais alto
        if (altura > alturaAlto) {
            alturaAlto = altura;
            numeroAlto = numero;
        }

        // Verifica o aluno mais baixo
        if (altura < alturaBaixo) {
            alturaBaixo = altura;
            numeroBaixo = numero;
        }
    }

    // Exibe as informações do aluno mais alto e mais baixo
    std::cout << "Aluno mais alto: Número " << numeroAlto << ", Altura: " << alturaAlto << " cm" << std::endl;
    std::cout << "Aluno mais baixo: Número " << numeroBaixo << ", Altura: " << alturaBaixo << " cm" << std::endl;

    return 0;
}
