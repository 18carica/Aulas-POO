//----------------------------------------------------------------------------------------------------------------------
// Exemplo 05: programa para demonstrar o uso de aninhamento de estruturas
//----------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <vector>

using namespace std;

//----------------------------------------------------------------------------------------------------------------------
// Estruturas
//----------------------------------------------------------------------------------------------------------------------

// Definição da estrutura Pokemon
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

// Definição da estrutura Treinador
struct Treinador {

    // Atributos
    string nome;
    string cidade;

    // Vetor para armazenar os Pokémons
    vector<Pokemon> pokemons;

};

//----------------------------------------------------------------------------------------------------------------------
// Função principal
//----------------------------------------------------------------------------------------------------------------------
int main() {

    cout << endl;
    cout << "* Exemplo de aninhamento de Estruturas\n\n";

    // Cria Treinador
    Treinador treinador;
    
    treinador.nome = "Ash Ketchum";
    treinador.cidade = "Pallet Town";

    //----------------------------------------------------------------------------------------------------------------------

    // Cria o Pikachu
    Pokemon pikachu;

    pikachu.nome = "Pikachu";
    pikachu.tipo = "Eletrico";
    pikachu.nivel = 40;
    pikachu.hp = 85;

    // Cria Greninja
    Pokemon greninja;

    greninja.nome = "Greninja";
    greninja.tipo = "Água / Sombrio";
    greninja.nivel = 35;
    greninja.hp = 60;

    // Cria o Hawlucha
    Pokemon hawlucha;

    hawlucha.nome = "Hawlucha";
    hawlucha.tipo = "Lutador / Voador";
    hawlucha.nivel = 32;
    hawlucha.hp = 55;

    //----------------------------------------------------------------------------------------------------------------------

    // Adiciona os Pokémons ao treinador
    treinador.pokemons.push_back(pikachu);
    treinador.pokemons.push_back(greninja);
    treinador.pokemons.push_back(hawlucha);

    //----------------------------------------------------------------------------------------------------------------------

    // Exibindo os dados do treinador e de seus Pokémons

    cout << ">> Dados do Treinador\n" << endl;
    cout << "Nome: " << treinador.nome << endl;
    cout << "Cidade: " << treinador.cidade << "\n\n";

    cout << ">> Pokémonsdo Treinador\n" << endl;

    // Loop para exibir os dados dos Pokém,ons
    for (int i = 0; i < treinador.pokemons.size(); i++) {
        cout << "Nome: " << treinador.pokemons[i].nome << endl;
        cout << "Tipo: " << treinador.pokemons[i].tipo << endl;
        cout << "Nível: " << treinador.pokemons[i].nivel << endl;
        cout << "HP: " << treinador.pokemons[i].hp << endl;
        cout << endl;
    }

    //----------------------------------------------------------------------------------------------------------------------

    // Fim do programa
    return 0;

}