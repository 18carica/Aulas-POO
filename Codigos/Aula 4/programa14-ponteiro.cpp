// exemplo14ponteiro.cpp
/*
Exemplo de uso de alocação dinâmica de memória
*/

#include <iostream>

int main(){
    std::cout << "\nExemplo de Alocação Dinâmica de Memória\n\n";

    // Aloca espaço para um array de 5 inteiros
    int *numeros = new int[5];

    // Inicializa os valores do array
    for (int i = 0; i < 5; i++)
        numeros[i] = i * 2;
    
    // Exibe os valores do array
    std::cout << "* Números: [";
    
    for (int i = 0; i < 5; i++){
        if (i < 4)
            std::cout << numeros[i] << ", ";
        else
            std::cout << numeros[i] << "]\n\n";
    }

    // Libera a memória que foi alocada
    delete[] numeros;

    return 0;
}