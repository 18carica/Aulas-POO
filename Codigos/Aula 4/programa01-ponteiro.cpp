//----------------------------------------------------------------------------------------------------------------------
// Exemplo 01: Programa que demonstra como declarar uma variável ponteiro
//----------------------------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

//----------------------------------------------------------------------------------------------------------------------
// Função principal
//----------------------------------------------------------------------------------------------------------------------
int main() {

    cout << "\n";
    cout << "Declaração de Variável Ponteiro\n\n";
    
    // Declara e inicializa uma variável inteira
    int idade = 25;

    // Declara um ponteiro que aponta para a variável <idade>
    int *idadePtr = &idade;

    // Exibe os valores
    cout << "1. Valor da variável <idade>: " << idade << "\n";
    cout << "1. Endereço da variável <idade>: " << &idade << "\n\n";
    cout << "2. Valor da variável <idadePtr>: " << idadePtr << "\n";
    cout << "2. Valor apontado pela variável <*idadePtr>: " << *idadePtr << "\n\n";

    // Fim do programa
    return 0;
    
}
