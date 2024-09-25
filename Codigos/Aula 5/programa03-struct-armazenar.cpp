//----------------------------------------------------------------------------------------------------------------------
// Exemplo 03: Programa qpara armazenar notas de alunos
//----------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>       // Permite o uso de vector
#include <algorithm>    // Permite o uso da função sort()
#include <sstream>      // Manipulador de cadeias de caracteres

using namespace std;

//----------------------------------------------------------------------------------------------------------------------
// Estruturas
//----------------------------------------------------------------------------------------------------------------------

// Estrutura para cadastrar os dados dos alunos
struct Cadastro {
    string nome;
    vector<float> notas; // Vetor para armazenar as notas
    float media;
};

//----------------------------------------------------------------------------------------------------------------------
// Protótipos das funções
//----------------------------------------------------------------------------------------------------------------------

float calcularMedia(const vector<float> &notas);
bool compararNomes(const Cadastro &a, const Cadastro &b);

//----------------------------------------------------------------------------------------------------------------------
// Função principal
//----------------------------------------------------------------------------------------------------------------------
int main() {

    cout << endl;
    cout << "* Cadastro de Notas Escolares\n\n";

    // Vetor para armazenar os cadastros dos alunos
    vector<Cadastro> alunos;

    // Total de alunos
    int totalAlunos;

    // Total de notas
    int totalNotas;

    // Média global da turma
    float mediaGlobal = 0.0f;

    // Cotadores
    int i, j;

    //----------------------------------------------------------------------------------------------------------------------

    // Entrada do toal de alunos e do total de anotas

    cout << ">> Informe o total de alunos: ";
    cin >> totalAlunos;

    cout << ">> Informe o total de notas: ";
    cin >> totalNotas;

    cout << endl;

    //----------------------------------------------------------------------------------------------------------------------

    // Cadastro dos dados de cada aluno

    // Loop para cadastrar os alunos
    for (i = 0; i < totalAlunos; i++) {

        // Estrutura para cadastro dos dados do aluno
        Cadastro aluno;

        cout << ">> Informe o nome do aluno " << i + 1 << ": ";

        // Entrada do nome do aluno
        // Ignora os espaços em branco deixados no buffer
        getline(cin >> ws, aluno.nome);

        //----------------------------------------------------------------------------------------------------------------------

        cout << "   Informe a lina com as " << totalNotas << " notas: ";

        // Variável para armazenar a linha com as notas
        string linhaNotas;

        // Entrada da linha de notas
        getline(cin, linhaNotas);

        // Extrair as notas da linha
        istringstream stream(linhaNotas);

        // Variável para armazenar a nota
        float notaTemp;

        // Extrai cada nota da linha e insere no vetor de notas
        // dentro da estrutura Cadastro
        while (stream >> notaTemp) {
            aluno.notas.push_back(notaTemp);
        }

        //----------------------------------------------------------------------------------------------------------------------

        // Calcule e atribui a média do aluno
        aluno.media = calcularMedia(aluno.notas);

        // Adicionar o cadastro do aluno dentro do vetor de alunos
        alunos.push_back(aluno);

        // Atualiza as informações sobre a média global da turma
        mediaGlobal += aluno.media;

        // Pula uma linha entre cada aluno
        cout << endl;

    }

    //----------------------------------------------------------------------------------------------------------------------

    // Calcuka a média global da turma
    mediaGlobal /= totalAlunos;

    //----------------------------------------------------------------------------------------------------------------------

    // Executa a função para ordenar os cadastros dentro do vetor
    // No caso, realiza a ordenação de acordo com os nomes cadastrados
    sort(alunos.begin(), alunos.end(), compararNomes);

    //----------------------------------------------------------------------------------------------------------------------

    // Apresenta o resultado

    // Formata a exibição do resultado
    cout << setprecision(2);
    cout << setiosflags(ios::fixed);

    cout << "* Resultado final\n\n";

    // Loop para percorer os alunos cadastrados no vetor de alunos
    for (const auto& aluno : alunos) {

        // Exibe o nome do aluno
        cout << "Aluno: " << aluno.nome << endl;
        cout << "Notas: ";

        // Exibe o nome do aluno
        for (float nota : aluno.notas) {
            cout << nota << "  ";
        }

        // Exibe a média do aluno
        cout << "\nMédia: " << aluno.media << endl;

        // Pula uma linha entre os dados de cada aluno
        cout << endl;

    }

    // Exibe a média global da turma
    cout << "* Média global da turma: " << mediaGlobal << "\n\n";

    //----------------------------------------------------------------------------------------------------------------------

    // Fim do programa
    return 0;

}

//----------------------------------------------------------------------------------------------------------------------
// Definição das funções
//----------------------------------------------------------------------------------------------------------------------

// Função para calcular a média das notas do aluno
float calcularMedia(const vector<float> &notas) {

    float soma = 0.0f;

    // Loop que pecorre as notas do aluno
    for (float nota : notas) {
        soma += nota;
    }

    // Retorna a média do aluno
    return soma / notas.size(); // Retorna a média do aluno

}

//----------------------------------------------------------------------------------------------------------------------

// Função de comparação, para ordenar duas estruturas pelo atributos nome
bool compararNomes(const Cadastro &a, const Cadastro &b) {
    return a.nome < b.nome;
}

