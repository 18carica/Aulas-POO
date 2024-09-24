//----------------------------------------------------------------------------------------------------------------------
// Exemplo 03: Programa que demonstra como declarar uma estrutura com função
//----------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>       // Permite o uso de vector
#include <algorithm>    // Permite o uso da função sort()
#include <sstream>      // MAnipulador de cadeias de caracteres

using namespace std;

// Estrutura para cadastrar os dados dos alunos
struct Cadastro {
    string nome;
    vector<float> notas; // Vetor para armazenar as notas
    float media;
};

// Função para calcular a média das notas do aluno
float calcularMedia(const vector<float> &notas) {

    float soma = 0.0f;

    // Loop que pecorre as notas do aluno
    for (float nota : notas) {
        soma += nota;
    }

    return soma / notas.size(); // Retorna a média do aluno

}

// Função de comparação, para ordenar duas estruturas pelo atributos nome
bool compararNomes(const Cadastro)