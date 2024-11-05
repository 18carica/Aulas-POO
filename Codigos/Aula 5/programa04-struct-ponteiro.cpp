//----------------------------------------------------------------------------------------------------------------------
// Exemplo 04: Programa para demonstrar o uso de ponteiros para estruturas
//----------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

//----------------------------------------------------------------------------------------------------------------------
// Estruturas
//----------------------------------------------------------------------------------------------------------------------

// DEfinição da estrutura Pokemon
struct Pokemon {

    // Atributos
    string nome;
    string tipo;
    int nivel;
    int hp;

    // Método para aumentar os pontos de vida do Pokémon
    void aumentaHP(int pontos) {
        hp += pontos;
    }

};

//----------------------------------------------------------------------------------------------------------------------
// Função principal
//----------------------------------------------------------------------------------------------------------------------
int main() {
    
    cout << endl;
    cout << "* Exemplo Pokemon\n\n";

    // Alocando dinamicamente uma estrutura do tipo Pokemon
    Pokemon* ptrPokemon = new  Pokemon;

    // Utiliza o ponteiro para atribuir os valores ao Pokemémon
    ptrPokemon->nome = "Pikachu";
    ptrPokemon->tipo = "Elétrico";
    ptrPokemon->nivel = 1;
    ptrPokemon->hp = 1;

    // Utiliza o ponteiro para acessar os valores do Pokemon
    cout << ">> Dados do Pokemon\n" << endl;
    cout << "Nome: " << ptrPokemon->nome << endl;
    cout << "Tipo: " << ptrPokemon->tipo << endl;
    cout << "Nivel: " << ptrPokemon->nivel << endl;
    cout << "HP: " << ptrPokemon->hp << endl;

    cout << ">> Um Pokémon selvagem apareceu... Vamos batalhar!\n\n";
    cout << ">> Seu Pikachu venceu uma luta muito difícil...";
    cout << ">> Ele ganhou 50 pontos!\n";

    // Aumenta o hp do Pokémon
    ptrPokemon->aumentaHP(50);

    cout << "Olhe, oque está acontencendo? Seu Pikachu está brilhando!\n";

    // Aumenta o nível do Pikachu
    ptrPokemon->nivel++;

    cout << "O Pikachu subiu nível!\n\n";

    // Utiliza o ponteiro para acessar os valores doPokémon
    cout << ">> Dados do Pokemon\n" << endl;
    cout << "Nome: " << ptrPokemon->nome << endl;
    cout << "Tipo: " << ptrPokemon->tipo << endl;
    cout << "Nivel: " << ptrPokemon->nivel << endl;
    cout << "HP: " << ptrPokemon->hp << endl;

    cout << endl;

    //----------------------------------------------------------------------------------------------------------------------

    // Liberando a mémoria alocada
    delete ptrPokemon;

    // Fim do Programa 
    return 0;

}

