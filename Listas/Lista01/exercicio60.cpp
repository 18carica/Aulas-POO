/* Programa 60 */
/*60. Escreva um programa que solicite para o usuário informar um número inteiro. Esse número indica a quantidade de pessoas que devem informar a sua idade. Em seguida, o programa deve pedir a leitura da idade de cada pessoa. O programa deve verificar se a média de idade da turma varia entre 0 e 25 (jovens), 26 e 60 (adultos) ou maior do que 60 anos (idosos). Apresentar uma mensagem informando se a turma é jovem, adulta ou idosa, conforme o valor obtido para a sua média de idade.*/
// exercicio60.cpp

#include <iostream>

//Função principal
int main() {
    int quantidade, idade;
    double somaIdade = 0;

    // Solicita ao usuário a quantidade de pessoas
    std::cout << "Informe a quantidade de pessoas: ";
    std::cin >> quantidade;

    // Loop para ler a idade de cada pessoa
    for (int i = 0; i < quantidade; i++) {
        std::cout << "Informe a idade da pessoa " << i + 1 << ": ";
        std::cin >> idade;
        somaIdade += idade;
    }

    // Calcula a média de idade
    double mediaIdade = somaIdade / quantidade;

    // Verifica a faixa etária da turma e exibe a mensagem correspondente
    if (mediaIdade >= 0 && mediaIdade <= 25) {
        std::cout << "A turma é jovem." << std::endl;
    } else if (mediaIdade >= 26 && mediaIdade <= 60) {
        std::cout << "A turma é adulta." << std::endl;
    } else if (mediaIdade > 60) {
        std::cout << "A turma é idosa." << std::endl;
    } else {
        std::cout << "Dados inválidos." << std::endl;
    }

    return 0;
}
