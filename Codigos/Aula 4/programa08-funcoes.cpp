// ponteiroExemplo08.cpp
/*
Ponteiro para funções
*/

#include <iostream>

// Função soma()
int soma(int a, int b){
    return a + b;
}

// Função subtrai()
int subtrai(int a, int b){
    return a - b;
}

// Função principal 
int main(){
    std::cout << "\nPonteiros para Funcoes\n\n";

    // Declara um ponteiro para função
    int (*operacao)(int, int);

    // Atribui a função soma() ao ponteiro
    operacao = soma;

    // Chamando a função soma() através do ponteiro
    std::cout << "Soma: " << operacao(10, 5) << std::endl;

    // Atribuindo a função subtrai() ao ponteiro
    operacao = subtrai;

    // Chamando a função subtrai() através do ponteiro
    std::cout << "Subtracao: " << operacao(10, 5) << std::endl;

    std::cout << std::endl;

    return 0;
}