/* Programa 14 */
/*14. João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário de seu trabalho. Toda vez que ele traz um peso de peixe maior que o estabelecido pelo regulamento de pesca do estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente. João precisa que você faça um programa que leia a variável peso (peso dos peixes) e calcule o excesso. Gravar na variável excesso a quantidade de quilos além do limite e na variável multa o valor da multa que João devera pagar. Imprima os dados do programa com as mensagens adequadas.*/
// exercicio14.cpp

//Função principal
#include <iostream>
#include <iomanip>  // Necessário para std::setprecision

int main() {
    double peso, excesso = 0, multa = 0;
    const double LIMITE = 50.0;
    const double MULTA_POR_KILO = 4.0;

    // Solicita a entrada do peso dos peixes
    std::cout << "Digite o peso dos peixes (em quilos): ";
    std::cin >> peso;

    // Calcula o excesso e a multa
    if (peso > LIMITE) {
        excesso = peso - LIMITE;
        multa = excesso * MULTA_POR_KILO;
    }

    // Apresenta o excesso e a multa
    std::cout << "Excesso de peso: " << excesso << " kg" << std::endl;
    std::cout << "Multa a ser paga: R$ " << std::fixed << std::setprecision(2) << multa << std::endl;

    return 0;
}
