//----------------------------------------------------------------------------------------------------------------------
// Exemplo 04: desvio condicional composto

// Programa que permite a leitura de duas notas de um aluno e calcula a m�dia.
// Se o valor da m�dia for manor que 4 , informa que o aluno foi reprovado.
// Se o valor da m�dia estiver entre 4 e 6, informe que o aluno deve realizar.
// a prova de recupera��o (IFA). Se o valor da m�dia for maior ou igual ao
// valor 6, informa que o aluno foi aprovado. O programa deve exibir a situa��o
// do aluno, juntamente com a m�dia que ele obteve. Considere a apresenta��o
// dos valores utilizando duas casas decimais.
//----------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>

using namespace std;

//----------------------------------------------------------------------------------------------------------------------
// Fun��o principal
//----------------------------------------------------------------------------------------------------------------------
int main() {

    // Declara��o das vari�veis
    float n1, n2, media{0};

    // Entrada de dados
    cout << "\n";
    cout << "Desvio condicional composto \n\n";
    cout << "* Informe as duas notas do aluno: ";

    cin >> n1 >> n2;

    //Calcula a m�dia do aliuno
    media = (n1 + n2) /2;

    // Fomata��o do resultado
    cout << setprecision(3);
    cout << setiosflags(ios::showpoint);

    // Verifica a situa��o do aluno
    if (media < 4){
        cout << "* O ALuno foi reprovado com m�dia final " << media << "!";
    }
    else if (media >= 4 && media < 6){
        cout << "* O aluno obteve a m�dia final " << media << ". Ele deve realizar IFA.";
    }
    else {
        cout << "* O aluno foi aprovado com m�dia final " << media << "!";
    }

    cout << "\n\n";

    // Fim do Programa
    return 0;

}
