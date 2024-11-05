#include <iostream>
#include <limits> // Necess�rio para usar DBL_MAX

int main() {
    int peso, codigo, codigoAlto = 0, codigoBaixo = 0, codigoGordo = 0, codigoMagro = 0;
    double altura, alturaAlto = 0, alturaBaixo = std::numeric_limits<double>::max();
    double pesoGordo = 0, pesoMagro = std::numeric_limits<double>::max();
    double somaAltura = 0, somaPeso = 0;
    int count = 0;

    // Loop para coletar informa��es de clientes at� o c�digo ser 0
    do {
        std::cout << "Digite o c�digo do cliente (0 para terminar): ";
        std::cin >> codigo;
        if (codigo == 0) break;

        std::cout << "Digite a altura (em metros): ";
        std::cin >> altura;
        std::cout << "Digite o peso (em kg): ";
        std::cin >> peso;

        somaAltura += altura; // Soma das alturas para calcular a m�dia
        somaPeso += peso; // Soma dos pesos para calcular a m�dia
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

    // Exibe as informa��es do cliente mais alto, mais baixo, mais gordo e mais magro
    if (count > 0) {
        std::cout << "Cliente mais alto: C�digo " << codigoAlto << ", Altura: " << alturaAlto << " m" << std::endl;
        std::cout << "Cliente mais baixo: C�digo " << codigoBaixo << ", Altura: " << alturaBaixo << " m" << std::endl;
        std::cout << "Cliente mais gordo: C�digo " << codigoGordo << ", Peso: " << pesoGordo << " kg" << std::endl;
        std::cout << "Cliente mais magro: C�digo " << codigoMagro << ", Peso: " << pesoMagro << " kg" << std::endl;

        // Calcula e exibe as m�dias de altura e peso
        std::cout << "M�dia de altura dos clientes: " << somaAltura / count << " m" << std::endl;
        std::cout << "M�dia de peso dos clientes: " << somaPeso / count << " kg" << std::endl;
    } else {
        std::cout << "Nenhum dado foi inserido." << std::endl;
    }

    return 0;
}
