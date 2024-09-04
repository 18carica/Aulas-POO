/* Programa 54 */
/* 54. Escreva um programa que solicite a entrada do usuário e valide as seguintes informações:

    1. Nome: deve possuir mais de 3 caracteres;
    2. Idade: deve estar entre 18 e 70 anos;
    3. Salário: deve ser maior que zero;
    4. Sexo: deve possuir somente os valores F ou M;
    5. Estado civil: deve possuir somente os valores S, C, V ou D.
*/
// exercicio54.cpp

#include <iostream>
#include <string>

//Função principal
int main() {
    std::string nome;
    int idade;
    double salario;
    char sexo, estadoCivil;

    do {
        std::cout << "Digite seu nome (mais de 3 caracteres): ";
        std::getline(std::cin, nome);
    } while (nome.length() <= 3);

    do {
        std::cout << "Digite sua idade (entre 18 e 70 anos): ";
        std::cin >> idade;
    } while (idade < 18 || idade > 70);

    do {
        std::cout << "Digite seu salário (maior que zero): ";
        std::cin >> salario;
    } while (salario <= 0.0);

    do {
        std::cout << "Digite seu sexo (F ou M): ";
        std::cin >> sexo;
    } while (sexo != 'F' && sexo != 'M');

    do {
        std::cout << "Digite seu estado civil (S, C, V ou D): ";
        std::cin >> estadoCivil;
    } while (estadoCivil != 'S' && estadoCivil != 'C' && estadoCivil != 'V' && estadoCivil != 'D');

    std::cout << "\nCadastro válido.\n";
    return 0;
}
