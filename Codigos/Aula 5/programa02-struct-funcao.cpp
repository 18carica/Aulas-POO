//----------------------------------------------------------------------------------------------------------------------
// Exemplo 02: Programa que demonstra como declarar uma estrutura com função
//----------------------------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

//----------------------------------------------------------------------------------------------------------------------

// Definição da estrutura Ponto
struct Ponto {

    // Coordenadas do ponto
    int x;
    int y;

    //----------------------------------------------------------------------------------------------------------------------

    // Função para definir as coordenadas do ponto
    void defineCoordenadas(int px, int py) {
        x = px;
        y = py;
    }

    // Função para exibir as coordenadas do ponto
    // O modificador const indica que ela não modifica os membros da estrutura
    void exibeCoordenadas(string P) const {
        cout << "Coordenadas do ponto " << P << ": (" << x << ", " << y << ")\n";
    }

};

//----------------------------------------------------------------------------------------------------------------------
// Função aprincipal
//----------------------------------------------------------------------------------------------------------------------
int main() {

    cout << "\n";
    cout << "Declaração de Estruturas com Atributos e Funções\n\n";

    // Declaração de uma variável do tipo Ponto
    Ponto p1;

    // Executa a função quie define as coordenadas do ponto
    p1.defineCoordenadas(10, 20);

    // Executa a função que exibe as coordenadas do ponto
    p1.exibeCoordenadas("P1");

    cout << endl;

    // Fim do programa
    return 0;
    
}