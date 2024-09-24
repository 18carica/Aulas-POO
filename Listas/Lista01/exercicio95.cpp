/* Programa 95 */
/*95. Escreva um programa que utilize uma função para exibir o seguinte padrão:
        1
      2 3
    3 4 5 
  4 5 6 7
5 6 7 8 9 */
// exercicio95.cpp

//Função principal
#include <iostream>
using namespace std;

// Função que exibe o padrão
void exibirPadrao(int linhas) {
    for (int i = 1; i <= linhas; i++) {
        // Exibe os espaços iniciais
        for (int espaco = 1; espaco <= (linhas - i); espaco++) {
            cout << "  ";  // Dois espaços para alinhar
        }
        // Exibe os números
        int num = i;
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;  // Nova linha após cada linha de números
    }
}

int main() {
    int linhas = 5;  // Número de linhas que queremos exibir
    exibirPadrao(linhas);  // Chama a função para exibir o padrão

    return 0;
}