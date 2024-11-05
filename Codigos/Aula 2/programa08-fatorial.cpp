//----------------------------------------------------------------------------------------------------
// Exemplo 08: c�lculo de fatorial utilizando o WHILE
//
// Programa que calcula o factorial de um valor fornecido pelo usu�rio
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

    // Entrada de dados
    cout << "\n";
    cout << "C�lculo do fatorial utilizando o la�o WHILE\n\n";
    cout << "* Informe o valor desejado: "; cin >> valor;

    // Inicializa o contador
    i = 1;

    // La�o para calcular o fatorial
    while (i <= valor) {

        // Calcule o fatorial
        fatorial *=i;

        // Incrementa o contador
        i++;

    }

     // Exibe o resultado
     cout << "\n=>Fatorial de " << valor << ": " << fatorial << "\n\n";

     //Fim do programa
     return 0;

}
