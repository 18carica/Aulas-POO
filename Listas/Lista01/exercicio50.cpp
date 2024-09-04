/* Programa 50 */
/* 50. Escrever um programa para verificar a nota do aluno em uma prova com 10 questões. O programa deve perguntar ao aluno a resposta de cada questão e ao final comparar com o gabarito da prova, calculando o total de acertos e a nota do aluno (atribuir 1 ponto por resposta certa). Após a entrada dos dados de um aluno, o programa deve verificar se mais alguém pretende utilizar o sistema. Após todos os alunos terem respondido o questionário, o programa deve apresentar o seguinte resultado:
    a. Maior e menor acerto;
    b. Total de alunos que utilizaram o sistema;
    c. A média das notas da turma.
Considere o seguinte gabarito:

Gabaarito da Prova:
01 - A
02 - B
03 - C
04 - D
05 - E
06 - A
07 - B
08 - C
09 - B
10 - A*/
// exercicio50.cpp

#include <iostream>
#include <vector>

//Função principal
int main() {
    const char gabarito[10] = {'A', 'B', 'C', 'D', 'E', 'A', 'B', 'C', 'B', 'A'};
    std::vector<int> notas;
    int totalAlunos = 0;
    int maiorAcerto = 0, menorAcerto = 10;
    char resposta;
    bool continuar = true;

    while (continuar) {
        int acertos = 0;
        std::cout << "Aluno " << (totalAlunos + 1) << ":\n";
        for (int i = 0; i < 10; i++) {
            std::cout << "Resposta da questão " << (i + 1) << ": ";
            std::cin >> resposta;
            if (resposta == gabarito[i]) {
                acertos++;
            }
        }
        notas.push_back(acertos);
        totalAlunos++;
        if (acertos > maiorAcerto) maiorAcerto = acertos;
        if (acertos < menorAcerto) menorAcerto = acertos;

        char continuarResposta;
        std::cout << "Outro aluno vai responder? (S/N): ";
        std::cin >> continuarResposta;
        continuar = (continuarResposta == 'S' || continuarResposta == 's');
    }

    int somaNotas = 0;
    for (int nota : notas) {
        somaNotas += nota;
    }

    double mediaNotas = static_cast<double>(somaNotas) / totalAlunos;

    std::cout << "Maior acerto: " << maiorAcerto << "\n";
    std::cout << "Menor acerto: " << menorAcerto << "\n";
    std::cout << "Total de alunos que utilizaram o sistema: " << totalAlunos << "\n";
    std::cout << "Média das notas da turma: " << mediaNotas << "\n";

    return 0;
}
