//----------------------------------------------------------------------------------------------------------------------
// Exemplo 06: Exemplo de aritmética de ponteiros
//----------------------------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

//----------------------------------------------------------------------------------------------------------------------
// Funções principal
//----------------------------------------------------------------------------------------------------------------------
int main() {

    cout << "\n";
    cout << "Exemplo de Aritmética de Ponteiros\n\n";

    // Declaração e inicialização de um array  de inteiros
    int numeros[] = {2, 5, 10, 1, 3, 21};

    // Declara o ponteiro e aponta para o primeiro elemento do array
    int *ptr = numeros;

    cout << "1. Valor apontado por <ptr>: " << *ptr << endl;

    //----------------------------------------------------------------------------------------------------------------------

    // Incrementa uma posição
    ptr++;

    cout << "2. Valor apontado por <ptr>: " << *ptr << endl;

    //----------------------------------------------------------------------------------------------------------------------

    // Adição de inteiro
    ptr = ptr + 3;

    cout << "3. Valor apontado por <ptr>: " << *ptr << endl;

    //----------------------------------------------------------------------------------------------------------------------

    // Decrementa uma posição
    ptr--;

    cout << "4. Valor apontado por <ptr>: " << *ptr << endl;

    //----------------------------------------------------------------------------------------------------------------------

    // Declara o ponteiro e aponta para o primeiro elemento do array
    int *ptr1 = &numeros[0];

    // Declara o ponteiro e aponta para o quinto elemento do array
    int *ptr2 = &numeros[4];

    cout << "5. Valor apontado por <ptr>: " << *ptr1 << endl;
    cout << "5. Valor apontado por <ptr>: " << *ptr2 << endl;

    // Calcula o total de elementos entre is ponteiros
    int total = ptr2 - ptr1;

    cout << "7. Total de elemtentos entre <ptr1> e <ptr2>: " << total << endl;

    //----------------------------------------------------------------------------------------------------------------------

    // Verifica a posição do elementos apontado elos ponteiros
    if (ptr1 > ptr2) {
        cout << "8. <ptr1> aponta para um elemento mais à frente no array." << endl;
    }
    else {
        cout << "8. <ptr2> aponta para um elemento mais à frente no array." << endl;
    }

    //----------------------------------------------------------------------------------------------------------------------

    // Declara o ponteiro e aponta para o elemento do array
    int *ptr3 = numeros;

    // Acessa o segundo elemento
    int segundoElemento = *(ptr3 + 1);

    cout << "9. Segundo elemento do array: " << segundoElemento << endl;

    cout << "\n";

    //Fim do programa
    return 0;

}
