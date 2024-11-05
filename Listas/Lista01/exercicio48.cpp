/* Programa 48 */
/*48. Uma academia deseja fazer um senso entre seus clientes para descobrir o mais alto, o mais baixo, o mais gordo e o mais magro. Para isso, você deve escrever um programa que pergunte a cada um dos clientes da academia o seu código, a sua altura e o seu peso. O programa deve aceitar a entrada dessas informações, para diversos clientes, até que o usuário digite o valor 0 (zero) para o campo código. Ao terminar a entrada de dados, o programa deve exibir as informações do cliente mais alto, do cliente mais baixo, do cliente mais magro e do cliente mais gordo. O programa também deve exibir a informação sobre a média das alturas e a média dos pesos dos clientes.*/
// exercicio48.cpp

#include <iostream>

//Função principal
int main() {
    int peso, codigo, codigoAlto = 0, codigoBaixo = 0, codigoGordo = 0, codigoMagro = 0;
    double altura, alturaAlto = 0, alturaBaixo = 10000, pesoGordo = 0, pesoMagro = 10000;
    double somaAltura = 0, somaPeso = 0;
    int count = 0;

    // Loop para coletar informações de clientes até o código ser 0
    do {
        std::cout << "Digite o código do cliente (0 para terminar): ";
        std::cin >> codigo;
        if (codigo == 0) break;

        std::cout << "Digite a altura (em metros): ";
        std::cin >> altura;
        std::cout << "Digite o peso (em kg): ";
        std::cin >> peso;

        somaAltura += altura; // Soma das alturas para calcular a média
        somaPeso += peso; // Soma dos pesos para calcular a média
        count++;

        // Verifica o cliente mais alto
        if (altura > alturaAlto) {
            alturaAlto = altura;
            codigoAlto = codigo;
        }

        // Verifica o cliente mais baixo
        if (altura < alturaBaixo) {
            alturaBaixo = altura;
            codigoBaixo = codigo;
        }

        // Verifica o cliente mais gordo
        if (peso > pesoGordo) {
            pesoGordo = peso;
            codigoGordo = codigo;
        }

        // Verifica o cliente mais magro
        if (peso < pesoMagro) {
            pesoMagro = peso;
            codigoMagro = codigo;
        }

    } while (codigo != 0);

    // Exibe as informações do cliente mais alto, mais baixo, mais gordo e mais magro
    std::cout << "Cliente mais alto: Código " << codigoAlto << ", Altura: " << alturaAlto << " m" << std::endl;
    std::cout << "Cliente mais baixo: Código " << codigoBaixo << ", Altura: " << alturaBaixo << " m" << std::endl;
    std::cout << "Cliente mais gordo: Código " << codigoGordo << ", Peso: " << pesoGordo << " kg" << std::endl;
    std::cout << "Cliente mais magro: Código " << codigoMagro << ", Peso: " << pesoMagro << " kg" << std::endl;

    // Calcula e exibe as médias de altura e peso
    std::cout << "Média de altura dos clientes: " << somaAltura / count << " m" << std::endl;
    std::cout << "Média de peso dos clientes: " << somaPeso / count << " kg" << std::endl;

    return 0;
}
