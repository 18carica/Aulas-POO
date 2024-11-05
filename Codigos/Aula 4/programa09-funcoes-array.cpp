// ponteiroExemplo09.cpp
/*
Exemplo de um array de ponteiros para funções
*/

#include <iostream>

// Função cantar()
void cantar(int opcao){
    std::cout << "* Voce escolheu a opcao " << opcao << ". Vamos cantar!\n\n";
}

// Função dancar()
void dancar(int opcao){
    std::cout << "* Voce escolheu a opcao " << opcao << ". Vamos dancar!\n\n";
}

// Função enrolar()
void enrolar(int opcao){
    std::cout << "* Voce escolheu a opcao " << opcao << ". Vamos enrolar!\n\n";
}

// Função principal
int main(){
    std::cout << "\nArray de Ponteiros para Funcoes\n\n";

    // Declara e inicializa um array de 3 ponteiros para funções, que
    // aceitam um argumento inteiro e não retornam nenhum valor
    void (*funcoes[3])(int) = {
        cantar,
        dancar,
        enrolar
    };

    // Controla a opção do usuário
    int opcao;

    // REcebe a entrada do usuário
    std::cout << ">> Informe a opcao desejada (0, 1 ou 2): ";
    std::cin >> opcao;
    std::cout << std::endl;

    // Loop para processar a escolha do usuário
    while ((opcao >= 0) && (opcao < 3)){
        // Executa a função de acordo com a opção escolhida
        // passando o valor da opção como argumento
        (*funcoes[opcao])(opcao);

        // Recebe a entrada do usuário novamente
        std::cout << ">> Informe a opcao desejada (0, 1, 2 ou 3 para sair): ";
        std::cin >> opcao;
        std::cout << std::endl;
    }

    return 0;
}