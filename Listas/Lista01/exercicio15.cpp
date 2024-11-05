/* Programa 15 */
/*15. Escreva um programa que pergunte quanto você ganha por hora e o numero de horas trabalhadas no mês. Calcule e mostre o total do seu salario no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato. O valor do salario liquido e obtido após realizar os descontos do salario bruto. O programa deve apresentar o seguinte resultado, utilizando duas casas decimais.

=> Cálculo Salarial
+	Salário Bruto....:	R$	<valor do salário bruto>
-	IR (11%).........:	R$	<valor do imposto de renda>
-	INSS (8%)........:	R$	<valor do INSS>
-	Sindicato (5%)...:	R$	<valor do sindicato>
=	Salário Líquido..:	R$	<valor do salário líquido>*/
// exercicio15.cpp

//Função principal
#include <iostream>
#include <iomanip>  // Necessário para std::setprecision

int main() {
    double salarioPorHora, horasTrabalhadas, salarioBruto, ir, inss, sindicato, salarioLiquido;

    // Solicita a entrada do salário por hora e do número de horas trabalhadas no mês
    std::cout << "Digite quanto você ganha por hora: ";
    std::cin >> salarioPorHora;
    std::cout << "Digite o número de horas trabalhadas no mês: ";
    std::cin >> horasTrabalhadas;

    // Calcula o salário bruto
    salarioBruto = salarioPorHora * horasTrabalhadas;

    // Calcula os descontos
    ir = salarioBruto * 0.11;
    inss = salarioBruto * 0.08;
    sindicato = salarioBruto * 0.05;

    // Calcula o salário líquido
    salarioLiquido = salarioBruto - ir - inss - sindicato;

    // Apresenta o resultado em formato de tabela
    std::cout << "=> Cálculo Salarial" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << std::left << std::setw(25) << "Descrição" 
              << std::right << std::setw(15) << "Valor (R$)" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << std::left << std::setw(25) << "+ Salário Bruto:" 
              << std::right << std::setw(15) << std::fixed << std::setprecision(2) << salarioBruto << std::endl;
    std::cout << std::left << std::setw(25) << "- IR (11%):" 
              << std::right << std::setw(15) << std::fixed << std::setprecision(2) << ir << std::endl;
    std::cout << std::left << std::setw(25) << "- INSS (8%):" 
              << std::right << std::setw(15) << std::fixed << std::setprecision(2) << inss << std::endl;
    std::cout << std::left << std::setw(25) << "- Sindicato (5%):" 
              << std::right << std::setw(15) << std::fixed << std::setprecision(2) << sindicato << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << std::left << std::setw(25) << "= Salário Líquido:" 
              << std::right << std::setw(15) << std::fixed << std::setprecision(2) << salarioLiquido << std::endl;
    std::cout << "---------------------------------------------" << std::endl;

    return 0;
}
