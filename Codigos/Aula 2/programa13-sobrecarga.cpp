//----------------------------------------------------------------------------------------------------
// Exemplo 13: exemplo de sobrecarga de funções
//
// Progama que demostra a utilização de sobrecarga de funções.
//----------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

//----------------------------------------------------------------------------------------------------
// Protótipo de função
//----------------------------------------------------------------------------------------------------

void imprime();
void imprime(int valor);
void imprime(float valor);
void imprime(int N1, float N2);

//----------------------------------------------------------------------------------------------------
// Função principal
//----------------------------------------------------------------------------------------------------
int main() {

    cout << "\n";

    // Utiliza as funções sobrecarregadas
    imprime();
    imprime(10);
    imprime(10.99f);
    imprime(1, 0.99f);
    
    cout << "\n";

    // Fim do programa
    return 0;

}

//----------------------------------------------------------------------------------------------------
// Definição das funções
//----------------------------------------------------------------------------------------------------

// Função sobrecarregadas sem parâmetros
void imprime() {
    cout << "Função sem argumentos." << endl;
}

//----------------------------------------------------------------------------------------------------

// Função sobrecarregada, com um parâmetros inteiros
void imprime(int valor) {
    cout << "Função com argumento inteiro." << endl;
}

//----------------------------------------------------------------------------------------------------

// Função sobrecarregada, com um parâmetros real
void imprime(float valor) {
    cout << "Função com argumento real." << endl;
}

//----------------------------------------------------------------------------------------------------

// Função sobrecarregada, com dois parâmetros
void imprime(int N1, float N2) {
    cout << "Primeiro valor: " << N1 << endl;
    cout << "Segundo valor: " << N2 << endl;
}
