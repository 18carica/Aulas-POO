/* Programa 27 */
/*27. Com o objetivo de dar um aumento salarial para seus colaboradores, a empresa MicoSoft contratou você para desenvolver um programa para calcular o valor do reajuste que deve ser aplicado. Escreva um programa que receba o salário de um colaborador e o reajuste, segundo os seguintes critérios:
1. Salário até R$ 2.000,00 (incluindo): aumento de 20%;
2. Salário acima de R$ 2.000,00 e menores que R$ 4.000,00: aumento de 15%;
3. Salário acima de R$ 4.000,00 e menores que R$ 8.000,00: aumento de 10%;
4. Salário acima de R$ 8.000,00: aumento de 05%;

Após os cálculos, o programa deve apresentar o resultado, composto pelos seguintes itens:
a. Salário antes do reajuste;
b. Percentual de aumento que foi aplicado;
c. Valor do aumento;
d. Novo Salário, após o aumento.
Para apresentar o resultado, considere a utilização de duas casas decimais.*/
// exercicio27.cpp

//Função principal
#include <iostream>
#include <iomanip>

int main() {
    float salario, novoSalario, aumento;
    float percentual;

    // Solicita o salário do colaborador
    std::cout << "Digite o salário do colaborador: R$ ";
    std::cin >> salario;

    // Determina o percentual de aumento com base no salário
    if (salario <= 2000) {
        percentual = 20.0;
    } else if (salario > 2000 && salario < 4000) {
        percentual = 15.0;
    } else if (salario >= 4000 && salario < 8000) {
        percentual = 10.0;
    } else {
        percentual = 5.0;
    }

    // Calcula o aumento e o novo salário
    aumento = salario * (percentual / 100);
    novoSalario = salario + aumento;

    // Exibe os resultados com duas casas decimais
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Salário antes do reajuste: R$ " << salario << std::endl;
    std::cout << "Percentual de aumento aplicado: " << percentual << "%" << std::endl;
    std::cout << "Valor do aumento: R$ " << aumento << std::endl;
    std::cout << "Novo salário, após o aumento: R$ " << novoSalario << std::endl;

    return 0;
}
