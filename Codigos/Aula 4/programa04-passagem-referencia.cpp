//----------------------------------------------------------------------------------------------------------------------
// Exemplo 04: exemplo de passagem por referência com argumento ponteiro
//----------------------------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

//----------------------------------------------------------------------------------------------------------------------
// Protótipos das funções
//----------------------------------------------------------------------------------------------------------------------

void elevaCubo(int *nPtr);

//----------------------------------------------------------------------------------------------------------------------
// Função principal
//----------------------------------------------------------------------------------------------------------------------
int main() {

    cout << "\n";
    cout << "Exemplo da Passagem por Referência com Ponteiro\n\n";

    // Declara e inicializa a variável
    int numero = 5;

    // Exibe seu valor original
    cout << "* Valor original: " << numero << "\n";

    // Chama a função que eleva ao cubo, passando o argumento por referência
    elevaCubo(&numero);

    // Exibe seu valor modificado
    cout << "* Valor modificado: " << numero << "\n\n";

    // Fim do programa
    return 0;

}

//----------------------------------------------------------------------------------------------------------------------
// Definição das funções
//----------------------------------------------------------------------------------------------------------------------

// Calcula e retorna o cubo de um argumento inteiro, modificando o valor original
void elevaCubo(int *nPtr) {

    *nPtr = *nPtr * *nPtr * *nPtr;

}
