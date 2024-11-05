//----------------------------------------------------------------------------------------------------------------------
// Exemplo 06: programa para demonstrar o uso de uniões
//----------------------------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

// Definição da união
union Cadastro {
    const char *nome;
    float nota1;
    float nota2;
};

//----------------------------------------------------------------------------------------------------------------------
// Função Principal
//----------------------------------------------------------------------------------------------------------------------
int main () {

    cout << endl;
    cout << "* Exemplo de Uniões\n\n";

    // Declara uma variável do tipo Cadastro
    union Cadastro aluno;

    //----------------------------------------------------------------------------------------------------------------------

    // Exibe o endereço de memória utilizado por cada atributo
    cout << "Endereço de memória utilizado por <nome>: " << &aluno.nome << endl;
    cout << "Endereço de memória utilizado por <nota1>: " << &aluno.nota1 << endl;
    cout << "Endereço de memória utilizado por <nota2>: " << &aluno.nota2 << endl;
    cout << endl;

    //----------------------------------------------------------------------------------------------------------------------

    // Atribui um valor para o atributo noome
    aluno.nome = "PAulo Giovani";
    cout << "Nome: " << aluno.nome << endl;

    // Atribui um valor para o atributo nota 1
    aluno.nota1 = 10;
    cout << "Nota 1: " << aluno.nota1 << endl;

    // Atrinui um valor para o atributo nota 2
    aluno.nota2 = 10;
    cout << "Nota 2: " << aluno.nota2 << endl;

    cout << endl;

    //----------------------------------------------------------------------------------------------------------------------

    // Tentativa de acessar o valor de um atributo que não está ativo
    // Nesse caso, o programa resulta em um comportamento indefinido
    cout << "Nome: " << aluno.nome << endl;

    //----------------------------------------------------------------------------------------------------------------------

    // Fim do programa
    return 0;

}