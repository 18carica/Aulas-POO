//----------------------------------------------------------------------------------------------------------------------
// Exemplo 04: desvio condicional composto

// Programa que permite a leitura de duas notas de um aluno e calcula a média.
// Se o valor da média for manor que 4 , informa que o aluno foi reprovado.
// Se o valor da média estiver entre 4 e 6, informe que o aluno deve realizar.
// a prova de recuperação (IFA). Se o valor da média for maior ou igual ao
// valor 6, informa que o aluno foi aprovado. O programa deve exibir a situação
// do aluno, juntamente com a média que ele obteve. Considere a apresentação
// dos valores utilizando duas casas decimais.
//----------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>

using namespace std;

//----------------------------------------------------------------------------------------------------------------------
// Função principal
//----------------------------------------------------------------------------------------------------------------------
int main() {

    // Declaração das variáveis
    float n1, n2, media{0};

    // Entrada de dados
    cout << "\n";
    cout << "Desvio condicional composto \n\n";
    cout << "* Informe as duas notas do aluno: ";

    cin >> n1 >> n2;

    //Calcula a média do aliuno
    media = (n1 + n2) /2;

    // Fomatação do resultado
    cout << setprecision(3);
    cout << setiosflags(ios::showpoint);

    // Verifica a situação do aluno
    if (media < 4){
        cout << "* O ALuno foi reprovado com média final " << media << "!";
    }
    else if (media >= 4 && media < 6){
        cout << "* O aluno obteve a média final " << media << ". Ele deve realizar IFA.";
    }
    else {
        cout << "* O aluno foi aprovado com média final " << media << "!";
    }

    cout << "\n\n";

    // Fim do Programa
    return 0;

}
