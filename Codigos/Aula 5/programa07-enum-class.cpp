//----------------------------------------------------------------------------------------------------------------------
// Exemplo 07: programa para demonstrar o uso enumerações com escopo
//----------------------------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

// Enumeração para controlar o estado de um jogo
enum class EstadoJogo {
    MenuPrincipal,
    Jogando,
    Pausado,
    GameOver
};

//----------------------------------------------------------------------------------------------------------------------
// Protótipo das funções
//----------------------------------------------------------------------------------------------------------------------

void mostrarEstado(EstadoJogo estado);

//----------------------------------------------------------------------------------------------------------------------
// Função Principal
//----------------------------------------------------------------------------------------------------------------------
int main() {

    cout << endl;
    cout << "* Exemplo de Enumeração\n\n";

    // Declara o enumerador, indicando que o jogo está no menu principal
    EstadoJogo estadoAtual = EstadoJogo::MenuPrincipal;

    // Mostra o estado inicial do jogo
    mostrarEstado(estadoAtual);

    //----------------------------------------------------------------------------------------------------------------------

    // Simula o início do jogo
    estadoAtual = EstadoJogo::Jogando;

    mostrarEstado(estadoAtual);

    //----------------------------------------------------------------------------------------------------------------------

    // Simula o jogo sendo pausado
    estadoAtual = EstadoJogo::Pausado;

    mostrarEstado(estadoAtual);

    //----------------------------------------------------------------------------------------------------------------------

    // Simula o término do jogo
    estadoAtual = EstadoJogo::GameOver;

    mostrarEstado(estadoAtual);

    //----------------------------------------------------------------------------------------------------------------------

    cout << endl;

    // Fim do Progama
    return 0;

}

//----------------------------------------------------------------------------------------------------------------------
// Definição das funções
//----------------------------------------------------------------------------------------------------------------------

// Função para exibir o estado do jogo
void mostrarEstado(EstadoJogo estado) {

    switch (estado) {
        case EstadoJogo::MenuPrincipal:
            cout << ">> Vocé está no Menu Principal." << endl;
            break;
        case EstadoJogo::Jogando:
            cout << ">> Vocé está em andamento." << endl;
            break;
        case EstadoJogo::Pausado:
            cout << ">> O jogo está pausado." << endl;
            break;
        case EstadoJogo::GameOver:
            cout << ">> Game Over." << endl;
            break;
        default:
            cout << ">> Estado desconhecido." << endl;
    }

}
