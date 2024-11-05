/* Programa 16 */
/*16. Escreva um programa que peça o tamanho de um arquivo para download (em MB) e a velocidade de um link de Internet (em Mbps). Em seguida, o programa deve calcular e informar o tempo aproximado de download do arquivo utilizando este link (em minutos).*/
// exercicio16.cpp

//Função principal
#include <iostream>
#include <iomanip>  // Necessário para std::setprecision

int main() {
    double tamanhoArquivo, velocidadeInternet, tempoDownload;

    // Solicita a entrada do tamanho do arquivo e da velocidade da internet
    std::cout << "Digite o tamanho do arquivo para download (em MB): ";
    std::cin >> tamanhoArquivo;
    std::cout << "Digite a velocidade da internet (em Mbps): ";
    std::cin >> velocidadeInternet;

    // Calcula o tempo de download
    tempoDownload = (tamanhoArquivo * 8) / velocidadeInternet / 60;  // Multiplicação por 8 para converter MB em Megabits

    // Apresenta o tempo de download em minutos
    std::cout << "Tempo aproximado de download: " << std::fixed << std::setprecision(2) << tempoDownload << " minutos" << std::endl;

    return 0;
}
