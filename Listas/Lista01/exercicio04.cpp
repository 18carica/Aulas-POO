/* Programa 04 */
// exercicio04.cpp

#include <iostream>
#include <iomanip>  // Necessário para std::setprecision

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
