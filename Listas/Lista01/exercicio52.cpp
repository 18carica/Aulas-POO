/* Programa 52 */
/* 52. Escreva um programa que mostre os N termos da série a seguir:
    

    Observe que os cinco primeiros termos correspondem à seguinte saída:
    

*/
// exercicio52.cpp

#include <iostream>

//Função principal
int main() {
    int n;
    double S = 0.0;

    std::cout << "Digite o valor de N: ";
    std::cin >> n;

    for (int i = 1, j = 1; i <= n; i++, j += 2) {
        S += static_cast<double>(i) / j;
        std::cout << i << "/" << j;
        if (i < n) std::cout << " + ";
    }

    std::cout << " = " << S << "\n";
    return 0;
}
