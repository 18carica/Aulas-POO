/* Programa 06 */
/*6. Escreva um programa para efetuar o calculo da quantidade total de litros de combustível gasta em uma viagem. O usuário devera fornecer os valores do tempo gasto na viagem, da velocidade media que foi utilizada e da quantidade de quilômetros que o automóvel faz com um litro de combustível. Para obter a distância percorrida, utilize a fórmula DISTANCIA = TEMPO X VELOCIDADE. A quantidade de litros de combustível gasta na viagem pode ser obtida pela fórmula DISTANCIA/QUANTIDADE_KILOMETROS_LITRO. O programa que foi percorrida e da quantidade de litros de combustível que foi utilizada na viagem. Pra apresentar o resultado, considere a utilização de duas casas decimais.*/
// exercicio06.cpp

#include <iostream>
#include <iomanip>  // Necessário para std::setprecision

//Função principal
int main() {
    double tempo, velocidadeMedia, kmPorLitro, distancia, litrosGastos;

    // Solicita a entrada do tempo gasto na viagem, velocidade média e quilometragem por litro
    std::cout << "Informe o tempo gasto na viagem (em horas): ";
    std::cin >> tempo;
    std::cout << "Informe a velocidade média durante a viagem (em km/h): ";
    std::cin >> velocidadeMedia;
    std::cout << "Informe a quantidade de quilômetros que o automóvel faz com um litro de combustível: ";
    std::cin >> kmPorLitro;

    // Calcula a distância percorrida
    distancia = tempo * velocidadeMedia;

    // Calcula a quantidade de litros de combustível gastos
    litrosGastos = distancia / kmPorLitro;

    // Apresenta os resultados com duas casas decimais
    std::cout << "A distância percorrida foi de: " << std::fixed << std::setprecision(2) << distancia << " km" << std::endl;
    std::cout << "A quantidade de litros de combustível utilizada na viagem foi: " 
              << std::fixed << std::setprecision(2) << litrosGastos << " litros" << std::endl;

    return 0;
} 