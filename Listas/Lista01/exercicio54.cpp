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

// Função principal do programa
int main() {
    std::string nome;    // Variável para armazenar o nome do usuário
    int idade;           // Variável para armazenar a idade do usuário
    double salario;      // Variável para armazenar o salário do usuário
    char sexo, estadoCivil;  // Variáveis para armazenar o sexo e estado civil do usuário

    // Loop para solicitar o nome, repetindo até que tenha mais de 3 caracteres
    do {
        std::cout << "Digite seu nome (mais de 3 caracteres): ";
        std::getline(std::cin, nome);  // Lê o nome completo do usuário
    } while (nome.length() <= 3);  // Verifica se o nome tem mais de 3 caracteres

    // Loop para solicitar a idade, repetindo até que esteja entre 18 e 70 anos
    do {
        std::cout << "Digite sua idade (entre 18 e 70 anos): ";
        std::cin >> idade;  // Lê a idade do usuário
    } while (idade < 18 || idade > 70);  // Verifica se a idade está no intervalo permitido

    // Loop para solicitar o salário, repetindo até que seja maior que zero
    do {
        std::cout << "Digite seu salário (maior que zero): ";
        std::cin >> salario;  // Lê o salário do usuário
    } while (salario <= 0.0);  // Verifica se o salário é maior que zero

    // Loop para solicitar o sexo, repetindo até que seja 'F' ou 'M'
    do {
        std::cout << "Digite seu sexo (F ou M): ";
        std::cin >> sexo;  // Lê o sexo do usuário
    } while (sexo != 'F' && sexo != 'M');  // Verifica se o sexo é válido

    // Loop para solicitar o estado civil, repetindo até que seja 'S', 'C', 'V' ou 'D'
    do {
        std::cout << "Digite seu estado civil (S, C, V ou D): ";
        std::cin >> estadoCivil;  // Lê o estado civil do usuário
    } while (estadoCivil != 'S' && estadoCivil != 'C' && estadoCivil != 'V' && estadoCivil != 'D');  // Verifica se o estado civil é válido

    // Mensagem final confirmando o cadastro válido
    std::cout << "\nCadastro válido.\n";
    
    return 0;  // Finaliza o programa
}
