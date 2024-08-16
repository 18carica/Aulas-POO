//--
// Exemplo 06 : switch
//
// Programa que recebe um número equivalente a um determinado mês e informa a
// quantidade de dias que ele possui.O programa deve exibir uma mensagem para
// os valores que não correspondem a um mês válido.
//--

#include <iostream>

using namespace std;

//--
//Função principal
//--
int main(){

    // Declaração das variáveis
    int mes;

    // Entrada dos dados
    cout << "\n";
    cout << "Estrutura de controle com múltipla escolha\n\n";
    cout << "* Informe o número equivalente ao mês desejado: "; cin >> mes;

    // Verifica a quantidade de dias do mês
    switch (mes){

        //  Meses com 31 dias
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "\n=> O mês " << mes << " possui 31 dias.";
            break;
        // Meses com 30 dias
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "\n=> O mês " << mes << " possui 30 dias.";
            break;
        // Mês com 28 dias
        case 2:
            cout << "\n=> O mês " << mes << " Possui 28 dias.";
            break;
        // Valores que não correspondem a um mês
        default:
            cout << "\n=> O mês " << mes << " não existe!";

    }

    cout << "\n\n";

    // Fim do Programa
    return 0;

}
