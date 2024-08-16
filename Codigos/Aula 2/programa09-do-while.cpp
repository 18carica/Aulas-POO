//----------------------------------------------------------------------------------------------------
// Exemplo 09: cálculo de MDC utilizando o DO WHILE
//
// Comnsidere o seguinte cenário: "Em um jogo para duas ou mais pessoas, existem
// X peças quadradas e Y peças triangulares. Sabendo que, para jogar esse jogo,
// as peças precisam ser igualmente distribuídas e não pode sobrar nenhuma
// delas, qual é o máximo de participantes possíveis no jogo?
// Escreva um programa para resolver este problema.
//----------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

//----------------------------------------------------------------------------------------------------
// Função principal
//----------------------------------------------------------------------------------------------------
int main() {

    // Declaração das variáveis
    int quadradas, triangulares, a, b, r;

    // Entrada dos dados
    cout << "\n";
    cout << "Cálculo do número máximo de patricipantes de um jogo\n\n";
    cout << "* Informe o total de peças quadradas: "; cin >> quadradas;
    cout << "* Informe o total de peças triangulares: "; cin >> triangulares;

    // Calcula o MDC utilizando o algoritmo de Euclides
    a = quadradas;
    b = triangulares;

    do {

        r = a % b;
        a = b;
        b = r;

    } while (b !=0);

    // Exibe o resultato
    cout << "\n=> Considerando " << quadradas << " peças quadradas e ";
    cout << triangulares << " peças triangulares, devemos ter no máximo ";
    cout << a << " participantes.\n\n";

    // Fim do programa
    return 0;

}
