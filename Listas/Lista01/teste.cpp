#include <iostream>
#include <limits> // Necessário para usar DBL_MAX

int main() {
    int peso, codigo, codigoAlto = 0, codigoBaixo = 0, codigoGordo = 0, codigoMagro = 0;
    double altura, alturaAlto = 0, alturaBaixo = std::numeric_limits<double>::max();
    double pesoGordo = 0, pesoMagro = std::numeric_limits<double>::max();
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
    if (count > 0) {
        std::cout << "Cliente mais alto: Código " << codigoAlto << ", Altura: " << alturaAlto << " m" << std::endl;
        std::cout << "Cliente mais baixo: Código " << codigoBaixo << ", Altura: " << alturaBaixo << " m" << std::endl;
        std::cout << "Cliente mais gordo: Código " << codigoGordo << ", Peso: " << pesoGordo << " kg" << std::endl;
        std::cout << "Cliente mais magro: Código " << codigoMagro << ", Peso: " << pesoMagro << " kg" << std::endl;

        // Calcula e exibe as médias de altura e peso
        std::cout << "Média de altura dos clientes: " << somaAltura / count << " m" << std::endl;
        std::cout << "Média de peso dos clientes: " << somaPeso / count << " kg" << std::endl;
    } else {
        std::cout << "Nenhum dado foi inserido." << std::endl;
    }

    return 0;
}
