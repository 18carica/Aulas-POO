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

// Função principal do programa
int main() {
    // Definição do gabarito da prova, contendo as respostas corretas de 10 questões
    const char gabarito[10] = {'A', 'B', 'C', 'D', 'E', 'A', 'B', 'C', 'B', 'A'};
    
    // Vetor para armazenar as notas de cada aluno
    std::vector<int> notas;
    
    // Variável para contar o número total de alunos que participaram
    int totalAlunos = 0;
    
    // Variáveis para armazenar o maior e o menor número de acertos
    int maiorAcerto = 0, menorAcerto = 10;
    
    // Variável para armazenar a resposta de cada aluno
    char resposta;
    
    // Variável booleana para controlar se há mais alunos para responder o teste
    bool continuar = true;

    // Loop principal que processa as respostas de cada aluno
    while (continuar) {
        int acertos = 0;  // Contador de acertos para o aluno atual
        std::cout << "Aluno " << (totalAlunos + 1) << ":\n";  // Exibe o número do aluno

        // Loop que processa cada questão da prova para o aluno atual
        for (int i = 0; i < 10; i++) {
            std::cout << "Resposta da questão " << (i + 1) << ": ";  // Solicita a resposta da questão
            std::cin >> resposta;  // Recebe a resposta do aluno

            // Verifica se a resposta do aluno está correta comparando com o gabarito
            if (resposta == gabarito[i]) {
                acertos++;  // Incrementa o contador de acertos se a resposta for correta
            }
        }

        // Armazena o número de acertos do aluno atual no vetor de notas
        notas.push_back(acertos);
        
        totalAlunos++;  // Incrementa o contador de alunos

        // Atualiza o maior e menor número de acertos, se necessário
        if (acertos > maiorAcerto) maiorAcerto = acertos;
        if (acertos < menorAcerto) menorAcerto = acertos;

        // Pergunta se outro aluno vai responder
        char continuarResposta;
        std::cout << "Outro aluno vai responder? (S/N): ";
        std::cin >> continuarResposta;

        // Atualiza a variável 'continuar' de acordo com a resposta do usuário
        continuar = (continuarResposta == 'S' || continuarResposta == 's');
    }

    // Calcula a soma das notas de todos os alunos
    int somaNotas = 0;
    for (int nota : notas) {
        somaNotas += nota;  // Adiciona cada nota à soma total
    }

    // Calcula a média das notas da turma
    double mediaNotas = static_cast<double>(somaNotas) / totalAlunos;

    // Exibe o maior número de acertos
    std::cout << "Maior acerto: " << maiorAcerto << "\n";

    // Exibe o menor número de acertos
    std::cout << "Menor acerto: " << menorAcerto << "\n";

    // Exibe o número total de alunos que utilizaram o sistema
    std::cout << "Total de alunos que utilizaram o sistema: " << totalAlunos << "\n";

    // Exibe a média das notas da turma
    std::cout << "Média das notas da turma: " << mediaNotas << "\n";

    return 0;  // Finaliza o programa
}
