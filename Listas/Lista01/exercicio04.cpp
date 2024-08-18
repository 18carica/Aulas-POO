/* Programa 04 */
/*4. Escreva um programa que peça para o usuário informar quanto ele ganha por hora, o nome do mês e o número de horas que ele trabalhou nesse mês. Em seguida, o programa deve calcular e exibir o salário que ele deve receber no final mês. Para apresentar o resultado, considere a utilização de duas casas decimais.*/
// exercicio04.cpp

#include <iostream>
#include <iomanip>  // Necessário para std::setprecision

//Função principal
int main() {
    double valorHora, salario;
    int horasTrabalhadas;
    std::string mes;

    // Solicita a entrada do valor por hora, nome do mês e número de horas trabalhadas
    std::cout << "Informe quanto você ganha por hora: ";
    std::cin >> valorHora;
    std::cout << "Informe o nome do mês: ";
    std::cin >> mes;
    std::cout << "Informe o número de horas trabalhadas no mês de " << mes << ": ";
    std::cin >> horasTrabalhadas;

    // Calcula o salário
    salario = valorHora * horasTrabalhadas;

    // Apresenta o salário com duas casas decimais
    std::cout << "O salário referente ao mês de " << mes << " é: R$ " 
              << std::fixed << std::setprecision(2) << salario << std::endl;

    return 0;
}
