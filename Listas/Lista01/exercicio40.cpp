/* Programa 40 */
/*40. O índice de massa corpórea, ou IMC, indica o grau de obesidade de uma pessoa. Este índice e obtido pelo peso (em kg) dividido pelo quadrado da altura (em metros). A tabela a seguir apresenta as faixas destes índices:
IMC         valiação
< 20        Abaixo do normal
[20, 25[    Normal
[25, 30[    Sobrepeso
[30, 35[    Obesidade leve
[35, 40[    Obesidade moderada
>= 40       Obesidade Mórbida
Escreva um programa que solicite o peso e a altura do usuário. Em seguida, o programa deve calcular o valor do seu IMC e apresentar o resultado da avaliação, informando a situação da avaliação do usuário. */
// exercicio40.cpp

//Função principal
#include <iostream>
#include <iomanip> // para setprecision

int main() {
    double peso, altura, imc;

    std::cout << "Digite seu peso (em kg): ";
    std::cin >> peso;
    std::cout << "Digite sua altura (em metros): ";
    std::cin >> altura;

    imc = peso / (altura * altura);

    std::cout << "Seu IMC é: " << std::fixed << std::setprecision(2) << imc << std::endl;

    if (imc < 20) {
        std::cout << "Abaixo do normal." << std::endl;
    } else if (imc >= 20 && imc < 25) {
        std::cout << "Normal." << std::endl;
    } else if (imc >= 25 && imc < 30) {
        std::cout << "Sobrepeso." << std::endl;
    } else if (imc >= 30 && imc < 35) {
        std::cout << "Obesidade leve." << std::endl;
    } else if (imc >= 35 && imc < 40) {
        std::cout << "Obesidade moderada." << std::endl;
    } else {
        std::cout << "Obesidade mórbida." << std::endl;
    }

    return 0;
}
