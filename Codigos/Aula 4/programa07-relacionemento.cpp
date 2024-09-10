//----------------------------------------------------------------------------------------------------------------------
// Exemplo 07: Relacionamento entre array e ponteiros
//----------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

//----------------------------------------------------------------------------------------------------------------------
// Protótipos das funções
//----------------------------------------------------------------------------------------------------------------------

void imprime1(int numeros[], size_t tamanho, string nome);
void imprime2(int *numeros, size_t tamanho, string nome);

//----------------------------------------------------------------------------------------------------------------------
// Funções principal
//----------------------------------------------------------------------------------------------------------------------
int main() {

    cout << "\n";
    cout << "Relacionamento entre Arrays e Ponteiros\n\n";

    // Declaração e iniciallização de três arrays
    int numeros1[] = {1, 2, 3, 4, 5};
    int numeros2[] = {6, 7, 8, 9, 10};
    int numeros3[] = {11, 12, 13, 14, 15};

    // Obtém o total de elementos de cada array    
    size_t tamanho1 = sizeof(numeros1) / sizeof(numeros1[0]);
    size_t tamanho2 = sizeof(numeros2) / sizeof(numeros2[0]);
    size_t tamanho3 = sizeof(numeros3) / sizeof(numeros3[0]);

    //----------------------------------------------------------------------------------------------------------------------

    // Executa a função que exibe o conteúdo do primeiro array
    // utilizando a notação de subscrito de array
    imprime1(numeros1, tamanho1, "<numeros1>");

    //----------------------------------------------------------------------------------------------------------------------

    // Executa a função que exibe o conteúdo do primeiro array,
    // utilizando aritmética de ponteiros
    imprime2(numeros2, tamanho2, "<numeros2>");

    //----------------------------------------------------------------------------------------------------------------------

    // Declara um ponteiro para o terceiro array
    int *ptr3 = numeros3;

    // Exibe o conteúdo do terceiro array, utilizando <ptr3> e
    // a notação de subscrito de array

    cout << "3. <*ptr3>...: [";

    for (int i = 0; i < tamanho3; i++) {
        if ( i < tamanho3 - 1)
            cout << ptr3[1] << ", ";
        else
            cout << ptr3[i] << "]" << endl;
    }

    //----------------------------------------------------------------------------------------------------------------------

    cout << "\n";

    // Fim do programa
    return 0;

}

//----------------------------------------------------------------------------------------------------------------------
// Definição das funções
//----------------------------------------------------------------------------------------------------------------------

// Função que imprime o conteúdo do array (versão array)
void imprime1(int numeros[], size_t tamanho, string nome) {

    cout << "1. " << nome << ": [";

    for (int i = 0; i < tamanho; i++) {
        if (i < tamanho - 1)
            cout << numeros[i] << ", ";
        else
            cout << numeros[i] << "]" << endl;
    }

}

//----------------------------------------------------------------------------------------------------------------------

// Função que imprime o conteúdo do array (versão array)
void imprime2(int *numeros, size_t tamanho, string nome) {

    cout << "2. " << nome << ": [";

    for (int i = 0; i < tamanho; i++) {
        if (i < tamanho - 1)
            cout << *(numeros + 1) << ", ";
        else
            cout << *(numeros + 1) << "]" << endl;
    }

}

