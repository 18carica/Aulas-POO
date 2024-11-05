//----------------------------------------------------------------------------------------------------
// Exemplo 10: c�lculo de fatorial utilizando FOR
//
// Progama que calcula o fatorial de um valor fornecido pelo usu�rio.
//----------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

//----------------------------------------------------------------------------------------------------
// Fun��o principal
//----------------------------------------------------------------------------------------------------
int main() {

    // Declara��o das vari�veis
    int i, valor;
    long int fatorial = 1;

    // Entrada dos dados
    cout << "\n";
    cout << "C�lculo do fatorial utilizando o la�o WHILE\n\n";
    cout << "* Informe o valor desejado: "; cin >> valor;

    // La�o para calcular o fatorial
    for (i = 1; i <= valor; i++) {
        // Calcula o fatorial
        fatorial *= i;
    }

    // Exibe o resultato
    cout << "\n=>Fatorial de " << valor << ": " << fatorial << "\n\n";

    // Fim do programa
    return 0;

}
