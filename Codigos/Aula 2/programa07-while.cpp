//----------------------------------------------------------------------------------------------------
// Exemplo 07: while
//
// Programa que permite a leitura de um valor inteiro e apresente o resultado
// do c�lculo da tabuada at� 10 para esse valor.
//----------------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>

using namespace std;

//----------------------------------------------------------------------------------------------------
// Fun��o principal
//----------------------------------------------------------------------------------------------------
int main() {

    // Declara��o das variaveis
    int contador {0}, valor , resultado;

    // Entrada dos dados
    cout << "\n";
    cout << "La�o de repeti��o com contid��o inicial\n\n";
    cout << "* Informe o valor desejado: "; cin >> valor;
    cout << "\n=> Tabuada do " << valor << "\n\n";

    // La�o para realizar o c�lculo da tabuada
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
