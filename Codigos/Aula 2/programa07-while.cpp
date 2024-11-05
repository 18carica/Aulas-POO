//----------------------------------------------------------------------------------------------------
// Exemplo 07: while
//
// Programa que permite a leitura de um valor inteiro e apresente o resultado
// do cálculo da tabuada até 10 para esse valor.
//----------------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>

using namespace std;

//----------------------------------------------------------------------------------------------------
// Função principal
//----------------------------------------------------------------------------------------------------
int main() {

    // Declaração das variaveis
    int contador {0}, valor , resultado;

    // Entrada dos dados
    cout << "\n";
    cout << "Laço de repetição com contidção inicial\n\n";
    cout << "* Informe o valor desejado: "; cin >> valor;
    cout << "\n=> Tabuada do " << valor << "\n\n";

    // Laço para realizar o cálculo da tabuada
    while (contador <= 10) {

        // Calcula o resultado
        resultado = valor * contador;

        // Exibe a linha da tabuada
        cout << setw(2) << valor;
        cout << " X ";
        cout << setw(2) << contador;
        cout << " + ";
        cout << setw(2) << resultado << "\n";

        // Incrementa o contador
        contador++;

    }

    cout << "\n";

    // Fim do programa
    return 0;

}
