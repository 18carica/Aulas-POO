//----------------------------------------------------------------------------------------------------------------
// Exemplo 03: desvio condicional simples

// Programa que permite a leitura de duas notas de um aluno e calcula a m�dia
// Se essa m�dia for maior ou igual ao valor 6, exibe uma mensagem informando
// que o Aluno foi aprovado, juntamente com o valor da m�dia que foi obtida
// Considere a apresenta��o dos valores utilizando duas casas decimais.
//----------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>

using namespace std;

//-------------------------------
// Fun��o principal
//----------------------------------------------------------------------------------------------------------------------
int main() {

    // Declara��o das vari�veis
    float n1, n2, media{0};

    // Entrada de dados
    cout << "\n";
    cout << "Desvio condicional simples \n\n";
    cout << "* Informe as duas notas do aluno: ";

    cin >> n1 >> n2;

    //Calcula a m�dia do aliuno
    media = (n1 + n2) /2;

    // Fomata��o do resultado
    cout << setprecision(3);
    cout << setiosflags(ios::showpoint);

    // Verifica se ele foi aprovado
    if (media >= 6) {
        cout << "O aluno foi aprovado com m�dia final " << media << "!\n";
    }

    cout << "\n";

    // Fim do Programa
    return 0;

}
