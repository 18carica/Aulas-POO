//----------------------------------------------------------------------------------------------------
// Exemplo 09: c�lculo de MDC utilizando o DO WHILE
//
// Comnsidere o seguinte cen�rio: "Em um jogo para duas ou mais pessoas, existem
// X pe�as quadradas e Y pe�as triangulares. Sabendo que, para jogar esse jogo,
// as pe�as precisam ser igualmente distribu�das e n�o pode sobrar nenhuma
// delas, qual � o m�ximo de participantes poss�veis no jogo?
// Escreva um programa para resolver este problema.
//----------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

//----------------------------------------------------------------------------------------------------
// Fun��o principal
//----------------------------------------------------------------------------------------------------
int main() {

    // Declara��o das vari�veis
    int quadradas, triangulares, a, b, r;

    // Entrada dos dados
    cout << "\n";
    cout << "C�lculo do n�mero m�ximo de patricipantes de um jogo\n\n";
    cout << "* Informe o total de pe�as quadradas: "; cin >> quadradas;
    cout << "* Informe o total de pe�as triangulares: "; cin >> triangulares;

    // Calcula o MDC utilizando o algoritmo de Euclides
    a = quadradas;
    b = triangulares;

    do {

        r = a % b;
        a = b;
        b = r;

    } while (b !=0);

    // Exibe o resultato
    cout << "\n=> Considerando " << quadradas << " pe�as quadradas e ";
    cout << triangulares << " pe�as triangulares, devemos ter no m�ximo ";
    cout << a << " participantes.\n\n";

    // Fim do programa
    return 0;

}
