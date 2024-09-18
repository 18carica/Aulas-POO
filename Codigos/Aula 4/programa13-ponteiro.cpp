// exemplo13ponteiro.cpp
/*
Exemplo de uso de ponteiros para ponteiros
*/

#include <iostream>

// Função que altera um ponteiro
void alteraPonteiro(int **pp){
    static int y = 100;

    // Faz o ponteiro original apontar para y
    *pp = &y;
}

// Função Principal
int main(){
    std::cout << "\nExemplo de Ponteiros para Ponteiros\n\n";

    // Declara uma variável inteira
    int x = 10;

    // Declara um ponteiro e aponta para o endereço da variável inteira
    int *p = &x;

    // Exibe o valor apontado pelo ponteiro antes da alteração
    std::cout << "Valor antes: " << * p << std::endl;

    // Executa a função para alterar o ponteiro
    alteraPonteiro(&p);

    // Exibe o valor apontado pelo ponteiro após a alteração
    std::cout << "Valor após: " << *p << "\n\n";

    return 0;
}